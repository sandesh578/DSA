#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
   int data;
   Node *next;
   Node(int data){
     this->data=data;
     this->next=NULL;
   }
};

class  CircularLinkedList {
    public:
     Node *head=NULL;
     void InsertAtLast(int val){
       Node *newNode=new Node(val);
       if(head==NULL){
          head=newNode;
          head->next=head;
       }else{
          Node *temp=head;
          while(temp->next!=head){
            temp=temp->next;
          }
          temp->next=newNode;
          newNode->next=head;
       }
     }

    void splitList(Node *head, Node **head1_ref, Node **head2_ref)
    {
        Node *slow=head;
        Node *fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=head){
                fast=fast->next;
            }
            if(fast->next==head){
                *head1_ref=fast->next;
                *head2_ref=slow->next;
                fast->next=*head2_ref;
                slow->next=*head1_ref;
                break;
            }
        }
    }
     
     void deleteNode(int val){
       if(head==NULL){
         cout<<"List is empty";
       }else{
         if(head->data==val&&head->next==head){
            head=NULL;
         }
         else if(head->data==val&&head->next!=head){
           head=head->next;
         }
         Node *temp=head;
         Node *prev=NULL;
         do{
            prev=temp;
            temp=temp->next;
            if(temp->data==val){
              prev->next=temp->next;
              break;
            }
         }while(temp!=head);
       }
     }

     void display(Node *head){
       if(head==NULL){
         cout<<"List is empty"<<endl;
       }else{
         Node *temp=head;
         cout<<"Elements in the list are:"<<endl;
         do{
           cout<<temp->data<<" "<<endl;
           temp=temp->next;
         }while(temp!=head);
       }
     }
};

int main(){
  int n;
  cout<<"Enter the number of elements to insert:"<<endl;
  cin>>n;
  CircularLinkedList li;
  cout<<"Enter "<<n<<" elements to list"<<endl;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    li.InsertAtLast(x);
  }
  li.display(li.head);
  int val;
  cout<<"Enter the value to delete: ";
  cin>>val;
  li.deleteNode(val);
  cout<<"After deletion"<<endl;
  li.display(li.head);
  Node *head1=NULL;
  Node *head2=NULL;
  li.splitList(li.head,&head1,&head2);
  li.display(head1);
  li.display(head2);
  return 0;
}
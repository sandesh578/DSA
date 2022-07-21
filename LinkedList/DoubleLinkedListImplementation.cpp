#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
   int data;
   Node *next;
   Node *prev;
   Node(int data){
     this->data=data;
     this->next=NULL;
     this->prev=NULL;
   }
};

class LinkedList{
    public:
     Node *head=NULL;
     void InsertAtLast(int val){
       Node *newNode=new Node(val);
       if(head==NULL){
          head=newNode;
       }else{
          Node *temp=head;
          while(temp->next!=NULL){
            temp=temp->next;
          }
          temp->next=newNode;
          newNode->prev=temp;
       }
     }

    Node *ReverseInAGroup(Node *head,int pos){
      if(head==NULL||pos==0){
        return head;
      }else{
          Node *curr=head;
          Node *pre=NULL;
          Node *nex=NULL;
          int c=0;
          while(curr!=NULL&&c<pos){
             nex=curr->next;
             curr->prev=pre;
             pre->next=curr;
             pre=curr;
             curr=nex;c++;
          }
          if(nex!=NULL){
            head=ReverseInAGroup(head,pos);
          }
          return head;
      }
    }
    Node *rotateByN(Node *head,int pos){
        if(head==NULL||pos==0){
          return head;
        }else{
          Node *curr = head;
          while (pos>0)
          {
              curr = curr->next;
              pos--;
          }
      
          Node *tail = curr->prev;
          Node *NewHead = curr;
          tail->next = NULL;
          curr->prev = NULL;
          while (curr->next != NULL)
          {
              curr=curr->next;
          }
          curr->next = head;
          head->prev = curr;
          head = NewHead;
          return head;
        }
    }

    Node* reverseDLL(Node * head)
    {
        if(head==NULL||head->next==NULL){
            return head;
        }
      Node *temp=head;
      while(temp->next!=NULL){
          temp=temp->next;
      }
      head=temp;
      temp->next=temp->prev;
      temp->prev=NULL;
      temp=temp->next;
      while(temp->prev!=NULL){
          Node *curr=temp->next;
          temp->next=temp->prev;
          temp->prev=curr;
          temp=temp->next;
      }
      temp->prev=temp->next;
      temp->next=NULL;
      return head;
    }

    void display(){
       if(head==NULL){
         cout<<"List is empty"<<endl;
       }else{
         Node *temp=head;
         cout<<"Elements in the list are:"<<endl;
         while(temp!=NULL){
           cout<<temp->data<<" "<<endl;
           temp=temp->next;
         }
       }
     }
};

int main(){
  int n;
  cout<<"Enter the number of elements to insert:"<<endl;
  cin>>n;
  LinkedList li;
  cout<<"Enter "<<n<<" elements to list"<<endl;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    li.InsertAtLast(x);
  }
  li.display();
  
  li.head=li.reverseDLL(li.head);
  cout<<"After reversal"<<endl;
  li.display();

  cout<<"After rotation"<<endl;
  li.head=li.rotateByN(li.head,2);
  li.display();

  cout<<"After reversal in group"<<endl;
  li.head=li.ReverseInAGroup(li.head,3);
  li.display();
  return 0;
}
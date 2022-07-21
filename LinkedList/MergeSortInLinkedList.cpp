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
       }
     }

    Node* merge(Node* first,Node *second) {
        Node *ans=NULL;
        if(first==NULL){
            return second;
        }
        if(second==NULL){
            return first;
        }
        
        if(first->data<=second->data){
            ans=first;
            ans->next=merge(first->next,second);
        }else{
            ans=second;
            ans->next=merge(first,second->next);
        }
        return ans;
    }
    
    void FindMiddle(Node *head,Node **first,Node **second){
        Node *slow=head;
        Node *fast=head->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        *first=head;
        *second=slow->next;
        slow->next=NULL;
    }
    
    void merge_Sort(Node** head){
        Node *curr=*head;
        if(curr==NULL||curr->next==NULL){
            return;
        }
        Node *first;
        Node *second;
        FindMiddle(curr,&first,&second);
        merge_Sort(&first);
        merge_Sort(&second);
        *head=merge(first,second);
    }
    
    Node* mergeSort(Node* head) {
        merge_Sort(&head);
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
  cout<<"Elements after merge sort:"<<endl;
  li.head=li.mergeSort(li.head);
  li.display();
  return 0;
}
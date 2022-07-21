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

    Node *Reverse(Node *head){
       Node *temp=head;
       Node *prev=NULL,*q=NULL;
       while(temp!=NULL){
         q=temp->next;
         temp->next=prev;
         prev=temp;
         temp=q;
       }
       return prev;
     }

    Node* addTwoLists(Node* first, Node* second)
        {
            first=Reverse(first);
            second=Reverse(second);
            Node *temp;
            Node *res=NULL;
            Node *curr=NULL;
            int sum=0,carry=0;
            while(first!=NULL||second!=NULL){
                sum=carry+(first?first->data:0)+(second?second->data:0);
                carry=sum>=10?1:0;
                sum=sum%10;
                temp=new Node(sum);
                if(res==NULL){
                    res=temp;
                }else{
                    curr->next=temp;
                }
                curr=temp;
                if(first){
                    first=first->next;
                }
                if(second){
                    second=second->next;
                }
            }
            if(carry>0){
                temp=new Node(carry);
                curr->next=temp;
                curr=temp;
            }
            res=Reverse(res);
            return res;
        }

    Node* findIntersection(Node* head1, Node* head2)
   {
    Node *ptr1=head1;
    Node *ptr2=head2;
    Node *head=NULL;
    Node *curr=NULL;
    while(ptr1&&ptr2){
        if(ptr1->data==ptr2->data){
            Node *newNode=new Node(ptr1->data);
            if(head==NULL){
                head=newNode;
                curr=newNode;
            }else{
                curr->next=newNode;
                curr=curr->next;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }else{
            if(ptr1->data<ptr2->data){
                ptr1=ptr1->next;
            }else{
                ptr2=ptr2->next;
            }
        }
     }
     return head;
   }

   int intersectPoint(Node* head1, Node* head2)
    {
        Node *ptr1=head1;
        Node *ptr2=head2;
        int cnt1=0,cnt2=0;
        while(ptr1||ptr2){
            if(ptr1){
                ptr1=ptr1->next;
                cnt1++;
            }
            if(ptr2){
                ptr2=ptr2->next;
                cnt2++;
            }
        }
        int diff=abs(cnt1-cnt2);
        ptr1=head1;
        ptr2=head2;
        if(cnt1>cnt2){
            for(int i=0;i<diff;i++){
                ptr1=ptr1->next;
            }
        }else if(cnt2>cnt1){
            for(int i=0;i<diff;i++){
                ptr2=ptr2->next;
            }
        }
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        if(ptr1) return ptr1->data;
        return -1;
    }

    long long  multiplyTwoLists (Node* l1, Node* l2)
    {
      long long num1 = 0;
      long long num2 = 0;
      while(l1!=nullptr){
          num1 = (num1*10 + l1->data)%1000000007;
          l1 = l1->next;
      }
      while(l2!=nullptr){
          num2 = (num2*10 + l2->data)%1000000007;
          l2 = l2->next;
      }
      return (num1*num2)%1000000007;
   }

      void display(Node *head){
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
  LinkedList li1;
  LinkedList li2;
  int n1,n2;
  cout<<"Enter the number of elements to insert:"<<endl;
  cin>>n1;
  cout<<"Enter "<<n1<<" elements to list"<<endl;
  for(int i=0;i<n1;i++){
    int x;
    cin>>x;
    li1.InsertAtLast(x);
  }
  li1.display(li1.head);
  cout<<"Enter the number of elements to insert:"<<endl;
  cin>>n2;
  cout<<"Enter "<<n2<<" elements to list"<<endl;
  for(int i=0;i<n2;i++){
    int x;
    cin>>x;
    li2.InsertAtLast(x);
  }
  li2.display(li2.head);

  cout<<"Intersection of two linked list is: "<<li1.intersectPoint(li1.head,li2.head)<<endl;

  cout<<"Intersection of two linkedlist are:"<<endl;
  Node *head1=li1.findIntersection(li1.head,li2.head);
  li2.display(head1);

  cout<<"Sum of Two linked list"<<endl;
  Node *temp=li1.addTwoLists(li1.head,li2.head);
  li2.display(temp);
  return 0;
}
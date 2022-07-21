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

     void InsertAtFirst(int val){
       Node *newNode=new Node(val);
       if(head==NULL){
         head=newNode;
       }else{
          newNode->next=head;
          head=newNode;
       }
     }

     void Reverse(){
       Node *temp=head;
       Node *prev=NULL,*q=NULL;
       while(temp!=NULL){
         q=temp->next;
         temp->next=prev;
         prev=temp;
         temp=q;
       }
       head=prev;
     }

     Node *DeleteNodeHavingGreaterElementInRight(Node *head)
    {
       if(head==NULL||head->next==NULL){
           return head;
       }
       head=ReverseRec(head);
       int ma=head->data;
       Node *curr=head;
       Node *prev=curr;
       curr=curr->next;
       while(curr!=NULL){
           if(curr->data>=ma){
               ma=curr->data;
               prev=curr;
               curr=curr->next;
           }
           else{
               prev->next=curr->next;
               curr=prev->next;
           }
           
       }
       head=ReverseRec(head);
       return head;
    }

     Node * ReverseRec(Node *head){
       if(head==NULL||head->next==NULL){
          return head;
       }
        Node *next=ReverseRec(head->next);
        Node *temp=head->next;
        temp->next=head;
        head->next=NULL;
        return next;
     }

     Node* middleNode(Node* head) {
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
            }
        }
        return slow;
    }

     bool detectLoop(Node* head)
     {
        if(head==NULL||head->next==NULL){
            return false;
        }
        //Floyds Warsal Algorithm
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
            }
            if(fast==slow){
                return true;
            }
        }
        return false;
    }

    void removeLoop(Node* head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
            }
            if(fast==slow){
                break;
            }
        }
        if(slow==head){
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;
        }else if(slow==fast){
            slow=head;
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            fast->next=NULL;
        }
    }

    bool isPalindrome(Node *head)
    {
        Node *slow=head;
        Node *fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=ReverseRec(slow->next);
        fast=head;
        while(fast!=NULL&&slow!=NULL){
            if(fast->data!=slow->data){
                return false;
            }else{
                fast=fast->next;
                slow=slow->next;
            }
        }
        return true;
    }

    Node *FirstNodeOfLoop(){
      Node *slow=head;
      Node *fast=head;
      while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
          return slow->next;
        }
      }
      return NULL;
    }

    Node* segregateZeroOneTwo(Node *head) {
    //sort linkedlist of 0,1 and 2 
        Node *temp=head;
        int count[]={0,0,0};
        while(temp!=NULL){
            count[temp->data]++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp!=NULL){
            if(count[i]==0){
                i++;
            }else{
                temp->data=i;
                temp=temp->next;
                count[i]--;
            }
        }
       return head; 
    }

     Node* segregateEvenOdd(int N, Node *head){
        if(head==NULL||head->next==NULL){
          return head;
        }

       Node* curr=head,*odd=NULL,*oddptr=NULL,*evenptr=NULL,*even=NULL;  
       while(curr!=NULL){
           if(curr->data%2==0){
               if(even==NULL){
                   even=curr;
                   evenptr=curr;
               }else{
                   evenptr->next=curr;
                   evenptr=evenptr->next;
               }
           }else{
               if(odd==NULL){
                   odd=curr;
                   oddptr=curr;
               }else{
                   oddptr->next=curr;
                   oddptr=oddptr->next;
               }
           }
           curr=curr->next;
       }
       if(evenptr!=NULL){
           evenptr->next=odd;
       }
       if(oddptr!=NULL){
           oddptr->next=NULL;
       }
       if(even) return even;
       return odd;
   }

    Node * reverseInGroup(Node *head,int k){
      Node *curr=head;
      Node *prev=NULL;
      Node *next=NULL;
      int c=0;
      while(curr!=NULL&&c<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        c++;
      }
      if(next!=NULL){
        head->next=reverseInGroup(next,k);
      }
      return prev;
    }

    void removeDuplicatesInSortedLL( )
    {
      Node* temp=head;
        while(temp!=NULL&&temp->next!=NULL){
            if(temp->data==temp->next->data){
                temp->next=temp->next->next;
            }else{
                temp=temp->next;
            }
        }
    }

    void removeDuplicatesInUnsortedLL() 
    {
      Node *curr=head;
      map<int,int> mp;
      mp[curr->data]=1;
      Node *prev=curr;
      curr=curr->next;
      while(curr!=NULL){
          if(mp[curr->data]){
              prev->next=curr->next;
          }else{
              mp[curr->data]=1;
              prev=curr;
          }
          curr=curr->next;
      }
    }
 
    bool isCircular(Node *head)
    {
      Node *temp=head;
        while(temp!=NULL){
            if(temp->next==head){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    bool isCircular1(Node *head)
    {
      Node *slow=head;
      Node *fast=head;
      while(fast!=NULL&&fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
          if(slow==fast){
              return true;
          }
      }
      return false;
    }

    void addOne() 
    {
        Reverse();
        Node *temp=head;
        bool f=true;
        while(temp!=NULL&&f){
            if(temp->next==NULL&&temp->data==9){
                temp->data=1;
                Node *newNode=new Node(0);
                newNode->next=head;
                head=newNode;
                temp=temp->next;
            }
            else if(temp->data==9){
                temp->data=0;
                temp=temp->next;
            }else{
                temp->data=temp->data+1;
                temp=temp->next;
                f=false;
            }
        }
        Reverse();
    }

    void MoveLastElementToFirst(){
      Node *temp=head;
      Node *prev=NULL;
      while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
      }
      prev->next=NULL;
      temp->next=head;
      head=temp;
    }

    int getNthFromLast1(Node *head, int n)
    {//brute-force
      Node *temp=head;
      int count=0;
      while(temp!=NULL){
          temp=temp->next;
          count++;
      }
      if(n>count) return -1;
      temp=head;
      int i=0;
      while(temp!=NULL&i<count-n){
          temp=temp->next;
          i++;
      }
      return temp->data;
    }

    int getNthFromLast(Node *head, int n)
    {
      Node *curr=head;
      Node *nth=head;
      int i=1;
      int count=0;
      while(curr!=NULL){
          if(i>n){
              nth=nth->next;
          }
          i++;
          count++;
          curr=curr->next;
      }
      if(n>count){
          return -1;
      }
      return nth->data;
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

  li.head=li.DeleteNodeHavingGreaterElementInRight(li.head);
  li.display();

  cout<<"Is LinkedList palindrome "<<(li.isPalindrome(li.head)==1?"Yes":"No")<<endl;
  cout<<"Is linkedlIst circular "<<(li.isCircular(li.head)==1?"Yes":"No")<<endl;
  cout<<"Middle element of linkedlist is : "<<li.middleNode(li.head)->data<<endl;

  cout<<"Add One"<<endl;
  li.addOne();
  li.display();

  li.Reverse();
  li.display();

  cout<<"Move last element to first"<<endl;
  li.MoveLastElementToFirst();
  li.display();

  li.head=li.ReverseRec(li.head);
  li.display();

  li.head=li.reverseInGroup(li.head,3);
  li.display();

  cout<<"Unsorted"<<endl;
  li.removeDuplicatesInUnsortedLL();
  li.display(); 

  li.removeDuplicatesInSortedLL();
  li.display();

  Node *temp=li.head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=li.head->next;

  if(li.detectLoop(li.head)) cout<<"Loop is present"<<endl;
  else cout<<"Loop is not present"<<endl;

  Node *tem=li.FirstNodeOfLoop();
  if(tem==NULL){
    cout<<"No loop is present"<<endl;
  }else{
    cout<<"Head of loop is "<<tem->data<<endl;
  }
  return 0;
}
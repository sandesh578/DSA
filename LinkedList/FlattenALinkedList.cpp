    #include<bits/stdc++.h>
using namespace std;

class Node{
  public:
   int data;
   Node *next;
   Node *bottom;
   Node(int data){
     this->data=data;
     this->next=NULL;
     this->bottom=NULL;
   }
};

class LinkedList{
    public:
     Node *head=NULL;
     Node *InsertAtLast(int val){
       Node *newNode=new Node(val);
       Node *curr=NULL;
       if(head==NULL){
          head=newNode;
          curr=head;
       }else{
          Node *temp=head;
          while(temp->next!=NULL){
            temp=temp->next;
          }
          temp->next=newNode;
          curr=newNode;
       }
       return curr;
     }

     void InsertAtBottom(Node *top,int val){
       Node *newNode=new Node(val);
       if(top==NULL){
          top=newNode;
       }else{
          Node *temp=top;
          while(temp->bottom!=NULL){
            temp=temp->bottom;
          }
          temp->bottom=newNode;
       }
     }

    Node *merge(Node *first,Node *second){
        if(first==NULL) return second;
        if(second==NULL) return first;
        Node *head=NULL;
        Node *curr=new Node(0);
        head=curr;
        while(first!=NULL&&second!=NULL){
            if(first->data<second->data){
                curr->bottom=first;
                curr=curr->bottom;
                first=first->bottom;
            }else{
                curr->bottom=second;
                curr=curr->bottom;
                second=second->bottom;
            }
        }
        if(first!=NULL){
          curr->bottom=first;
        }
        else{
            curr->bottom=second;
        }
        return head->bottom;
    }
    
    Node *flatten(Node *root)
    {
        if(root==NULL||root->next==NULL){
            return root;
        }
        root->next=flatten(root->next);
        root=merge(root,root->next);
        return root;
    }

    void display(Node *head){
       if(head==NULL){
         cout<<"List is empty"<<endl;
       }else{
         Node *temp=head;
         cout<<"Elements in the list are:"<<endl;
         while(temp!=NULL){
           cout<<temp->data<<" "<<endl;
           temp=temp->bottom;
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
    Node *temp=li.InsertAtLast(x);
    int n2;
    cout<<"Enter the number of elements to insert in bottom:"<<endl;
    cin>>n2;
    for(int j=0;j<n2;j++){
      int y;
      cin>>y;
      li.InsertAtBottom(temp,y);
    }
  }
  Node *temp=li.flatten(li.head);
  li.display(temp);
  return 0;
}
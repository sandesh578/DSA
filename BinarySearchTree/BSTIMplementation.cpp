#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *left;
  Node *right;
  Node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
};

class BinaryTree{
  public:
  Node *root=NULL;

  void Insert(int data){
    Node *newNode=new Node(data);
    if(root==NULL){
      root=newNode;
    }else{
      Node *temp=root;
      Node *parent=NULL;
      while(temp!=NULL){
        parent=temp;
        if(data>temp->data){
          temp=temp->right;
        }else{
          temp=temp->left;
        }
      }
      if(data>parent->data){
        parent->right=newNode;
      }
      else{
        parent->left=newNode;
      }
    }
  }

   int minValue(Node* root) {
    if(root==NULL){
        return -1;
    }
    Node *temp=root;
    while(temp!=NULL){
        if(temp->left==NULL){
            return temp->data;
        }
        temp=temp->left;
    }
   return -1;
 }

 int maxValue(Node* root) {
    if(root==NULL){
        return -1;
    }
    Node *temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
   return temp->data;
}
    
    bool Search(Node *head,int val){
      if(head==NULL){
        return false;
      }else{
        Node *temp=root;
        while(temp!=NULL){
          if(val==temp->data){
            return true;
          }
          if(val<temp->data){
            temp=temp->left;
          }
          if(val>temp->data){
            temp=temp->right;
          }
        }
      }
      return false;
    }

    void PreOrder(Node *root){
     if(root){
       cout<<root->data<<" ";
       PreOrder(root->left);
       PreOrder(root->right);
     }
  }

  void PostOrder(Node *root){
     if(root){
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
     }
  }

  void Display(){
    if(root==NULL){
      cout<<"Root is empty"<<endl;
    }else{
      cout<<"Elements in the BST are:"<<endl;
      cout<<endl<<"Preorder Traversal"<<endl;
      PreOrder(root);
      cout<<endl<<"Postorder Traversal"<<endl;
      PostOrder(root);
      cout<<endl;
    }
  }
};

int main(){
  int n;
  cout<<"Enter the number of elements to insert:"<<endl;
  cin>>n;
  BinaryTree bst;
  cout<<"Enter "<<n<<" elements to list"<<endl;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    bst.Insert(x);
  }
  bst.Display();

  int val;
  cout<<"Enter a value to search: "<<endl;
  cin>>val;
  cout<<(bst.Search(bst.root,val)==true?"Present":"Not Found")<<endl;

  return 0;
}
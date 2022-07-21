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

  void IterativeInorder(Node *root){
    stack<Node *> stk;
    Node *curr=root;
    while(!stk.empty()||curr!=NULL){
       if(curr!=NULL){
         stk.push(curr);
         curr=curr->left;
       }else{
         curr=stk.top();
         stk.pop();
         cout<<curr->data<<" ";
         curr=curr->right;
       }
    }
  }

  void IterativePreorder(Node *root){
    stack<Node *> stk;
    Node *curr=root;
    stk.push(root);
    while(!stk.empty()||curr!=NULL){
         curr=stk.top();
         stk.pop();
         cout<<curr->data<<" ";
       if(curr->right!=NULL){
         stk.push(curr->right);
       }
       if(curr->left!=NULL){
         stk.push(curr->left);
       }
    }
  }

  void level(Node *root,int lev,vector<int> &v){
    if(root==NULL) return;
    if(v.size()==lev) v.push_back(root->data);
    level(root->left,lev+1,v);
    level(root->right,lev+1,v);
  }

  vector<int> leftView(Node *root)
  {
    vector<int> v;
    level(root,0,v);
    return v;
  }

  vector<int> rightView(Node *root)
    {
       vector<int> res;
       recursion(root,res,0);
       return res;
    }
    
    void recursion(Node *root,vector<int> res,int level){
        if(root==NULL){
            return;
        }else{
            if(res.size()==level) res.push_back(root->data);
            recursion(root->right,res,level+1);
            recursion(root->left,res,level+1);
        }
    }

    vector<int> leftView(Node *root)
    { 
        vector<int> res;
        if(root==NULL){
            return res;
        }
        queue<Node *> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                if(i==0){
                    res.push_back(q.front()->data);
                }
                Node *temp=q.front();
                q.pop();
                
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        return res;
    }

  void IterativePostorder(Node *root){
    //not complete
    stack<Node *> stk;
    Node *curr=root;
    while(!stk.empty()||curr!=NULL){
       if(curr->left!=NULL){
         stk.push(curr->left);
       }
       if(curr->right!=NULL){
         stk.push(curr->right);
       }
        curr=stk.top();
        stk.pop();
        cout<<curr->data<<" ";
    }
  }

  void ReverseLevelOrder(Node *root){
    if(root==NULL){
      return ;
    }else{
      vector<int> v;
      queue<Node*> q;
      q.push(root);
      cout<<endl;
      while(!q.empty()){
        Node *temp=q.front();
        v.push_back(temp->data);
        if(temp->right!=NULL){
          q.push(temp->right);
        }
        if(temp->left!=NULL){
          q.push(temp->left);
        }
        q.pop();
      }
      reverse(v.begin(),v.end());
      for(auto x:v){
        cout<<x<<" ";
      }
    }
  }

  void LevelOrder(Node *root){
    if(root==NULL){
      return;
    }else{
      queue<Node*> q;
      q.push(root);
      cout<<endl;
      while(!q.empty()){
        Node *temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
          q.push(temp->left);
        }
        if(temp->right!=NULL){
          q.push(temp->right);
        }
        q.pop();
      }
    }
  }

  int Height(Node *root){
    if(root==NULL){
      return 0;
    }else{
      int left=Height(root->left)+1;
      int right=Height(root->right)+1;
      return max(left,right);
    }
  }

  void InOrder(Node *root){
     if(root){
       InOrder(root->left);
       cout<<root->data<<" ";
       InOrder(root->right);
     }
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
      cout<<"Inorder traversal"<<endl;
      // InOrder(root);
      IterativeInorder(root);
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
  BinaryTree bt;
  cout<<"Enter "<<n<<" elements to list"<<endl;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    bt.Insert(x);
  }
  bt.Display();
  cout<<endl<<"Height of tree is: "<<bt.Height(bt.root)<<endl;

  cout<<endl<<"LevelOrder Traversal of tree:";
  bt.LevelOrder(bt.root);

  cout<<endl<<"Reverse LevelOrder Traversal of tree:";
  bt.ReverseLevelOrder(bt.root);
  return 0;
}
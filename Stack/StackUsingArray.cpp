#include<bits/stdc++.h>
using namespace std;

class Stack{
  public:
    int *arr;
    int top=-1;
    int max;
    Stack(int n){
      arr=new int[n];
      max=n;
    }
    
    void push(int x){
      if(top<max){
        arr[++top]=x;
      }
    }

    int pop(){
      int data=-1;
      if(top>-1){
        data=arr[top--];
      }
      return data;
    }

    bool isEmpty(){
      return top==-1;
    }

    bool isFull(){
      return top==max-1;
    }

    int peek(){
      if(top!=-1){
        return arr[top];
      }
      return -1;
    }

    char* reverse(char *S, int len)
    {
        stack<char> st;
        for(int i=0;i<len;i++){
            st.push(S[i]);
        }
        for(int i=0;!st.empty();i++){
            S[i]=st.top();
            st.pop();
        }
        return S;
    }

    int middleElement(){
      int cnt=max;
      while(!isEmpty()&&cnt!=(max)/2){
        int data=pop();
        cout<<endl<<data<<" is deleted"<<endl;
        cnt--;
      }
      return peek();
    }

    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0;i<x.size();i++){
            if(x[i]=='('||x[i]=='{'||x[i]=='['){
                st.push(x[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(st.top()=='{'&&x[i]=='}'||st.top()=='('&&x[i]==')'||st.top()=='['&&x[i]==']'){
                      st.pop();
                    }else{
                        return false;
                        break;
                    }
                }
            }
        }
        if(st.empty()){
            return true;
        }else{
            false;
        }
    }

    void display(){
       if(isEmpty()){
         cout<<"Stack is empty"<<endl;
       }else{
         cout<<"Elements in the stack are:"<<endl;
         for(int i=top;i>=0;i--){
           cout<<arr[i]<<" ";
         }
         cout<<endl;
       }
    }
};

int main(){
  cout<<"Enter the number of elements to insert:"<<endl;
  int n;
  cin>>n;
  Stack s(n);
  s.push(5);
  s.push(1);
  s.push(2);
  s.push(9);
   s.push(4);
  s.display();
  s.pop();
  s.pop();
  s.display();
  s.push(6);
  s.push(8);
  cout<<"Top Element of stack is: "<<s.peek()<<endl;
  s.display();
  cout<<"Middle element of stack is: "<<s.middleElement()<<endl;

  return 0;
}
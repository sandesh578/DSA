#include<bits/stdc++.h>
using namespace std;

class Stack{
  public:
    int *arr;
    int top1=-1,top2;
    int max;
    Stack(int n){
      arr=new int[n];
      top2=n;
      max=n;
    }
    
    void push1(int x){
      if(top1<max){
        arr[++top1]=x;
      }
    }

    int pop1(){
      int data=-1;
      if(top1>-1){
        data=arr[top1--];
      }
      return data;
    }

    void push2(int x){
      if(top2>top1){
        arr[--top1]=x;
      }
    }

    int pop1(){
      int data=-1;
      if(top2==max-1) return -1; 
      if(top1<max){
        data=arr[top1--];
      }
      return data;
    }

    bool isEmpty(){
      return top1==-1;
    }

    bool isFull(){
      return top2==max-1;
    }

    int peek1(){
      if(top1!=-1){
        return arr[top1];
      }
      return -1;
    }

    int peek1(){
      if(top2!=max){
        return arr[top2];
      }
      return -1;
    }

    void display(){
       if(isEmpty()){
         cout<<"Stack is empty"<<endl;
       }else{
         cout<<"Elements in the stack are:"<<endl;
         for(int i=top2;i>=0;i--){
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
  s.push1(5);
  s.push1(1);
  s.push2(2);
  s.push2(9);
  s.display();
  s.pop1();
  s.display();
  cout<<"top1 Element of stack is: "<<s.peek1()<<endl;

  return 0;
}
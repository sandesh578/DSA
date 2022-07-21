#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements1 (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            unordered_map<int,int> um1;
            unordered_map<int,int> um2;
            unordered_map<int,int> um3;
            for(int i=0;i<n1;i++){
                um1[A[i]]++;
            }
            for(int i=0;i<n2;i++){
                um2[B[i]]++;
            }
            for(int i=0;i<n3;i++){
                um3[C[i]]++;
            }
            vector<int> v;
            for(int i=0;i<n1;i++){
                if(um1[A[i]]&&um2[A[i]]&&um3[A[i]]){
                    v.push_back(A[i]);
                    um1[A[i]]=0;
                }
            }
            return v;
        }

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> v;
            int i=0,j=0,k=0;
            while(i<n1&&j<n2&&k<n3){
                if(A[i]==B[j]&&B[j]==C[k]){
                    v.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }else if(A[i]<B[j]){
                    i++;
                }else if(B[j]<C[k]){
                    j++;
                }else {
                    k++;
                }
                int x=A[i-1];
                while(A[i]==x) i++;
                int y=B[j-1];
                while(B[j]==y) j++;
                int z=C[k-1];
                while(C[k]==z) k++;
            }
            return v;
        }

int main(){
  int n1 = 6;
  int A[] = {1, 5, 10, 20, 40, 80};
  int n2 = 5;
  int B[] = {6, 7, 20, 80, 100};
  int n3 = 8;
  int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
  vector<int> v;
  v=commonElements(A,B,C,n1,n2,n3);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
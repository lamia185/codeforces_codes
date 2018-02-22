#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ara[100001],ara2[100001],ara3[100001],i,j=0,k=0,l=0,m,flag=0;
  cin>>n;
  
  for(i=0;i<n;i++){
  cin>>ara[i];
  j+=ara[i];
  }
  
  for(i=0;i<n-1;i++){
  cin>>ara2[i];
  k+=ara2[i];
  }
  
  for(i=0;i<n-2;i++){
  cin>>ara3[i];
  l+=ara3[i];
  }
  
  cout<<j-k<<endl;
  cout<<k-l<<endl;
  
}

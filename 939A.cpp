#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ara[6000],i,j,k,A,B,C,D,flag=0;
  
  cin>>n;
  
  for(i=1;i<=n;i++)
  cin>>ara[i];
  
  for(i=1;i<=n;){
    A=ara[i];
    B=ara[A];
    C=ara[B];
    D=ara[C];
    
    if(A==D){
      cout<<"YES"<<endl;
      flag=1;
      break;
    }
    else{
      i++;
    }
  }
  if(flag==0)
  cout<<"NO"<<endl;
}

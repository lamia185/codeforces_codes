#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,ara[110],i,j,count=0,a=0,b,l,m,sum=0,flag=0;
  
  cin>>n>>k;
  
  for(i=1;i<=n;i++)
  cin>>ara[i];
  
  for(i=1;i<=n;i++){
    ara[i]+=a;
    if(ara[i]>=8){
      k-=8;
      a=ara[i]-8;
    }
    else{
      k-=ara[i];
      a=0;
    }
  
    if(i==n && k>0){
      cout<<"-1"<<endl;
      flag=1;
      break;
    }
    count++;
    if(k==0 || k<0)
    break;
   
  }
  
  
  if(flag==0){
    cout<<count<<endl;
  }
}

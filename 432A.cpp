#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,ara[2001],ara2[2001],i,j,l,count=0;
  
  cin>>n>>k;
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  for(i=0;i<n;i++)
  ara2[i]=ara[i]+k;
  
  
  
  for(i=0;i<n;i++){
    if(ara2[i]<=5){
      count++;
    }
  }
 
  
  if(count<3)
  {
  cout<<"0"<<endl;
  return 0;
  }
 
cout<<count/3<<endl;
}

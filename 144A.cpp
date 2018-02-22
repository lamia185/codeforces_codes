#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p,q,i,j,total,k,count=0,ara[101],max=0,key1=0,key2=0,min;
  cin>>n;
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  min=ara[0];
  
  for(i=n-1;i>=0;i--){
    if(ara[i]>max ||ara[i]==max){
    max=ara[i];
    key1=i;
  }
  }
  

  
  for(i=0;i<n;i++){
    if(ara[i]<min ||ara[i]==min){
    min=ara[i];
    key2=i;
    }
  }
  
  if(n==2){
    if(ara[0]<ara[1])
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    return 0;
  }
  
  
  
  if(max==ara[0] && min==ara[n-1]){
    cout<<"0"<<endl;
    return 0;
  }
  
  
   if(key2>key1){
     total=key1;
     total+=(n-1-key2);
   }
   
   else{
     total=key1;
     total+=(n-2-key2);
   }
   
   cout<<total<<endl;
  
}


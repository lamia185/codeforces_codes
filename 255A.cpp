#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ara[100],i,j,count=1,che=0,bic=0,bac=0,max=-1,flag=0;
  
  cin>>n;
  for(i=1;i<=n;i++){
    cin>>ara[i];
    
    if(count==1)
    che+=ara[i];
    
    if(count==2)
    bic+=ara[i];
    
    if(count==3)
    bac+=ara[i];
    if(count==3)
      count=1;
      else
      count++;
      
  }
  
  if(che>max){
  max=che;
  flag=1;
  }
  
  if(bic>max){
  max=bic;
  flag=2;
  }
  
  if(bac>max){
  max=bac;
  flag=3;
  }
  
  if(flag==1)
  cout<<"chest"<<endl;
  
  else if(flag==2)
  cout<<"biceps"<<endl;
  
  else
  cout<<"back"<<endl;
  
}

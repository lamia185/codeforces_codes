#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ara[10001],i,j,count=0;
  
  cin>>n;
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  if(n==1){
    cout<<"0"<<endl;
    return 0;
  }
  
  if(n==2){
    cout<<"1"<<endl;
    return 0;
  }
  
  int min=ara[0];
  int max=ara[0];
  
  for(i=1;i<n;i++){
    if(ara[i]<min){
      min=ara[i];
      count++;
    }
    else if(ara[i]>max){
       max=ara[i];
       count++;
    }
  }
  cout<<count<<endl;
  
}

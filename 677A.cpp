#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,h,i,count=0,ara[1001];
  
  cin>>n>>h;
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  for(i=0;i<n;i++){
    if(ara[i]>h){
      count+=2;
    }
    else
    count+=1;
  }
  
  cout<<count<<endl;
}

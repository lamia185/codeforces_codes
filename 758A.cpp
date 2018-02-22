#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,min=0,max=0,count=0,k,l,m;
  cin>>n;
  int ara[n];
  
  for(i=0;i<n;i++)
  cin>>ara[i];

  max=ara[0];
  
  for(i=1;i<n;i++){
    if(ara[i]>max)
    max=ara[i];
  }
  
  for(i=0;i<n;i++){
    count+=max-ara[i];
  }
  
  cout<<count<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,ara[105],x,y,i,j,k,l,flag=0;
  cin>>n>>m;
  
  memset(ara,0,sizeof(ara));
  
  for(i=0;i<n;i++){
    cin>>x;
    for(j=0;j<x;j++){
      cin>>y;
      ara[y]++;
    }
  }
  
  for(i=1;i<=m;i++){
    if(ara[i]==0){
      flag=1;
      cout<<"NO"<<endl;
      break;
    }
  }
  
  if(flag==0)
  cout<<"YES"<<endl;
}

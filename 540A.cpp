#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,count=0,i,j,k,l,m,x,y;
  char ara[1001],ara2[1001];
  cin>>n;
  
  cin>>ara>>ara2;
  
  for(i=0;i<n;i++){
    x=ara[i]-48;
    y=ara2[i]-48;
    
    if(x>y){
      l=x;
      m=y;
    }
    
    else{
      l=y;
      m=x;
    }
    
    j=l-m;
    
    k=(10-l)+m;
    
    if(j<k){
      count+=j;
    }
    else
    count+=k;
  }
  
  cout<<count<<endl;
}

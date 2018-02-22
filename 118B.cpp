#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,k,l,m,flag=0;
  cin>>n;

  for(i=0;i<n+1;i++){
    
    for(k=1;k<=(n-i)*2;k++)
    cout<<" ";
    
    
    for(j=0;j<=i;j++){
      if(flag==0)
      cout<<j;
      else
      cout<<j<<" ";
      flag=1;
    }
    
    for(l=i-1;l>=0;l--){
      if(l!=0)
      cout<<l<<" ";
      else
      cout<<l;
    }
    
    cout<<endl;
    
  }
  
  flag=0;
  
  for(i=1;i<=n;i++){
    
    for(k=1;k<=i*2;k++)
    cout<<" ";
    
    int s=n-i;
    
    for(j=0;j<=n-i;j++){
      if(s!=0)
      cout<<j<<" ";
      else
      cout<<j;
    }
    
    for(l=n-1-i;l>=0;l--){
      if(l!=0)
      cout<<l<<" ";
      else
      cout<<l;
    }
    
    cout<<endl;
    
  }
  
}

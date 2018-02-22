#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,i,j,k,l,m,n,o,diff=0,same=0;
  cin>>a>>b;
  
  if(a!=0 && b==0){
    cout<<"0"<<" "<<a/2<<endl;
    return 0;
  }
  
  if(a==0 && b!=0){
    cout<<"0"<<" "<<b/2<<endl;
    return 0;
  }
  
  if(a==b){
    cout<<a<<" "<<"0"<<endl;
    return 0;
  }
  
  if(a<b){
    i=a;
    j=b;
  }
  
  else if(b<a){
    i=b;
    j=a;
  }
  
  l=j-i;
  if(l<2){
    cout<<i<<" "<<"0"<<endl;
    return 0;
  }
  
  else{
    cout<<i<<" "<<l/2<<endl;
  }
}

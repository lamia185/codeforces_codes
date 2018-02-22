#include<bits/stdc++.h>
using namespace std;

int main(){
  int k,r,l,m,i,j,price=0,key=0;
  
  cin>>k>>r;
  
   for(i=1;;i++){
    price=k*i;
    j=price/10;
    l=j*10;
    m=price-l;
    
    if(m==r || m==0){
      key=i;
      break;
    }
  }
  
  cout<<key<<endl;
  
}


#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,c,d,i=1,j,k,l,count=0;
  
  cin>>n;
  
  while(1){
    
    a=n-i;
    
    if(a<=0)
    break;
    
    if(i==1)
    count++;
    
    
    b=a/i;
    
    c=b*i;

    
    if(c==a && i!=1)
    count++;
    
     i++;
    
  }
  
  cout<<count<<endl;
  
}

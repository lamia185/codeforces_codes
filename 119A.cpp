#include<bits/stdc++.h>
using namespace std;


//There is another fucntion for gcd. __gcd(3,9);We can use it as well

int gcd(int a,int n){
  int i,gcd;
  for(i=1;i<=a && i<=n;i++){
    if(a%i==0 && n%i==0)
    gcd=i;
  }
  return gcd;
}

int main(){
  int a,b,n,j,k,flag;
  
  cin>>a>>b>>n;
  
  while(1){
    j=gcd(a,n);
    n=n-j;
    
    if(n==0){
     flag=0;
    break;
    }
    
    k=gcd(b,n);
    n=n-k;
    
    if(n==0){
      flag=1;
      break;
    }
    
  }
  cout<<flag<<endl;
  if(flag==0)
  cout<<"0"<<endl;
  else
  cout<<"1"<<endl;
  
}

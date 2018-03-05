#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,i,j,k,l,m,n,sum=0,h,s;
  
  cin>>a>>b;
  if(a>b)
  {
    s=a;
   h=b;
  }
  
  else{
     s=b;
     h=a;
  }
  
  k=s-h;
  m=k/2;
  
  n=k-m;
  
  for(i=1;i<=m;i++){
    sum+=i;
  }
  
   for(i=1;i<=n;i++){
    sum+=i;
  }
  
  cout<<sum<<endl;
}

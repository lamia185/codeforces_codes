#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,a,b,i,j,k,l,s,sum1=0,sum2=0,sum=0,sum3=0,flag=0;
  cin>>n>>m>>a>>b;
  
  sum1=n*a;
  
  sum=sum1;

  i=n/m;
  j=i*m;
  sum2=i*b;
 
  if(j==n){
    sum2=sum2;
  }
  
  else{
     l=n-j;
    if((b<a || b==a) && l>m){
      sum2+=(l*b);
    }
    else if((b>a || b==a)&& l<m)
    sum2+=(l*a);
    
    else if(l<m && (b<a || b==a))
    sum2+=b;
  }
  
  
  if(m>n){
    flag=1;
    s=m/n;
    sum3=s*b;
  }
  
  
  if(sum1<sum2){
    sum=sum1;
  }
  
 if(sum2<sum1){
    sum=sum2;
  }
  
 if(sum1==sum2)
  sum=sum1;
  
  if(sum3<sum && flag==1)
  sum=sum3;
  
  cout<<sum<<endl;
}

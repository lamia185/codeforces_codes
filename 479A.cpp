#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,x,y,z,max=0,k,l,m,n;
  
  cin>>a>>b>>c;
  
  x=(a+b)*c;
  y=a*(b*c);
  z=a+(b*c);
  l=(a+b)+c;
  m=(a*b)*c;
  n=a*(b+c);
  
  if(x>max)
  max=x;
  
  if(y>max)
  max=y;
  
  if(z>max)
  max=z;
  
  if(l>max)
  max=l;
  
  if(m>max)
  max=m;
  
  if(n>max)
    max=n;
  
  cout<<max<<endl;
}

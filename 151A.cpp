#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,l,c,d,p,nl,np,a,b,e,f,g,h,i;
  
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  
  a=k*l;
  b=a/nl;
  
  e=c*d;
  f=p/np;
 
  h=min(b,e);
  i=min(h,f);
 
  g=i/n;
  
  cout<<g<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,ara[6000],i,j,k=0,l=0,m=0,one[5000],two[5000],three[5000],count=0,s,f,c;
  
  cin>>n;
  
  for(i=1;i<=n;i++){
  cin>>ara[i];
  if(ara[i]==1){
      one[k]=i;
      k++;
  }
  else if(ara[i]==2){
    two[l]=i;
    l++;
  }
  else if(ara[i]==3){
    three[m]=i;
    m++;
  }
  }
  
  if(k==0 || l==0 || m==0)
{
  cout<<"0"<<endl;
  return 0;
}  

s=k;
if(l!=0 && l<s){
  s=l;
}

if(m!=0 && m<s)
s=m;

cout<<s<<endl;
  
    for(int c=0;c<s;c++){
      cout<<one[c]<<" "<<two[c]<<" "<<three[c]<<endl;
    }
}

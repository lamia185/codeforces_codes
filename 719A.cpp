#include<bits/stdc++.h>
using namespace std;

int main(){
  int ara[100],n,i,l;
  cin>>n;
  
  for(i=1;i<=n;i++)
  cin>>ara[i];
  
  if(ara[n]==15)
  cout<<"DOWN"<<endl;
  
  else if(ara[n]==0)
  cout<<"UP"<<endl;
  
  else if(n==1)
  cout<<"-1"<<endl;
  
  else if(ara[n]<ara[n-1])
  cout<<"DOWN"<<endl;
  
  else 
  cout<<"UP"<<endl;
}

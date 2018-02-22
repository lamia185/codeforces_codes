#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,mish=0,cris=0,a,b,i;
  cin>>n;
  
  for(i=0;i<n;i++){   
    cin>>a>>b;
    if(a>b)
    mish++;
    else if(a<b) cris++;
  }
  
  
  
  if(mish>cris)
  cout<<"Mishka"<<endl;
  
  else if(mish<cris)
  cout<<"Chris"<<endl;
  
  else if(mish==cris)
  cout<<"Friendship is magic!^^"<<endl;
}

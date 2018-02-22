#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;

int main(){
   long long int n,i,j,diff;
   long long int sum=0,mx=0,mn=0,cnt1=0,cnt2=0;
   cin>>n;
  
   long long int ara[n];
  
  mn=inf;
  for(i=0;i<n;i++)
  {
    cin>>ara[i];
    mn=min(mn,ara[i]);
    mx=max(mx,ara[i]);
  }
  
  diff=mx-mn;
  
  for(i=0;i<n;i++){
    if(ara[i]==mx)
    cnt1++;
    if(ara[i]==mn)
    cnt2++;
  }
  
  if(mn==mx)
  sum=n*(n-1)/2;
  
  else
  sum=cnt1*cnt2;
  
  cout<<diff<<" "<<sum<<endl;
  
}

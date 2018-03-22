#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x,c,i;
  long long int ans=0;
  
  cin>>n>>x;
  int ara[n+1];
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  sort(ara,ara+n);
  
  for(i=0;i<n;i++){
    long long int a=max(x,1);
    ans+=(ara[i]*a);
    x--;
  }
  
  cout<<ans<<endl;
}

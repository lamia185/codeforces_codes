#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
  int n,i,ara[101];
  cin>>n;
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  sort(ara,ara+n);
  
  for(i=0;i<n;i++)
  cout<<ara[i]<<" ";
  
  cout<<endl;
  
}

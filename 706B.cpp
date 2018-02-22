#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
  int n,q,i,j,c,m;
  int a;
  
  cin>>n;
  
  int ara[n];
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  sort(ara,ara+n);
  
  cin>>m;
  
  for(i=0;i<m;i++){
    cin>>a;
    c=upper_bound(ara,ara+n,a)-ara;
    cout<<c<<endl;
  }
}



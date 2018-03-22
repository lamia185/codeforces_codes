#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j;
  cin>>n;
  
  int ara[n+1];
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  sort(ara,ara+n);
  
  for(i=1;i<n-1;i++){
    if(ara[i-1]+ara[i]>ara[i+1]){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  
  cout<<"NO"<<endl;
}

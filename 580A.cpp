#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,count=1,k,max=0;
  cin>>n;
  
  int ara[n];
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  if(n==1){
    cout<<1<<endl;
    return 0;
  }
  
  for(i=0;i<n-1;i++){
    if(ara[i]<ara[i+1] || ara[i]==ara[i+1])
    count++;
    else
    count=1;
    if(count>max)
    max=count;
  }
  
  cout<<max<<endl;
}

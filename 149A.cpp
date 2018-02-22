#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
  int n,ara[15],k,i,l,sum=0,count=0,sum2=0;
  
  cin>>k;
  
  for(i=0;i<12;i++){
  cin>>ara[i];
  sum2+=ara[i];
  }
  
  sort(ara,ara+12);
  
  if(k==0){
    cout<<"0"<<endl;
    return 0;
  }
  
  if(sum2<k){
    cout<<"-1"<<endl;
    return 0;
  }
  
  for(i=11;i>=0;i--){
    sum+=ara[i];
    count++;
    if(sum>=k)
    break;
    
  }
  
  cout<<count<<endl;
}

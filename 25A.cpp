#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ara[101],i,j,even=0,odd=0,key1,key2;
  
  cin>>n;
  for(i=1;i<=n;i++)
  cin>>ara[i];
  
  for(i=1;i<=n;i++){
    if(ara[i]%2==0){
    even++;
    key1=i;
  }
    
    else{
      odd++;
      key2=i;
    }
  }
  
  if(even>odd)
  cout<<key2<<endl;
  
  else
  cout<<key1<<endl;
}

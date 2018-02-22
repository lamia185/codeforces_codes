#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,ara[101],i,j,k,temp[101];
  cin>>n;
  for(i=1;i<=n;i++)
     {
       cin>>ara[i];
       temp[ara[i]]=i;
     }
     
  for(i=1;i<=n;i++){
    cout<<temp[i]<<endl;
  }
     
  
}

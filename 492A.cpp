#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i=1,sum=0,count=0,max=0,ara[10001]={0},s=0,j,l;
  
  cin>>n;
  
  
  for(j=1;j<=n;j++){
    max+=j;
    ara[j]=max;
  }
  
  
  for(i=1;i<=n;i++){
    sum+=ara[i];
    count++;
    if(sum>n){
      break;
    }
  }
  cout<<i-1<<endl;
 
  
}

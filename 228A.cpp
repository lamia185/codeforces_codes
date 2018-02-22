#include<bits/stdc++.h>
using namespace std;

int main(){
 int ara[10],i,h,j,k,l,count=0,max=0;
  
  for(i=0;i<4;i++)
  cin>>ara[i];
  
  for(i=0;i<3;i++){
    for(j=i+1;j<4;j++){
      if(ara[i]==ara[j]){
        ara[j]=-1;
      }
    }
  }
  
  
  for(i=0;i<4;i++){
    if(ara[i]!=-1){
      count++;
    }
  }
  
  max=4-count;
  cout<<max<<endl;
}


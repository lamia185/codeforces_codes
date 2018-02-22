#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,p,q,ara1[101],ara2[101],ara3[101]={0},i,j,k,count=0;
  cin>>n>>p;
  
  for(i=0;i<p;i++)
  cin>>ara1[i];
  
  cin>>q;
  
  for(j=0;j<q;j++)
  cin>>ara2[j];
  
  for(k=p,i=0;i<q;k++,i++)
  ara1[k]=ara2[i];
  
  for(i=0;i<(p+q);i++){
    int s=ara1[i];
    ara3[s]++;
  }
  
  for(i=1;i<=n;i++){
    if(ara3[i]!=0){
      count++;
    }
  }
  
  if(count==n)
  cout<<"I become the guy."<<endl;
  
  else 
  cout<<"Oh, my keyboard!"<<endl;
}

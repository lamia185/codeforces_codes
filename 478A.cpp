#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,ara[6],sum=0;
  
  for(i=0;i<5;i++){
    cin>>ara[i];
    sum+=ara[i];
  }
  
  if(sum%5==0 && sum!=0)
  cout<<sum/5<<endl;
  
  else
  cout<<"-1"<<endl;
}

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
  int n,i,j,sum=0,pos=0,neg=0;
  cin>>n;
  int ara[n+1];
  
  for(i=0;i<n;i++){
    cin>>ara[i];
    if(ara[i]>=0)
    pos+=ara[i];
    else
    neg+=abs(ara[i]);
  }
  
  cout<<pos+neg<<endl;
}

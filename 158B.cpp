#include<bits/stdc++.h>
#include<cmath>
#include<ctype.h>
using namespace std;

int main(){
  int n,i,sum=0,k,x,t,l;
  int ara[5]={0};
  double s,a,y;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>k;
    ara[k]++;
  }
  
  
  sum+=ara[4];
  sum+=ara[3];

  while(ara[3] && ara[1]){
    ara[1]--;
    ara[3]--;
  }
  
  t=ara[2]*2+ara[1];
  
  y=ceil((float)t/4);
  sum+=y;
  
  cout<<sum<<endl;
}

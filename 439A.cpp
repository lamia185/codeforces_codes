#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,d,ara[101],i,j,sum=0,count=0,a,b,c;
  cin>>n>>d;
  
  for(i=0;i<n;i++){
  cin>>ara[i];
  sum+=ara[i];
  }
  
  a=n-1;
  sum+=(a*10);
 
  
  if(sum>d){
    cout<<"-1"<<endl;
    return 0;
  }
  
  count=a*2;
  
  b=d-sum;
  
  c=b/5;
  
  count+=c;
  
  cout<<count<<endl;
}

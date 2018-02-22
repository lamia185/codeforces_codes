#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n,c,a,b,d,count=1,i;
  
  cin>>n>>c;
  int ara[n];
  
  for(i=0;i<n;i++){
    cin>>ara[i];
  }
  
  for(i=0;i<n-1;i++){
    b=ara[i+1]-ara[i];
    if(b<=c)
    count++;
    
    else
    count=1;
  }
  
  cout<<count<<endl;
}

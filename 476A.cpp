#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,count=0;
  
  cin>>n>>m;
  
  if(n<m)
    count=-1;
  
  else{
  
  if(n%2==0)
  count=n/2;
  
  else
  count=(n/2)+1;
  
  while(count%m!=0){
  count++;
  }
  }
  
  cout<<count<<endl;
}

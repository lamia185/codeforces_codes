#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,i,j,k,l,count=0;
  
  cin>>a>>b;
  
  while(1){
    a*=3;
    b*=2;
    
    count++;
    if(a>b)
    break;
  }
  
  cout<<count<<endl;
}

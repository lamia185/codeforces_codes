#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,s,z,x,count=0;
  
  cin>>n;
  while(n--){
    cin>>a>>b;
    if(a>b){
      x=a;
      z=b;
    }
    else{
      x=b;
      z=a;
    }
    s=x-z;
    if(s>2 || s==2)
    count++;
    
  }
  cout<<count<<endl;
}

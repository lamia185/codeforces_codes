#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,n,count=0;
  cin>>n;
  char str[n];
  
  for(i=0;i<n;i++){
    cin>>str;
    
    if(str[0]=='T')
    count+=4;
    
    else if(str[0]=='C')
    count+=6;
    
    else if(str[0]=='O')
    count+=8;
    
    else if(str[0]=='D')
    count+=12;
    
    else if(str[0]=='I')
    count+=20;
    
  }
  
  cout<<count<<endl;
}

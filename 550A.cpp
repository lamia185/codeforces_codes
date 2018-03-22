#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int i,j,k,flag=0,c=1;
  
  cin>>str;
  
  for(i=0;i<str.size();i++){
    if(str[i]=='A' && str[i+1]=='B'){
      for(i+=2;i<str.size();i++){
        if(str[i]=='B' && str[i+1]=='A'){
          flag=1;
          c=0;
          break;
        }
      }
      if(c==0)
      break;
    }
  }
  
    for(i=0;i<str.size();i++){
    if(str[i]=='B' && str[i+1]=='A'){
      for(i+=2;i<str.size();i++){
        if(str[i]=='A' && str[i+1]=='B'){
          flag=1;
          c=0;
          break;
        }
      }
      if(c==0)
      break;
    }
  }
  
  if(flag==1)
  cout<<"YES"<<endl;
  
  else
  cout<<"NO"<<endl;
}

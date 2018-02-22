#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  int l,m,k,a,b,i,j;
  char ch;
  string keyboard,str;
  cin>>ch;
  cin>>str;
  
  keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
  
  a=keyboard.length();
  b=str.length();
  
  if(ch=='R'){
    for(i=0;i<b;i++){
      for(j=1;j<a;j++){
        if(str[i]==keyboard[j])
        cout<<keyboard[j-1];
      }
    }
  }
  
  
  if(ch=='L'){
    for(i=0;i<b;i++){
      for(j=0;j<a-1;j++){
        if(str[i]==keyboard[j])
        cout<<keyboard[j+1];
      }
    }
  }
  
}

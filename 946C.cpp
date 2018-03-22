#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  char ch='a';
  
  cin>>str;
  
  for(int i=0;i<str.length();i++){
    if(str[i]<=ch){
      str[i]=ch;
      ch++;
    }
    if(ch>'z'){
      cout<<str<<endl;
      return 0;
    }
  }
  
  cout<<"-1"<<endl;
}

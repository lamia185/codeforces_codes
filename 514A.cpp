#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int x,t,i,s,a,flag=0;
  char str[1000];
  
  cin>>str;
  
  if(str[0]=='9'){
      cout<<str[0];
    }
  else
  {
    t=str[0]-48;
    if(t>4)
    cout<<9-t;
    else
    cout<<t;
  }
  for(i=1;str[i]!='\0';i++){
    s=str[i]-48;
  
    if(s>4 ){
      cout<<9-s;
    }
    else
    cout<<s;
  }
  cout<<endl;
  
  
}

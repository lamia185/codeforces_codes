#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int n,i,j,cnt=0;
  
  cin>>n>>str;
  for(i=0;i<str.size();i++){
    if((str[i]=='U' && str[i+1]=='R')||(str[i]=='R' && str[i+1]=='U')){
      i++;
      cnt++;
    }
    else
    cnt++;
  }
  
  cout<<cnt<<endl;
}

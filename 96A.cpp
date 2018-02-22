#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  int i,l,zero=0,one=0;
  char str[110];
  gets(str);
  l=strlen(str);
  for(i=0;i<l;i++){
    if(str[i]=='1'){
      one++;
      zero=0;
      if(one>=7)
      break;
    }
    else{
      zero++;
      one=0;
      if(zero>=7)
      break;
    }
  }
    if(zero>=7 || one>=7)
    cout<<"YES"<<endl;
    
    else
    cout<<"NO"<<endl;
  

}

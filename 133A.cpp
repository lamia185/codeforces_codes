#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  int i,flag=1;;
  char str[101];
  cin>>str;
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
      cout<<"YES"<<endl;
       flag=0;
       break;
    }
    else flag=1;
  }
  if(flag==1)
  cout<<"NO"<<endl;
  
}

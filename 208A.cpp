#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,j,l,flag=0,k=0;
  char str[201],temp[201];
  
  cin>>str;
  l=strlen(str);
  
  for(i=0;i<l;i++){
    if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
      if(i!=0){
        temp[k]=' ';
        k++;
      }
      i+=2;
    }
    else{
      temp[k]=str[i];
      k++;
    }
  }
  
  temp[k]='\0';
  puts(temp);
}

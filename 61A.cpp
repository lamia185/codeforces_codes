#include<bits/stdc++.h>
using namespace std;

int main(){
  char str1[101],str2[101],str3[101];
  int i,j,k=0,l,m;
  
  cin>>str1>>str2;
  l=strlen(str1);
  
  for(i=0;i<l;i++){
    if(str1[i]==str2[i]){
    str3[k]='0';
    k++;
  }
  else{
    str3[k]='1';
    k++;
  }
  }
  
  str3[k]='\0';
  puts(str3);
}

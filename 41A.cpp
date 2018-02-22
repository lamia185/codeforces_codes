#include<bits/stdc++.h>
using namespace std;

int main(){
  char str1[101],str2[101],str3[101];
  int i,l,j;
  
  cin>>str1>>str2;
  
  l=strlen(str2);
  
  for(i=l-1,j=0;i>=0;i--,j++){
    str3[j]=str2[i];
  }
  
  str3[j]='\0';
  
  if(strcmp(str1,str3)==0)
    cout<<"YES"<<endl;
  
  else
  cout<<"NO"<<endl;
}

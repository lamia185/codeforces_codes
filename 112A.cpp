#include<bits/stdc++.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int main(){
  int i,l;
  char str[110],str2[110];
  gets(str);
  gets(str2);
  l=strlen(str);
  for(i=0;i<l;i++){
    str[i]=tolower(str[i]);
  }
  str[i]='\0';
  
  for(i=0;i<l;i++){
    str2[i]=tolower(str2[i]);
  }
  str2[i]='\0';
  
  int s=(strcmp(str,str2));
  
  if(s>0)
  cout<<"1"<<endl;
  else if(s<0)
  cout<<"-1"<<endl;
  else
  cout<<"0"<<endl;
}

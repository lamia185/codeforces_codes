#include<bits/stdc++.h>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main(){
  char str[20],str2[20],key[3],zero[3]={"-0"};
  long long int a,b,i,j,l;
  
  
 cin>>str;
  l=strlen(str);
  
  int s=atoi(str);
  if(s>=0){
    puts(str);
    return 0;
  }
  
  strcpy(str2,str);
  
  key[0]=str[l-1];
  key[1]='\0';
  
  str[l-1]='\0';
  
  a=atoi(str);
  
  str2[l-2]='\0';
  strcat(str2,key);
  
  b=atoi(str2);

  
  if(strcmp(str2,zero)==0){
    cout<<"0"<<endl;
    return 0;
  }
  if(a>b){
    puts(str);
  }
  else
  puts(str2);
  
  
}


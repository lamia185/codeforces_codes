#include<bits/stdc++.h>
using namespace std;

int main(){
  int i,count1=0,count2=0,j;
  char str[101],temp[101];
  
  cin>>str;
  
  int l=strlen(str);
  
  for(i=0;i<l;i++){
    if(str[i]>='a' && str[i]<='z')
    count1++;
    
    if(str[i]>='A' && str[i]<='Z')
    count2++;
  }
  
  if(count1>count2 || count1==count2){
    for(i=0;i<l;i++){
      temp[i]=tolower(str[i]);
    }
    temp[i]='\0';
  }
  
  else{
    for(i=0;i<l;i++){
      temp[i]=toupper(str[i]);
    }
    temp[i]='\0';
  }
  
  puts(temp);
}

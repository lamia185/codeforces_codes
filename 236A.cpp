#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  bool found=false;
  char str[101],str2[101];
  int i,j,n,l,k=0;
  gets(str);
  
  for(i=0;str[i]!='\0';i++){
    found=false;
    for(j=0;j<i;j++){
      if(str[i]==str[j])
      {
        found=true;
        break;
      }
    }
    
    if(!found){
      str2[k]=str[i];
      k++;
    }
  }
  str2[k]='\0';
  
  l=strlen(str2);
  
  if(l%2==0)
  cout<<"CHAT WITH HER!"<<endl;
  else cout<<"IGNORE HIM!"<<endl;
}

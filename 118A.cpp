#include<bits/stdc++.h>
#include<cstring>
#include<ctype.h>
using namespace std;

int main(){
  int i,j,k,l,s;
  char str[110],str2[110],str3[100];
  gets(str);
  l=strlen(str);
  
  for(i=0;i<l;i++){
    str2[i]=tolower(str[i]);
  }
  str2[i]='\0';
  
  for(j=0,k=0;j<l;j++){
    if(str2[j]!='a' && str2[j]!='e' &&str2[j]!='i' && str2[j]!='o' && str2[j]!='u' && str2[j]!='y'){
         str3[k]=str2[j];
         k++;
    }
  }
  str3[k]='\0';
  
  for(int s=0;s<k;s++){
    printf(".%c",str3[s]);
  }
  cout<<endl;
}

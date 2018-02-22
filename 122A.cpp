#include<bits/stdc++.h>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main(){
  int n,count=0,j=0,i;
  cin>>n;
  int ara[13]={4,7,44,47,74,77,444,447,474,744,747,777};
  char str[101];
  sprintf(str,"%d",n);
  int l=strlen(str);

  for(i=0;str[i]!='\0';i++){
    if(str[i]=='4' || str[i]=='7')
      count++;
  }


  if(count==l){
   cout<<"YES"<<endl;
   return 0;
  }

  else{
   while(1){

    if(n%ara[j]==0){
      cout<<"YES"<<endl;
      return 0;
    }
    else
      j++;

    if(j==11){
      cout<<"NO"<<endl;
    break;

    }
   }

  }
}

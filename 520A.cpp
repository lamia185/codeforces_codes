#include<bits/stdc++.h>
#include<cstring>
#include<ctype.h>
using namespace std;

int main(){
  char str[101];
  int n,i,j,l,ara[101]={0},count=0;
  cin>>n;
  cin.ignore();
  gets(str);
  
  if(n<26)
  {
    cout<<"NO"<<endl;
    return 0;
  }
  
  else{
    for(i=0;str[i]!=NULL;i++){
      str[i]=tolower(str[i]);
    }
    
    for(j=0;str[j]!=NULL;j++){
      int k=str[j]-49;
      ara[k]++;
    }
    
    for(i=0;i<101;i++){
      if(ara[i]!=0){
        count++;
      }
    }
    if(count>=26)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}

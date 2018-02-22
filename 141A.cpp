#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int i,j,k,l,m,n,a,b,flag=1,s,g;
  int ara1[200]={0},ara2[200]={0};
  char str1[101],str2[101],str3[101];
  
  cin>>str1>>str2>>str3;
  a=strlen(str1);
  b=strlen(str2);
  l=a+b;
  m=strlen(str3);
  
  if(l!=m){
    cout<<"NO"<<endl;
    return 0;
  }
  
  else{
    for(i=0;i<a;i++){
      n=str1[i]-48;
      ara1[n]++;
    }
    
    for(i=0;i<b;i++){
      g=str2[i]-48;
      ara1[g]++;
    }
    
    for(i=0;i<m;i++){
      s=str3[i]-48;
      ara2[s]++;
    }
    
    for(j=0;j<200;j++){
      if(ara1[j]!=ara2[j]){
        cout<<"NO"<<endl;
        return 0;
      }
      else{
        flag=0;
      }
    }
    
    if(flag==0){
       cout<<"YES"<<endl;
    }
  }
  
}

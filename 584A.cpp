#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,t,i,j,k;
  char str[105];
  
  cin>>n>>t;
  
  if(t==10 && n==1){
    cout<<"-1"<<endl;
    return 0;
  }
  
  if(t==10 && n>1){
    for(i=0;i<n-1;i++){
        str[i]='1';      
    }
    str[n-1]='0';
    str[n]='\0';
    puts(str);
    return 0;
  }
  
  else if(t<10){
    for(i=1;i<=n;i++){
      cout<<t;
    }
    cout<<endl;
  }
}

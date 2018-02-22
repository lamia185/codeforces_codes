#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,k,l,key,flag1=0,flag2=0;
  char str[1010][7];
  cin>>n;
  
  for(i=0;i<n;i++){
    cin>>str[i];
  }
  
  for(i=0;i<n;i++){
    if(str[i][0]=='O' && str[i][1]=='O' ){
      flag1=1;
      key=i;
      break;
    }
    
    if(str[i][3]=='O' && str[i][4]=='O'){
    flag2=1;
    key=i;
    break;
    }
  }

  
  if(flag1==0 && flag2==0){
    cout<<"NO"<<endl;
    return 0;
  }
  else
  cout<<"YES"<<endl;
  
 if(flag1!=0){
   str[key][0]='+';
   str[key][1]='+';
 }
 
 if(flag2!=0){
   str[key][3]='+';
   str[key][4]='+';
 }
 
 for(i=0;i<n;i++){
   puts(str[i]);
 }
  
}

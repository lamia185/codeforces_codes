#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,count=0,flag=0,B=0,x,f=0;
  char str[105];
  
  cin>>n>>str;
  
  for(i=0;i<n;i++){
    if(str[i]!='W')
    flag=1;
    else {
      flag=0;
      break;
    }
    
  }
  
  for(i=0;i<n-1;i++){
    
    if(str[i]=='B' && str[i+1]=='W' && flag!=1)
    count++;
  }
  
  if(str[n-1]=='B')
  count++;
  
  if(flag==1)
  cout<<"1"<<endl;
  else
  cout<<count<<endl;
  
  if(count==0){
    return 0;
  }
  
  for(i=0;i<n;i++){
    if(str[i]=='B'){
      f=1;
      B++;
      x=0;
    }
    
    if((str[i]!='B' || i==n-1) && x==0 && f==1){
      x=1;
    cout<<B<<" ";
    B=0;
    }
  }
}

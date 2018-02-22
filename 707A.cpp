#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,i,j,k,l,flag=0;
  char str[110][110];
  
  cin>>n>>m;
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>str[i][j];
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(str[i][j]=='W' || str[i][j]=='B' || str[i][j]=='G'){
        flag=1;
      }
      else{
        flag=0;
        break;
      }
    }
    if(flag==0)
    break;
    
  }
  
  if(flag==1){
    cout<<"#Black&White"<<endl;
  }
  
  else{
    cout<<"#Color"<<endl;
  }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  int r,c,i,j,k,l,m;
  cin>>r>>c;
  
  string str[r+1];
  
  for(i=0;i<r;i++)
  cin>>str[i];
  
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      if(str[i][j]=='.')
      str[i][j]='D';
    }
  }
  
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      if(str[i][j]=='W'){
        if(str[i-1][j]=='S' || str[i+1][j]=='S' || str[i][j+1]=='S' || str[i][j-1]=='S'){
          cout<<"NO"<<endl;
          return 0;
        }
      }
    }
  }
  
  cout<<"YES"<<endl;
  for(i=0;i<r;i++)
  cout<<str[i]<<endl;
}

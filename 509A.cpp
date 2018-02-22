#include<bits/stdc++.h>
using namespace std;

int main(){
  int ara[20][20]={0},n,i,j,k;
  
  cin>>n;
  
  for(j=1;j<=n;j++){
    ara[1][j]=1;
  }
  
  for(i=2;i<=n;i++){
    for(j=1;j<=n;j++){
      ara[i][j]=ara[i-1][j]+ara[i][j-1];
    }
  }
  
  cout<<ara[n][n]<<endl;
}

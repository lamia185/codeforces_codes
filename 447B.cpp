#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int ara[30],i,j,k,l,n,mx=-10;
  long long int sum=0;
  cin>>str>>n;
  
  
  for(i=97;i<=122;i++){
    cin>>ara[i];
    mx=max(mx,ara[i]);
  }
  
  
  for(i=0;str[i]!='\0';i++){
    int index=str[i];
    sum+=(i+1)*(ara[index]);
   
  }
  
  for(j=i+1;j<=n+i;j++){
    sum+=(j*mx);
  }

  
  cout<<sum<<endl;
}

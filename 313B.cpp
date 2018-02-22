#include<bits/stdc++.h>
using namespace std;
#define max 100005

int main(){
  char str[max];
  cin>>str;
  int i,j,k,l,n,a,b;
  l=strlen(str);
  
  int ara[max];
  memset(ara,0,sizeof(ara));
  
  
  for(i=0,j=1;i<l-1;i++,j++){
    if(str[i]==str[i+1])
    ara[j]=1;
    else
    ara[j]=0;
  }
  
  int sum[max]={0},prev=0;
  
  for(i=1;i<=l;i++){
    sum[i]=ara[i]+prev;
    prev=sum[i];
  }
  
  cin>>n;
  
  while(n--){
    cin>>a>>b;
    cout<<sum[b-1]-sum[a-1]<<endl;
  }
  
}

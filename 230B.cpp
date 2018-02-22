#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define max 1000000
bool ara[max];

void seive(){
  memset(ara,true,sizeof(ara));
  
  int i,j;
  
  for(i=2;i*i<=max;i++){
    if(ara[i]){
      for(j=i*2;j<=max;j+=i){
        ara[j]=false;
      }
    }
  }
}

int main(){
  seive();
  long long int n,a,key,s,b;
  
  cin>>n;
  for(a=0;a<n;a++){
    cin>>key;
    b=sqrt(key);
    s=b*b;
    
    if(s==key && ara[b] && key!=1)
    cout<<"YES"<<endl;
    
    else
    cout<<"NO"<<endl;
  }
}


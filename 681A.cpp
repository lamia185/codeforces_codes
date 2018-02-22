#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,flag=0;
  char str[100];
  cin>>n;
  
  while(n--){
    cin>>str>>a>>b;
    if(a>=2400 && b>=2400 && a<b)
      flag=1;
  
  }
  
  if(flag==1)
    cout<<"YES"<<endl;
  
  else cout<<"NO"<<endl;
}


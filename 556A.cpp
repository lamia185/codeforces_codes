#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,one=0,zero=0,k,l;
  cin>>n;
  char str[n];
  cin>>str;
  
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='1')
    one++;
    else
    zero++;
  }
  
  int choto=one;
  int boro=zero;
  
  if(zero<choto){
  choto=zero;
  boro=one;
  }
  
  else{
    choto=one;
    boro=zero;
  }
  
  k=boro-choto;
  
  cout<<k<<endl;
  
}

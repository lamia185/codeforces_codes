#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,i=0,j=0,count=0,k,l,ara1[101],ara2[101];
  
  cin>>n;
  
  int f=n;
  while(n--){
    cin>>a>>b;
    ara1[i]=a;
    ara2[i]=b;
    i++;
  }
  
  
  for(k=0;k<f;k++){
    for(l=0;l<f;l++){
      if(ara2[k]==ara1[l])
      count++;
    }
    
  }
  
  cout<<count<<endl;
}

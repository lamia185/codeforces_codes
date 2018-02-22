#include<bits/stdc++.h>
using namespace std;

int main(){
  int ara[5],i,j,k,n,flag=0;
  
  cin>>n;
  k=n+1;
  char str[1001];
  while(1){
    
  sprintf(str,"%d",k);
  
  for(i=0;str[i]!='\0';i++){
    flag=0;
    for(j=i+1;str[j]!='\0';j++){
      if(str[i]==str[j]){
        flag=1;
        break;
      }
    }
    if(flag==1)
    break;
  }
  
  if(flag==0){
    cout<<k<<endl;
    break;
  }
  
  k++;

  }
}

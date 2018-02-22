#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,d,i,j,count=0,max=-1,flag=0;
  char str[200];
  cin>>n>>d;
  
  while(d--){
    cin>>str;
    flag=0;
    for(i=0;i<n;i++){
      if(str[i]=='0'){
        flag=1;
        break;
      }
    }
    if(flag==1){
      count++;
    }
    else
    count=0;
    
    if(count>max)
    max=count;
  }
  
  cout<<max<<endl;
}

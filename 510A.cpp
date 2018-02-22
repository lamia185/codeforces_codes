#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c,d,i,j,count=0,l;
  cin>>a>>b;
bool flag=true;
  
  for(i=1;i<=a;i++){
    count=0;
      if(i%2!=0){
  for(j=1;j<=b;j++){
    cout<<"#";
      }
      cout<<endl;
    }
    
    else{
      if(flag){
      for(j=1;j<=b;j++){
        count++;
        if(count<b){
          cout<<".";
        }
        else
        cout<<"#";
      }
      cout<<endl;
      flag=false;
      }
      
      else{
        for(j=1;j<=b;j++){
        count++;
        if(count==1){
          cout<<"#";
        }
        else
        cout<<".";
      }
      cout<<endl;
      flag=true;
      }
      
    }
  }
}

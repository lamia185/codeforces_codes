#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
  int cup[110],medal[110],cups=0,medals=0,i,j,k,l,n;
  double a,b,c,d;
  
  for(i=0;i<3;i++){
    cin>>cup[i];
    cups+=cup[i];
  }
  
  for(i=0;i<3;i++){
    cin>>medal[i];
    medals+=medal[i];
  }
  cin>>n;
 
  
  if(cups<=5 && cups!=0){
  cups=1;
  }
  
  else{
    a=((double)cups)/5;
    l=ceil(a);
    cups=l;
  }
  

  if(medals<=10 && medals!=0){
  medals=1;
  }
  
  else{
    b=((double)medals)/10;
    k=ceil(b);
    medals=k;
  }
  
  
  n=n-cups;
  n=n-medals;
  
  
  if(n<0){
    cout<<"NO"<<endl;
    return 0;
  }
  
  else {
    cout<<"YES"<<endl;
    return 0;
  }
  
  
  
}

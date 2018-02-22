#include<bits/stdc++.h>
using namespace std;

int flag=0;

void compo(int k){
  for(int i=2;i<k;i++){
    if(k%i==0){
      flag=1;
      break;
    }
    else
    flag=0;
  }
}

int main(){
  int n,a,b,c;
  
  cin>>n;
  a=4;
  b=n-4;
  
  while(1){
  
  compo(a);
  int s=flag;
  flag=0;
  compo(b);
  int m=flag;
  
 
  if((s*m)==1){
    cout<<a<<" "<<b<<endl;
    break;
    return 0;
  }
  else{
    a++;
    b--;
    flag=0;
  }
  
  }
  
  
}

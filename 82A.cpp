#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,r=1,i;
  cin>>a;
  
  while(r*5<a){
    a-=(r*5);
    r*=2;
  }
  
  int key=(a-1)/r;
  
  
  if(key==0)
  cout<<"Sheldon"<<endl;
  
  else if(key==1)
  cout<<"Leonard"<<endl;
  
  else if(key==2)
  cout<<"Penny"<<endl;
  
  else if(key==3)
  cout<<"Rajesh"<<endl;
  
  else
  cout<<"Howard"<<endl;
  
}


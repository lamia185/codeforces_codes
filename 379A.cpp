#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,m,n,i=5,k,l,div,mod;
  double j;
  cin>>a>>b;
  
  int count=a;
  
 while(a>=b){
   div=a/b;
   count+=div;
   mod=a%b;
   a=div+mod;
 }
 
 cout<<count<<endl;
}

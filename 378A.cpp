#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,i,ca=0,cb=0,cc=0;
  
  cin>>a>>b;
  
  for(i=1;i<=6;i++){
    int k=abs(a-i);
    int l=abs(b-i);
    
    if(k<l)
    ca++;
    
    else if(k>l)
    cb++;
    
    else 
    cc++;
  }
  
  cout<<ca<<" "<<cc<<" "<<cb<<endl;
  
}

#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int n,k,a,b,c,max=-1000000000,f,t;
  cin>>n>>k;
  
  while(n--){
    cin>>f>>t;
    if(t>k){
      a=f-(t-k);
    }
    else
    a=f;
    if(a>max)
    max=a;
    
  }
  cout<<max<<endl;
  
}

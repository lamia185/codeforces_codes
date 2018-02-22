#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,prev=1,curr,i,j,l;
  long long int count=0;
  
  cin>>n>>m;
  
  for(i=0;i<m;i++){
    cin>>curr;
    if(prev<=curr){
      count+=(curr-prev);
      prev=curr;
    }
    else{
      count+=(n-prev+curr);
      prev=curr;
    }
  }
  cout<<count<<endl;
}

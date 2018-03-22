#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int r,x,y,x1,y1,ans;
  cin>>r>>x>>y>>x1>>y1;
  
  double d=sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));
  
  ans=ceil(d/(double)(2*r));
  
  cout<<ans<<endl;
}

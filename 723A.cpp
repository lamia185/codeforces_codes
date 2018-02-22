#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool cmp(int x,int y){
  return x>y;
}

int main(){
  int a,b,c,i,j,count=0,ara[4];
  
  for(i=0;i<3;i++){
    cin>>ara[i];
  }
  
  sort(ara,ara+3,cmp);
  
  for(i=0;i<2;i++){
    count+=(ara[i]-ara[i+1]);
  }
  
  cout<<count<<endl;
}

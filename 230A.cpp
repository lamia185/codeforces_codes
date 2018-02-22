#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct drag{
  int stren;
  int bonus;
}dragon[10000];

bool comp(struct drag x,struct drag y ){
    return (x.stren<y.stren);
}

int main(){
  int n,m,flag=0,i;
  cin>>n>>m;
  
  
  for(i=0;i<m;i++)
    cin>>dragon[i].stren>>dragon[i].bonus;
  
  
  sort(dragon,dragon+m,comp);
  
  for(i=0;i<m;i++){
    if(dragon[i].stren<n){
      n+=dragon[i].bonus;
      flag=1;
    }
    else
    flag=0;
  }
  
  if(flag==1)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  
}

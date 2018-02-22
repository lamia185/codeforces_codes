#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct laptop{
  int price;
  int quality;
}lap[100005];

bool cmp(struct laptop x,struct laptop y){
 return  x.quality>y.quality;
}

int main(){
  int n,i,j,k,l;
  cin>>n;
  
  for(i=0;i<n;i++)
  cin>>lap[i].price>>lap[i].quality;
  
  sort(lap,lap+100005,cmp);
  
  for(i=0;i<n;i++){
    if(lap[i].price<lap[i+1].price && lap[i].quality>lap[i+1].quality){
      cout<<"Happy Alex"<<endl;
      return 0;
    }
  }
  cout<<"Poor Alex"<<endl;
}

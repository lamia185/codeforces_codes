#include<bits/stdc++.h>
using namespace std;

int main(){
  int left,right,mix,gap,choto,boro,ans=0;
  cin>>left>>right>>mix;
  
  choto=left;
  boro=right;
  
  if(left<right){
  choto=left;
  boro=right;
  }
  
  else
  {
    choto=right;
    boro=left;
  }
  
  if(left==0 && mix==0 || right==0 && mix==0){
    cout<<"0"<<endl;
    return 0;
  }
  
  while(choto!=boro && mix>=0){
    gap=boro-choto;
    if(gap>mix){
    choto+=mix;
    mix-=gap;
    }
    else{
    choto+=gap;
    mix-=gap;
    }
    
  }
  
  if(!(mix<=0)){
  mix/=2;
  
  choto+=mix;
  boro+=mix;
  }
  
  cout<<choto*2<<endl;
  
}

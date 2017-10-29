#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,i,x=1,cnt=0,cnt_25=0,cnt_50=0,ara[100005];
  cin>>n;
  for(i=0;i<n;i++){
    cin>>ara[i];
  }

for(i=0;i<n;i++){
  if(ara[i]==25){
    cnt_25++;
  }
  else if(ara[i]==50){
    if(cnt_25<1){
      x=0;
      break;
    }
    else{
      cnt_25--;
      cnt_50++;
    }
  }
  else{
   if(cnt_25>0 && cnt_50>0){
     cnt_25--;
     cnt_50--;
   }
   else if(cnt_25>=3){
     cnt_25-=3;
   }
   else{
     x=0;
     break;
   }
  }
}

if(x==1){
  cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;
}
}

#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int rev(int s){
  int remainder=0,sum=0;
  while(s!=0){
    remainder=s%10;
    sum=sum*10+remainder;
    s=s/10;
  }
  return sum;
}

int main(){
  int n,a,b,l,m,k,x;
  cin>>n;
  while(n--){
    cin>>a>>b;
     l=rev(a);
     m=rev(b);
     k=l+m;
     x=rev(k);
    cout<<x<<endl;
  }
}

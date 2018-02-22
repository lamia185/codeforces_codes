#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,c,d,ara[110];
  double s,l;
  
  cin>>n;
  for(a=0;a<n;a++){
    cin>>ara[a];
    d+=ara[a];
  }
  s=(double)d;
  printf("%.12lf",s/n);
}

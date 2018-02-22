#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int dui,tin,patch,choi,min1=0,min2=0,sum=0;
  
  cin>>dui>>tin>>patch>>choi;
  
  min1=dui;
  
  if(patch<min1)
  min1=patch;
  
  if(choi<min1)
  min1=choi;
  
  sum+=(256*min1);
  
  dui=dui-min1;
  min2=dui;
  
  if(tin<min2)
  min2=tin;
  
  sum+=(32*min2);
  
  cout<<sum<<endl;
}

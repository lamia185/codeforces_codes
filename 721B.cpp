#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,i,j,cnt1=0,cnt2=0;
  cin>>n>>k;
  
  string str[n+1],pass;
  
  for(i=0;i<n;i++)
  cin>>str[i];
  
  cin>>pass;
  
  for(i=0;i<n;i++){
    if(str[i].length()<pass.length())
    cnt1++;
    
    if(!(str[i].length()>pass.length()))
    cnt2++;
  }
  
  int best=cnt1+((cnt1/k)*5)+1;
  int worst=cnt2+(((cnt2-1)/k)*5);
  
  cout<<best<<" "<<worst<<endl;
}

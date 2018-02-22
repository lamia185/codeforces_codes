#include<bits/stdc++.h>
using namespace std;

string mini(string x,string y){
  if(x.length()<=y.length())
  return x;
  else return y;
}

int main(){
  int n,m,i,j,k,l;
  pair<string,string>str1[3005];
  string str2[3005];
  
  cin>>n>>m;
  
  for(i=0;i<m;i++)
  cin>>str1[i].first>>str1[i].second;
  
  for(i=0;i<n;i++)
  cin>>str2[i];
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(str2[i]==str1[j].first || str2[i]==str1[j].second){
        cout<<mini(str1[j].first,str1[j].second)<<" ";
      }
    }
  }
  cout<<endl;
}

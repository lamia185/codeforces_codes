#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,count=1,i;
  char str1[3],str2[3];
  
  cin>>n;
  
  cin>>str1;
  n=n-1;
  
  for(i=0;i<n;i++){
    cin>>str2;
    if(str1[1]==str2[0])
    count++;
    
    strcpy(str1,str2);
  }
  
  cout<<count<<endl;
}

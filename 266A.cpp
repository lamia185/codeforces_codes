#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  int n,flag=1,count=1;
  cin>>n;
  cin.ignore();
  char str[n+1];
  gets(str);
  
  for(int i=0;i<n;i++){
    count=1;
    if(str[i]==str[i+1]){
      count++;
      flag++;
    }
    else count=1;
  }
  cout<<flag-1<<endl;
}

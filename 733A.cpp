#include<bits/stdc++.h>
using namespace std;

int main(){
  char str[101];
  int i,j,k,l,count=1,max=0;
  
  cin>>str;
  
  for(i=0;str[i]!='\0';i++){
    if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y')
      count++;
     
    else
    count=1;
    
    if(count>max)
     max=count;
  }
  cout<<max<<endl;
}

#include<bits/stdc++.h>
using namespace std;

bool vowel(char ch){
  if(ch=='a' || ch=='e' || ch=='i' || ch=='u' || ch=='y' || ch=='o')
  return true;
  else return false;
}

int main(){
  int n,i,j,l;
  char str[110];
  cin>>n;
  cin>>str;
  
  for(i=0;i<n;){
    if(vowel(str[i]) && vowel(str[i+1])){
      for(j=i+1;j<n;j++){
        str[j]=str[j+1];
      }
    }
    else
    i++;
  }
  
  puts(str);
}

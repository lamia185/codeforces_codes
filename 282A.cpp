#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  char str[4];
  int n,X=0;
  cin>>n;
  cin.ignore();
  while(n--){
    gets(str);
    if(str[0]=='+' || str[2]=='+')
    X++;
    if(str[0]=='-' || str[2]=='-')
    X--;
  }
  cout<<X<<endl;
}

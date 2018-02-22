#include<bits/stdc++.h>
using namespace std;

int main(){
  char hate[10]={"I hate "};
  char love[10]={"I love "};
  char that[10]={"that "};
  char it[10]={"it "};
  
  
  int n,i;
  cin>>n;
  
  for(i=1;i<=n;i++){
    if(i%2!=0){
      cout<<hate;
       if(i!=n)
       cout<<that;
    }
    else{
      cout<<love;
      if(i!=n)
      cout<<that;
    }
  }
  cout<<it<<endl;
}

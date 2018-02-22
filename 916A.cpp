#include<bits/stdc++.h>
using namespace std;

int main(){
  int lapse,hour,min,i,j,k,l,count=0;
  
    cin>>lapse>>hour>>min;
    
    while(1){
        i=hour/10;
        j=hour%10;
        k=min/10;
        l=min%10;
        
        if(i==7 || j==7 || k==7 ||l==7){
          break;
        }
        
        min-=lapse;
        
        if(min<0){
          min+=60;
          hour--;
        }
        
        if(hour<0){
          hour+=24;
        }
        count++;
    }
    
    cout<<count<<endl;
}

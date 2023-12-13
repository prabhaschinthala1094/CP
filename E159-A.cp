#include <bits/stdc++.h>
using namespace std;

int main() {
   
   int t;
   cin>>t;
   while(t--){
       int n;
       string s;
       cin>>n;
       cin>>s;
       int cnt0=0,cnt1=0;
       bool valid=0;
       for(auto it:s){
           if(it=='0'){
               cout<<"YES"<<endl;
               valid=1;
               break;
           }
           
       }
       if(valid==0){
           cout<<"NO"<<endl;
       }
       
   }
    
    return 0;
}
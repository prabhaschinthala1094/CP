#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    
   ll x;
   cin>>x;
   string s=to_string(x);
   for(ll i=0;i<s.size();i++){
       
       if(i==0 &&((s[0]-'0')==9))continue;
    //   if((s[0]-'0')==0)s[0]=9+'0';
       int p=s[i]-'0';
       int r=9-p;
       int k=min(p,r);
       s[i]=k+'0';
    //   if(i==1){
    //       cout<<p<<" "<<r<<" "<<k<<" "<<s[i];
    //   }
   }
   ll n=s.size();
   ll mul=pow(10,n-1);
   ll ans=0;
   for(int i=0;i<n;i++){
       ans+=(mul*(s[i]-'0'));
       mul/=10;
       
   }
  cout<<ans<<endl;
	return 0;
}
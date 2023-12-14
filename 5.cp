#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    // int avg=(x1+x2+x3)/3;
    // int opt=0;
    // if(abs(x1-avg)<=abs(x2-avg) && abs(x1-avg)<=abs(x3-avg)){
    //     opt=x1;
        
    // }
    // else if(abs(x2-avg)<=abs(x1-avg) && abs(x2-avg)<=abs(x3-avg)){
    //     opt=x2;
    // }
    // else if(abs(x3-avg)<=abs(x2-avg) && abs(x3-avg)<=abs(x1-avg)){
    //     opt=x3;
    // }
    // int ans=0;
    // ans+=abs(opt-x1)+abs(opt-x2)+abs(opt-x3);
    int ans=max(x1,max(x2,x3))-min(x1,min(x2,x3));
    cout<<ans<<endl;
    return 0;
}
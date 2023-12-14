#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int ans=INT_MAX;
    ans=min((l*k)/nl,ans);
    ans=min(ans,c*d);
    ans=min(ans,p/np);
    cout<<ans/n<<endl;
    
    
    return 0;
}
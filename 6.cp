#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        int x=s.size();
        vector<int>ans;
        int k=0;
        for(int i=x-1;i>=0;i--){
            
            if(s[i]!='0'){
                int mul=1;
                for(int j=0;j<k;j++){
                    mul*=10;
                }
                ans.push_back((s[i]-'0')*mul);
            }
            k++;
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }
    
    return 0;
}
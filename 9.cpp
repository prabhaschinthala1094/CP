#include <iostream>
#include <iomanip>
#include <fstream>

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>

#include <string>

#include <cmath>
#include <cstdlib>

#include <ctime>
#include <chrono>

#include <memory>
#include <new>

#include <thread>
#include <mutex>
#include <condition_variable>

#include <utility>
#include <tuple>
#include <typeinfo>
#include <exception>
#include <random>

#include <iterator>
#include <functional>
#include <numeric>
#include <array>

#include <cctype>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int maxi=*max_element(v.begin(),v.end());
    int mini=*min_element(v.begin(),v.end());
    int maxInd=INT_MAX;
    int minInd=-1;
    for(int i=0;i<n;i++){
      if(v[i]==maxi){
        maxInd=min(i,maxInd);
      }
      if(v[i]==mini){
        minInd=i;
      }
    }
    int ans=0;
    if(maxInd>minInd)ans--;
    ans+=maxInd+((n-1)-minInd);
    cout<<ans<<endl;

    return 0;
}

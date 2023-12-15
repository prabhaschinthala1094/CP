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
    unordered_map<string,int>v={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    int ans=0;
    while(n--){
    	string k;
    	cin>>k;
    	ans+=v[k];
    }
    cout<<ans<<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
   
  vector<vector<int>>v(5,vector<int>(5,0));
  int x=0;
  int y=0;
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
          cin>>v[i][j];
          if(v[i][j]!=0){
              x=i;
              y=j;
          }
      }
  }
  cout<<abs(2-x)+abs(2-y)<<endl;
    
    return 0;
}
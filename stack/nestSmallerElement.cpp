#include <iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

void solve(stack<int> &s, vector<int>& arr, vector<int>& ans){
  int n = arr.size();

  for(int i = n-1; i>=0; i--){
    int element  = arr[i];
    //is element ke liye stack check krne jana hai

    while(s.top() > element){
      s.pop();
    }
    //jab mai yaha pahuchunga , iska matlab
    // hai yaha par pakka ek chota element pada haoga
    ans.push_back(s.top());
    s.push(element);
  }
}

int main() {
  //input vexctor
  vector<int> v;

  v.push_back(8);
  v.push_back(4);
  v.push_back(6);
  v.push_back(2);
  v.push_back(3);

  cout << "input vector is : ";
  for(int i=0 ; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout<< endl;


  stack<int> s;
  s.push(-1);

  vector<int> ans;
  solve(s, v, ans);
  reverse(ans.begin(), ans.end());

  cout << "after serching ans is : ";
  for(int i =0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }


  return 0;
}
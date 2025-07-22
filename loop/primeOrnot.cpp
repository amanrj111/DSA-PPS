#include <iostream>
using namespace std;

int main(){
  int n;
  int cnt=0;
  cin >> n;
  if(n <= 1)
  cout << n << "not prime" << endl;
  else{
    for(int i=2; i<n; i++){
      if(n%i == 0)
      cnt++;
    }
  }
  if(cnt > 1){
    cout << "\n" << n << " not prime";
  }else{
    cout << "\n" << n << " is Prime";
  }
}
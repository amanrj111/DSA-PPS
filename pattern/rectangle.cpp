#include <iostream>
using namespace std;

int main (){

  int r;
  cout << ("enter the number of rows : ");
  cin >> r ;
  int c;
  cout << ("enter the number of columns : ");
  cin >> c;

  for(int i=0; i<=r ; i++){
    for(int j=0; j<c; j++){
      cout << ("*");
    }
    cout << (endl);
  }
  return 0;
} 
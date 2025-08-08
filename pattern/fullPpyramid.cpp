#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "enter a number : " << endl;

  cin >> n;

  for(int row=0; row<n; row++){
    //space
    for(int col=0; col<n-row-1; col++){
      cout << " ";
    }
    int k = row + 1;
    //star
    for(int col=0; col<k+1; col++){
      cout << "* ";
    }
    k = k+2;
    cout <<endl;
  }

  return 0;
}
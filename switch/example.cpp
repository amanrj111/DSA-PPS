#include <iostream>
using namespace std;

int main()
{

  int val;
  cout << "Enter the value" << endl;
  cin >> val;

  switch (val)
  {
  case 1:
    cout << "love";
    break;
  case 2:
    cout << "babber";
  case 3:
    cout << "Aman raj";

  default:
    cout << "suresh"; 
  }
}
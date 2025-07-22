#include <iostream>
#include <string>
using namespace std;

int ReverseString(string &s)
{
  int start =0;

  int end = s.length() -1;

  while(start < end){
    swap(s[start] , s[end]);
    start++;
    end--;
  }
}

int main()
{
  string s = "hello";
  cout << "String is: " << s << endl;

  char target = 'A'; // Correct type
  int reverse = ReverseString(s);

  cout << "Reversed string: " << reverse << endl;
  return 0;
}

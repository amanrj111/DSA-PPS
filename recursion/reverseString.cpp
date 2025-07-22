#include <iostream>
#include <string>
using namespace std;

void ReverseString(string &s)
{
  int start = 0;

  int end = s.length() - 1;
  // inbuitl function used

  // while(start < end){
  //   swap(s[start] , s[end]);
  //   start++;
  //   end--;
  // }

  // manual swap
  while (start < end)
  {
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    start++;
    end--;
  }
  
}

int main()
{
  string s = "hello";
  cout << "String is: " << s << endl;
  ReverseString(s);

  cout << "Reversed string: " << s << endl;
  return 0;
}

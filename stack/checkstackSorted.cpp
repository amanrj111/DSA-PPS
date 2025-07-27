#include <iostream>
#include <stack>
#include <cmath>
#include <limits.h>

using namespace std;

bool checkSorted(stack<int> &s, int prev)
{
  // base case
  if (s.empty())
  {
    return true;
  }

  // 1 case hm solvbe karenge
  int next = s.top();
  if (next < prev)
  {
    // not soorted
    return false;
  }
  else
  {
    // next >= prev -> sorted

    // pop top wala element
    s.pop();
    // prev move to next
    prev = next;

    // recursion
    return checkSorted(s, prev);
  }
}

int main()
{

  stack<int> s;
  s.push(50);
  s.push(40);
  s.push(30);
  s.push(20);
  s.push(10);

  int prev = INT_MIN;
  cout << checkSorted(s, prev);

  return 0;
}
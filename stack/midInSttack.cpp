#include <iostream>
#include <stack>
#include <limits.h>

using namespace std;

void printMiddleFromStack(stack<int>& s, int count, int totalSize){
  if(count == totalSize/2){
    cout << s.top() << endl;
  }

  int value = s.top();
  s.pop();
  count ++;

  //rec
  printMiddleFromStack(s,count, totalSize);
  //backtracking
  s.push(value);
}

int main()
{

  stack<int> s;
  s.push(11);
  s.push(12);
  s.push(13);
  s.push(14);
  s.push(15);
  int count = 0;
  int totalSize = s.size();
  printMiddleFromStack(s, count, totalSize);


  return 0;
}
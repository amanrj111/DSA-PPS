#include<iostream>
#include<stack>
#include<limits.h>

using namespace std;

void inserSorted(stack<int> &s, int value){
  //base case
  if(s.empty()){
    s.push(value);
    return;
  }

  //1 case hum , baki recursion
  if(value <= s.top()){
    s.push(value);
    return;
  }else {
    int topValue = s.top();
    s.pop();

    //rec
    inserSorted(s, value);
    //backtracking
    s.push(topValue);

  }
}

int main(){

  stack<int> s;
  s.push(50);
  s.push(40);
  s.push(30); 
  s.push(20);
  s.push(10);
  int value = 35;
  inserSorted(s, value);

  cout << "printing stack :" << endl;

  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }


  return 0;
}
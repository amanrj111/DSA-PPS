#include <iostream>
#include<queue>
using namespace std;

int main() {
  //creation 
 deque<int> dq;


//  insert
dq.push_front(15);
dq.push_back(10);
dq.push_back(5);

//size
cout <<dq.size() << endl;

if(dq.empty()){
  cout<< "dq is empty" << endl;

}else{
  cout << "dq is not empty" << endl;
}

cout << dq.back() << endl;


  return 0;
}
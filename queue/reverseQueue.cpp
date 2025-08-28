#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverseQueue(queue<int>& q){
  stack<int> s;

  while(!q.empty()){
    int element = q.front();
    q.pop();
    s.push(element);
  }

  while(!s.empty()){
    int element = s.top();
    s.pop();
    q.push(element);
  }
}


//by rec
void reverseQueueByRec(queue<int>& q){
if(q.empty()){
  return;
}

//ek case hm solve karenge
int element = q.front();
q.pop();
reverseQueueByRec(q);
q.push(element);
}


void printQueue(queue<int> q) {
    while(!q.empty()){
      cout << q.front() << " ";
      q.pop();
    }
    cout << endl;
  }

int main(){
  queue<int> q;
  q.push(5);
  q.push(10);
  q.push(100);
  q.push(1000);
  q.push(1001);

  // reverseQueue(q);
  printQueue(q);

  reverseQueueByRec(q);
  printQueue(q);

}
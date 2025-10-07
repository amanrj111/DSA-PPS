#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void printQueue(queue<int> q){
  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}

//unsuedelement = q.size() -> initilize

void reverseKGroup(queue<int> &q, int k,int unUsedElementCount){


//let find out whether we have any k elemens to reverse or not
if(unUsedElementCount >= k){
  //i have k group to reverse
  //reverse it
  stack<int> s;
  for(int i=0; i<k; i++){
    int element = q.front();
    q.pop();
    s.push(element);
  }
  for(int i=0; i<k ; i++){
    int element  = s.top();
    s.pop();
    q.push(element);
  }

  //baki rec
  reverseKGroup(q, k , unUsedElementCount - k);

}else{
  //i have k group to reverse
  //as it element ko push kro
  for(int i=0; i<unUsedElementCount; i++){
    int element = q.front();
    q.pop();
    q.push(element);

  }

}
}

int main(){
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(67);
  q.push(8);
  // rearrangeQueue(q);
  int k=3;
  reverseKGroup(q, k , q.size());
  printQueue(q);

  return 0;
}
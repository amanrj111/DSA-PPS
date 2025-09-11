#include<iostream>
#include<queue>
#include<stack>
using namespace std;



    queue<int> rearrangeQueue(queue<int> q) {
        
        queue<int> q1;
        
        int size = q.size();
        int half = size/2;
        
        while(half--) {
            int element = q.front();
            q.pop();
            q1.push(element);
        }
        //toh ab mere paas 2 queue h
        //with size/2 elements each
        //appply main logic -> fetch , pop. insert
        while(!q.empty()) {
            int element = q1.front();
            q1.pop();
            q1.push(element);
            
            element = q.front();
            q.pop();
            q1.push(element);
        }
        
        return q1;
    }

int main(){
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);

  rearrangeQueue(q);

   while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
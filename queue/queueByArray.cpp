#include <iostream>
#include<queue>

using namespace std;

class Queue {
  public:
  int *arr;
  int size;
  int front;
  int rear;


  Queue(int capacity){
    arr = new int [capacity];
    size = capacity;
    front = -1;
    rear = -1;
  }

  void push(int value){
    //overflow
    //first element 
    //normal inserttion 

    if(rear == size-1){
      cout << "overflow";
      return;
    }
    if(front == -1 && rear == -1){
      front ++ ;
      rear ++;
      arr[rear] = value;
    }else{
      //normal insertion
      rear++;
      arr[rear] = value;
    }

  }

  void pop(){
    //underflow
    //single element
    //normal pop

    if(front == -1 && rear == -1){
      cout << "underflow" << endl;
    }
    if(front == rear){
      //single eelement 
      arr[front] = -1;
      front = -1;
      rear = -1;
    }else{
      //normal pop
       arr[front] = -1;
        front++;
      }
    }

    int getSize(){
    if(front == -1 && rear == -1){
      return 0;
    }
    else{
      return rear - front + 1;
    }
  }

  bool checkEmpty(){
    if(front == -1 && rear == -1){
      return true;
    }else{
      return false;
    }
  }

 int  getFrontElement(){
  if(front == -1){
    cout << "there is no element" << endl;
    return -1;
  }
  int value = arr[front];
  return value;
  }

  int rearelement(){
    if(rear == -1 ){
      cout<< " there is no element " << endl;
      return -1;
    }else{
      int value = arr[rear];
      return value;
    }
  }

};


int main(){
   Queue q(5);
   q.push(5);
   q.push(15);
   q.push(25);

   cout << q.getSize() << endl;

   cout << q.getFrontElement() << endl;

   q.pop();
   q.pop();
   q.pop();

   cout << q.checkEmpty() << endl;


  return 0;
}
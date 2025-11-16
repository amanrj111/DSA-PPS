#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Node{
  public:
  Node* left;
  Node* right;
  int data;

  Node(int value){
    data = value;
    left = NULL;
    right = NULL;
  }
};

Node* buildBST(Node* root, int value){
  if(root == NULL){
    root = new Node(value);
    return root;
  }
  else{
    if(value > root->data){
      root-> right = buildBST(root->right, value);
    }
    else{
      root->left = buildBST(root->left, value);
    }
    return root;
  }
}

Node* createBST(Node* root){
  cout << "Enter the value for the node" << endl;
  int val;
  cin >> val;

  while(val != -1){
    root = buildBST(root, val);
    cout << "enter the value for the node : " << endl;
    cin >> val;
  }
  return root;
}

void preOrder(Node){

}
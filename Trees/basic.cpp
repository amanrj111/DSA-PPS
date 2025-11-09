#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>
#include<queue>

using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int value)
  {
    data = value;
    left = NULL;
    right = NULL;
  }
};

// return root node of the tree
Node *buildTree()
{
  int value;
  cin >> value;

  if (value == -1)
  {
    return NULL;
  }
  else
  {
    Node *root = new Node(value);
    // rec
    root->left = buildTree();
    root->right = buildTree();
    return root;
  }
}

// NLR preorder
void preOrederTraversal(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  // 1 xase mai solve karunga,  bakki rec kr dega
  // n
  cout << root->data << " ";
  // L
  preOrederTraversal(root->left);
  // R
  preOrederTraversal(root->right);
}

// LNR
void inOrderTraversal(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  // L
  inOrderTraversal(root->left);
  // N
  cout << root->data << " ";
  // R
  inOrderTraversal(root->right);
}

// LRN
void postOrderTraversal(Node *root)
{
  // base case
  if (root == NULL)
  {
    return;
  }
  // LRN
  // L
  postOrderTraversal(root->left);
  // R
  postOrderTraversal(root->right);
  // N
  cout << root->data << " ";
}

void levelOrderTraversal(Node* root){
  //bc
  if(root == NULL){
    return ;
  }
  //LOT
  queue<Node* > q;
  //initial state maintain
  q.push(root);

  while(!q.empty()){
    Node* front  = q.front();
    q.pop();

    cout << front->data << " ";
    
    if(front->left != NULL){
      q.push(front->left);
    }
    if(front->right != NULL){
      q.push(front->right);
    }
  }
}

int main(){
  //10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1
  Node* root = buildTree();
  cout << endl;

  cout << "printing preorder travwersal : ";
  preOrederTraversal(root);

  cout<<endl;

  cout << "printing ineorder travwersal : ";
  inOrderTraversal(root);
  cout<<endl;

  cout << "printing postorder travwersal : ";
  postOrderTraversal(root);

  cout<<endl;

  cout << "printing postorder levelOrderTraversal : ";
  levelOrderTraversal(root);

  cout<<endl;

  return 0;
}
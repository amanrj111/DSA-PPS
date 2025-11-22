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

void preOrder(Node* root){
  //nlr
  if(root == NULL){
    return ;
  }

  //NLR
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);

}


void inOrder(Node* root){
  //bc
  if(root == NULL){
    return ;
  }

  //LNR
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
  
}

void postOrder(Node* root){
  //bc
  if(root == NULL){
    return ;
  }

  //LRN
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
  
}

void levelOrderTraversal(Node* root){
  queue<Node*> q;
  //initial state

  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* front = q.front();
    q.pop();

    if(front == NULL){
      //iska matlab current ki sari node travel ho chuki hai
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }else{
      cout << front->data << " ";
      if(front->left){
        q.push(front->left);
      }
      if(front->right){
        q.push(front->right);
      }
    }
  }
}

int getMin(Node* root){
  if(root == NULL){
    return -1;
  }

  while(root ->left != NULL){
    root = root -> left;
  }
  return root->data;

}

int getMax(Node* root){
  if(root == NULL){
    return -1;
  }

  while(root ->right != NULL){
    root = root -> right;
  }
  return root->data;

}


int main() {
  Node* root = NULL;
  root = createBST(root);

  cout << "printing preOrder : ";
  preOrder(root);
  cout << endl;
  
  cout << "printing inorder : ";
  inOrder(root);
  cout << endl;;

  cout << "printing postorder : ";
  postOrder(root);
  cout << endl;

  cout << "level order :" << endl;
  levelOrderTraversal(root);
  cout << endl;

  cout << "maximun is : " << endl;
  cout << getMax(root) << endl;

  cout << "minimum is : " << endl;
  cout << getMin(root) << endl;


}

// BSR -> inorder  -> always sorted;
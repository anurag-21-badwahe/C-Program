#include<iostream>
using namespace std;

class node{
    public:
       int data;
       node* right;
       node* left;

       //constructor
       node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
       }
};

node* buildTree(node* root){
  
  cout << "Enter the data" << endl;
  int data;
  cin >> data;
  root = new node(data);

  if(data == -1){
    return NULL;
  }

  cout << "Enter the data for left of" << data << endl;
  root->left = buildTree(root->left);

  
  cout << "Enter the data for right of" << data << endl;
  root->right = buildTree(root->right);

  return root;


}


int main(){
    node* root = NULL;

    root = buildTree(root);

}
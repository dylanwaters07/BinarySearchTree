/*
Dylan Waters
5/22/2026

Implementation of a binary search tree.

*/

#include "binary.h"
using namespace std;

// Constructor and destructor.
binary::binary(){
  root = nullptr; // Start root as null.
}

binary::~binary(){
    deleteBST(root); //Deconstruct.
}

// Logic for deleting tree.
void binary::deleteBST(node* n){
    if(n == nullptr) return;
    deleteBST(n->left);
    deleteBST(n->right);
    delete n;
}

// adding numbers to the tree.
void binary::add(int num){
  //cout << "Adding..." << "\n" << endl;
  node* newNode = new node();
  newNode->tree = num;
  newNode->left = nullptr;
  newNode->right = nullptr;

  if (root == nullptr){
    root = newNode;
    return;
  }

  node* current = root;
  node* parent = nullptr;

  while(current != nullptr){
    parent = current;
    if (num < current->tree){
      current = current->left; // If less, assign current to the left.
    }
    else{
      current = current->right; // Otherwise, go right.
    }
  }
  
  if(num < parent->tree){
      parent->left = newNode;
  }
  else{
      parent->right = newNode;
  }
}

// loading numbers from a file and adding to the tree.
void binary::printFile(string filename){
    ifstream file(filename);
    if(!file){
        cout << "File not found." << endl;
        return;
    }
    string token;
    while(getline(file, token, ',')){  // read until comma instead of space
        int num = stoi(token);         // convert string to int
        add(num);
    }
    file.close();
    cout << "Numbers loaded from " << filename << endl;
}

//Numbers are removed correctly (NOTE: THIS IS NOT TRIVIAL; make sure the
//three cases - no children, one child, two children - are covered, including
//deleting the root)

// removing numbers from the tree.
void binary::remove(int num){ // Recursive function
    cout << "Removing..." << "\n" << endl;
    root = remove(root, num);
}

// removing numbers from the tree.
node* binary::remove(node* n, int num){

    if (n == nullptr){ // If not found... end it
        cout << "Number not found." << endl;
        return nullptr;
    }
    
    if(num < n->tree){ // If less, go left
        n->left = remove(n->left, num);
    }
    else if(num > n->tree){ // If greater, go right
        n->right = remove(n->right, num);
    }
    else{
        // Three cases
        // No children
        if(n->left == nullptr && n->right == nullptr){
            delete n;
            return nullptr;
        }
        // Right child
        else if(n->left == nullptr){
            node* temp = n->right;
            delete n;
            return temp;
        }
        // Left child
        else if(n->right == nullptr){
            node* temp = n->left;
            delete n;
            return temp;
        }
        // Both children
        else{
            node* temp = n->right;
            temp->left = n->left;
            delete n;
            return temp;
        }
    }
    return n;
}

// search for a number in the tree.
bool binary::search(int num){
    return searchNode(root, num);
}

// search for a number in the tree.
bool binary::searchNode(node* n, int num){
    if(n == nullptr){
        return false;
    }
    if(n->tree == num){
        return true;
    }
    if(num < n->tree){
        return searchNode(n->left, num);
    }
    else{
        return searchNode(n->right, num);
    }
}

// print the tree in a readable format.
void binary::print(){
    if(root == nullptr){
        cout << "Tree is empty." << endl;
        return;
    }
    cout << "Printing..." << endl;
    printBST(root, 0);
    cout << endl;
}

// printing tree
void binary::printBST(node* n, int level){
    if(n == nullptr) return;
    printBST(n->right, level + 1);  // Right part
    
    for(int i = 0; i < level; i++)  // Indenting
        cout << "\t";
    
    cout << n->tree << endl;
    printBST(n->left, level + 1);   // Left part
}
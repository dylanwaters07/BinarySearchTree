#include "binary.h"
using namespace std;

binary::binary(){
  root = nullptr; // Start root as null.
}

binary::~binary(){
    deleteBST(root); //Deconstruct.
}

void binary::add(int num){
  cout << "Adding..." << "\n" << endl;
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


//Numbers are removed correctly (NOTE: THIS IS NOT TRIVIAL; make sure the
//three cases - no children, one child, two children - are covered, including
//deleting the root)

void binary::remove(int num){
  cout << "Removing..." << "\n" << endl;
  node* current = root;
  node* parent = nullptr;

  // To find the num within the tree
  while (current != nullptr && current->tree != num){
    parent = current;

    if (num < current->tree){
      current = current->left;
    }
    else{
      current = current->right;
    }

    // If not found... end it
    if (current == nullptr){
      cout << "Number not found." << endl;
      return;
    }
  }
}

void binary::search(int num){
    cout << "Searching..." << endl;

}


void binary::print(){
  cout << "Printing..." << "\n" << endl;
  node* current = root;
  
  cout << current; // Start by printing out the head

  if (current->left != nullptr){
    // If we find a left node...
    // Move up a line and print with spacing

    // Start by finding the very last left node and print...
    // And then work my way down with printing.
  }

  if (current->right != nullptr){
    // If we find a right node...
    // Move down a line and print with spacing
  }
}

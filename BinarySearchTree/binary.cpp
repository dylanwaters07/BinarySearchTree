#include "binary.h"
using namespace std;

binary::binary(){
  head = nullptr; // Start head as null.
}

binary::~binary(){
    deleteBST(num); //Deconstruct.
}

void binary::add(node* n){
  cout << "Adding..." << "\n" << endl;
  node* newNode = new node();
  newNode->tree = number;
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
    if (number < current->tree){
      current = current->left; // If less, assign current to the left.
    }
    else{
      current = current->right; // Otherwise, go right.
    }
  }
  
}


//Numbers are removed correctly (NOTE: THIS IS NOT TRIVIAL; make sure the
//three cases - no children, one child, two children - are covered, including
//deleting the root)

void binary::remove(node* n){
  cout << "Removing..." << "\n" << endl;
  node* current = root;
  node* parent = nullptr;

  // To find the num within the tree
  while (current != nullptr && current->tree != number){
    parent = current;

    if (number < current->tree){
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

void binary::search(){
  cout << "Searching..." << "\n" << endl;

  // Use same while loop for seaching but instead of deleting...
  // we will print it.
  while (current != nullptr && current->tree != number){
    parent = current;
  }
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

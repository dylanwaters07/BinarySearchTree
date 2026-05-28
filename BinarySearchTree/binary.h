/*
Dylan Waters
5/22/2026

Declaration of a binary search tree.

*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

// Node struct for the tree.
struct node{
  int tree;
  node* left;
  node* right;
};

// Binary search tree class.
class binary{

 public:
  binary();
  ~binary();
  
  void add(int num);
  void remove(int num);
  bool search(int num);
  void print();
  void printFile(string filename);
  
 private:
    node* remove(node* n, int num);
    bool searchNode(node* n, int num);
    void printBST(node* n, int level);
    void deleteBST(node* n);
    
    node* root;
};
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

struct node{
  int tree;
  node* left;
  node* right;
};

class binary{

 public:
  binary();
  ~binary();
  
  void add(int num);
  void remove(int num);
  void search(int num);
  void print();
  
 private:
    bool searchNode(node* n, int num);
    void printBST(node* n);
    void deleteBST(node* n);
    
    node* head;
};

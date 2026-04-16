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
  void build();
  void add();
  void remove();
  void search();
  void print();
 private:
  node* head;
  node* tail;
};

#include "binary.h"
using namespace std;
binary::binary(){
  head = NULL;
  tail = NULL;
}

binary::~binary(){
  while(head != NULL){
    node* temp = head;
    head = head->right;
    delete temp;
  }
}

void binary::build(){
  node* current = new node();
  head = current;
  current->left = NULL;
  node* left = current;
}

void binary::print(){
  node* current = head;
  while(current!= NULL){
    cout << current->tree << " ";
    current= current->right;
  }
  cout << endl;
}

void binary::add(){
  cout << "Adding..." << endl;
  
  int addamount;
  cout << "How many numbers would you like to add?: ";
  cin >> addamount;

  for (int i=0; i < addamount; i++){
    int addnumber;
    cout << "What is your number?: ";
    cin >> addnumber;
    current = new node();
    left->right = left;
    current->tree = addnumber;
    left = current;
  }
}

void binary::remove(){
  cout << "REMOVE" << endl;
}

void binary::search(){
  cout << "SEARCH" << endl;
}

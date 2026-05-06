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
}

void binary::remove(node* n){
  cout << "Removing..." << "\n" << endl; 
}

void binary::search(){
  cout << "Searching..." << "\n" << endl;
}

void binary::print(){
  cout << "Printing..." << "\n" << endl;
}

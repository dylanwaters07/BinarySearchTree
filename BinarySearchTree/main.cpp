#include <iostream>
#include "binary.h"
using namespace std;

// https://www.cs.usfca.edu/~galles/visualization/BST.html
// Good visualization of BST that I used.

int main(){
  binary object; // Define object.
  
  bool running = true;
  while (running){
    int binarycommand;  
      
    cout << "1 - Add" << endl;
    cout << "2 - Remove" << endl;
    cout << "3 - Print" << endl;
    cout << "4 - Search" << endl;
    cout << "5 - Quit" << endl;
    cout << "6 - Help" << endl;
    
    cout << "What number relating to command you would you like to run?: ";
    cin >> binarycommand;

    if (binarycommand == 1){
        cout << "Adding..." << "\n" << endl;
        cout << "How many numbers would you like to add?: ";
        int addamount;
        cin >> addamount;
            
        for(int i=0; i < addamount; i++){
            cout << "Enter number to add: ";
            int num;
            cin >> num;
            object.add(num);
        }
    }

    else if (binarycommand == 2){
      cout << "Removing..." << "\n" << endl;
      int removeamount;
      cout << "How many numbers would you like to remove?: ";
      cin >> removeamount;
      
      for(int i=0; i < removeamount; i++){
        cout << "Enter number to remove: ";
        int num;
        cin >> num;
        object.remove(num);
      }
    }

    else if (binarycommand == 3){
      cout << "Printing..." << "\n" << endl;
      object.print();
    }

    else if (binarycommand == 4){
      cout << "Searching..." << "\n" << endl;

      int searchamount;
      cout << "How many numbers would you like to search?: ";
      cin >> searchamount;
      
      for(int i=0; i < searchamount; i++){
        cout << "Enter number to search: ";
        int num;
        cin >> num;
        
        bool found = object.search(num); // if object.search(num) returns, its true.
        
        if (found == true){
            cout << num << " was found in the tree..." << endl;
        }
        
        else{
            cout << num << " was not found in the tree..." << endl;
        }
      }
      
    }
    
    else if (binarycommand == 5){
      cout << "Quitting program..." << "\n" << endl;
      running = false; // should exit the loop and stop. Could also do return 1;
    }
    
    else if (binarycommand == 6){
        cout << "Help commands..." << "\n" << endl;
        cout << "1 - Add" << endl;
        cout << "2 - Remove" << endl;
        cout << "3 - Print" << endl;
        cout << "4 - Search" << endl;
        cout << "5 - Quit" << endl;
        cout << "6 - Help" << endl;
    }
    
    else{
        cout << "Invalid command." << endl;
    }
  }
  
  return 0;
}

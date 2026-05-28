/*
Dylan Waters
5/22/2026

Implementation of a binary search tree. The user can add, remove, print, and search for numbers in the tree.
The user can also load numbers from a file to add to the tree. The user can also print the tree to a file.
The user can also quit the program. The user can also get help on the commands.

*/

#include <iostream>
#include "binary.h"
using namespace std;

// https://www.cs.usfca.edu/~galles/visualization/BST.html
// Good visualization of BST that I used.

// Print menu choices for user.
void printMenu(){
    cout << "1 - Add" << endl;
    cout << "2 - Remove" << endl;
    cout << "3 - Print" << endl;
    cout << "4 - Search" << endl;
    cout << "5 - Quit" << endl;
    cout << "6 - Help" << "\n" << endl;
}

// Main function for user interaction.
int main(){
  binary object; // Define object.
  
  bool running = true;
  while (running){
    int binarycommand;  
    
    printMenu(); 
    cout << "What number relating to command you would you like to run?: ";
    cin >> binarycommand;

    if(binarycommand == 1){
            int choice;
            cout << "1 - Load from file" << endl;
            cout << "2 - Enter manually" << endl;
            cout << "Choice: ";
            cin >> choice;
            
            if(choice == 1){
                string filename;
                cout << "Enter full filename: ";
                cin >> filename;
                object.printFile(filename);
            }
            else if(choice == 2){
                cout << "Enter numbers: ";
                cin.ignore();
                string line;
                getline(cin, line);
                istringstream iss(line);
                int num;
                while(iss >> num){
                    object.add(num);
                }
                cout << "Numbers added." << endl;
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
#include <iostream>
#include "binary.h"
using namespace std;

int main(){
  binary object;
  object.build();
  
  bool running = true;
  while (running){
    cout << "1 - Add" << endl;
    cout << "2 - Remove" << endl;
    cout << "3 - Print" << endl;
    cout << "4 - Search" << endl;
    int binarycommand;
    cout << "What number relating to command you would you like to run?: ";
    cin >> binarycommand;

    if (binarycommand = 1){
      cout << "Adding..." << endl;
    }

    else if (binarycommand = 2){
      cout << "Removing..." << endl;
    }

    else if (binarycommand = 3){
      cout << "Printing" << endl;
    }

    else if (binarycommand = 4){
      cout << "Searching" << endl;
    }
  }
  
  return 0;
}

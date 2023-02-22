#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const int MAX_LENGTH = 100;
const int MAX_CHARACTER = 12;
int wordCount = 0;

void OpenFile() {// opens file, checks if it opened correctly, if it doesn't then it outputs error message
    ifstream inFile;
  
    inFile.open("getData.txt");
  
    if (!inFile) {
        cout << "Failed to open getData.txt" << endl;
        cout << "System Paused" << endl;
        system("Pause.");
        exit(EXIT_FAILURE);
        return;
    }
  
}

void CloseFile(){// closes file for multiple function uses
  ifstream inFile;
  inFile.close();
}



void StoreArray(char fakeArray [], int size){//uses OpenFile() and CloseFile() to open and store data from file into arrays
  OpenFile();
  ifstream inFile;
  string word;
  

  while(inFile >> word)
  
  

  


    
}




int main() {
const int MAX_SIZE = 100;
char stringMax[MAX_SIZE];  

  StoreArray(stringMax[MAX_SIZE]);
  
 OpenFile();

  
}

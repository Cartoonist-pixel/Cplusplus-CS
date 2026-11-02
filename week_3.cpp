/* Josh Crum
Period 3
Week_3
20 minutes*/ 

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "I did not do this 1 hour before deadline";

    // Close the file
    MyFile.close();

    // --- Moved inside main() ---
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close(); 

    return 0;
}


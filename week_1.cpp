#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Type a number:";
    cin >> x;
    cout << "your number "<<x <<"\n";

    int numbers[3] = {x,10,20};
    cout << "Array elements: ";
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
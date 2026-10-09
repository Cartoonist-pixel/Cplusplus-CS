/* Josh Crum
Period 3
Week_2
20 minutes*/    
#include  <iostream>
using namespace std;

void myFunction() {
    int i = 0;
    
    // 2. Loop
    while (i < 5) {
        // 3. Conditional
        if (i % 2 == 0) {
            cout << i << " is even\n";
        } else {
            cout << i << " is odd\n";
        }
        
        i++;
    }
}

int main() {
    myFunction();
    return 0;
}
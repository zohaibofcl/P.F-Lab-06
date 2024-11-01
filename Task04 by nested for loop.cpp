#include <iostream>
using namespace std;
int main() {
    int weeks = 3; 
    for (int i = 1; i <= weeks; i++) { 
        cout << "Week " << i <<":"<<endl; 
        for (int j = 1; j <= 7; j++) { 
            cout << "  Day " << j << endl; 
        }

        cout << endl; 
    }

    return 0;
}

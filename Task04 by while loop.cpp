#include <iostream>
using namespace std;
int main() {
    int weeks = 3;
    int i = 1; 
    while (i <= weeks) {
        cout << "Week " << i << ":" << endl;
        int j = 1; 
        while (j <= 7) { 
            cout << "  Day " << j << endl;
            j++;
        }
        cout << endl; 
        i++;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n =5;

    // TOP HALF (Rows 1 to n)
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 2 * n; j++) {
            // Left Wall || Right Wall || Left Diagonal || Right Diagonal
            if(j == 1 || j == 2 * n || j == i || j == (2 * n - i + 1)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // BOTTOM HALF (Rows n-1 down to 1)
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= 2 * n; j++) {
            // The exact same internal logic, just counting rows backwards!
            if(j == 1 || j == 2 * n || j == i || j == (2 * n - i + 1)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

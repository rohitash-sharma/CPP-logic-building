#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "This Function prints Hollow Triangle" << endl;
    cout << "Enter Hollow Triangle Length: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}

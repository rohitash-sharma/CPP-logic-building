#include <iostream>
using namespace std;

// this function checks which number is prime
bool isPrime(int a) {
    // if a is less than 2, that number is not prime
    if (a < 2) {
        return false;
    }
    // because 2 & 3 is prime
    if (a == 2 || a == 3) {
        return true;
    }
    // which numbers divisible by 2 & 3 is not prime
    if (a % 2 == 0 || a % 3 == 0) {
        return false;
    }
    
    // loop did not wasted at wrose number so i*i & i+=6
    for (int i = 5; i * i <= a; i += 6) {
        // if a divisible by i or (i+2) is not prime
        if (a % i == 0 || a % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void printPrimeInRange(int p, int q) {
    // howmany primes are between p & q
    int count = 0;
    
    // if user input p is greater than q then swap value p & q
    if (p > q) swap(p, q); 

    for (int i = p; i <= q; i++) {
        // called isPrime function for check i is prime or not prime 
        if (isPrime(i)) {
            count++;
            cout << i << endl;
        }
    }
    cout << "Total prime numbers from " << p << " to " << q << " = " << count << endl;
}

int main() {
    int num1, num2;
    cout << "Enter start range = ";
    cin >> num1;
    cout << "Enter end range = ";
    cin >> num2;
    
    printPrimeInRange(num1, num2);
    
    return 0;
}

#include <iostream>
using namespace std;

// Function to check if a number is prime (using int instead of bool)
int isPrime(int num) {
    if (num <= 1) 
        return 0; // not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0; // not prime
    }
    return 1; // prime
}

// Function to print prime numbers from 1 to n
void printPrimes(int n) {
    cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i) == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Main function
int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    printPrimes(n);
    return 0;
}

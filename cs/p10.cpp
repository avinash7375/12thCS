#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;  // 1 or less is not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  // Divisible by another number, not prime
        }
    }
    return true;  // No divisors found, prime
}

int main() {
    int n;

    cout << "Enter the number of prime numbers to print: ";
    cin >> n;

    int count = 0;
    int num = 2;

    while (count < n) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    cout << endl;

    return 0;
}
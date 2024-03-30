#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int nextPrime(int n) {
    // Ensure n is at least 2
    n = std::max(n, 2);

    // Keep incrementing n until a prime number is found
    while (!isPrime(n)) {
        ++n;
    }

    return n;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = nextPrime(num);

    std::cout << "The next prime number greater than " << num << " is: " << result << std::endl;

    return 0;
}

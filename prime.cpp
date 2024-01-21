#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to check if a number is palindromic
bool isPalindromic(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

// Function to count the number of odd digits in a number
int countOddDigits(int num) {
    int count = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            ++count;
        }
        num /= 10;
    }
    return count;
}

// Function to count the number of even digits in a number
int countEvenDigits(int num) {
    int count = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            ++count;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer for n." << std::endl;
        return 1; // Exit with an error code
    }

    int count = 0;
    int num = 2; // Starting from the first prime number

    std::vector<int> palindromicPrimes;

    while (count < n) {
        if (isPrime(num) && isPalindromic(num)) {
            palindromicPrimes.push_back(num);
            ++count;
        }
        ++num;
    }

    std::cout << "The first " << n << " palindromic primes are: [";
    for (size_t i = 0; i < palindromicPrimes.size(); ++i) {
        std::cout << palindromicPrimes[i];
        if (i < palindromicPrimes.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]." << std::endl;

    std::cout << "Of them, ";
    for (int prime : palindromicPrimes) {
        std::cout << prime << " has ";
        int oddCount = countOddDigits(prime);
        std::cout << oddCount << " digit" << (oddCount == 1 ? "" : "s");
        if (oddCount > 0 && countEvenDigits(prime) > 0) {
            std::cout << " (an even number)";
        }
        std::cout << " and ";
    }
    std::cout << "everything else has either one or three digits (which are odd)." << std::endl;

    return 0;
}

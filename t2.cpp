#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}


vector<int> generatePrimes(int maxLimit) {
    vector<int> primes;
    for (int i = 2; i <= maxLimit; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}


int minStepsToPrime(int num, const vector<int>& primes) {
    int minSteps = INT_MAX;
    for (int prime : primes) {
        minSteps = min(minSteps, abs(num - prime));
        if (prime > num && minSteps < (prime - num)) break; 
    }
    return minSteps;
}

int solve(int N, vector<int>& A) {
    int maxElement = *max_element(A.begin(), A.end());
    vector<int> primes = generatePrimes(maxElement + 100); 
    
    int totalSteps = 0;
    for (int num : A) {
        totalSteps += minStepsToPrime(num, primes);
    }
    return totalSteps;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cout << solve(N, A) << endl;
    return 0;
}


// problem statement : 

    // Problem Description
    // You are given an array 
    // A consisting of positive integers. Your task is to transform every element of the array into a prime number using the minimum number of operations. An operation consists of either increasing or decreasing a number by 1.

    // Objective
    // Minimize the total number of operations required to convert all elements of 
    // A into prime numbers.
    // Input Format
    // An integer 
    // N, the size of the array.
    // N space-separated integers representing the elements of the array 
    // A
    // Output Format
    // Print a single integer representing the minimum number of operations required.
    // Key Constraints

    // Key Constraints
    // 1. N<=105
    // 2. 1 <= A[i] <= 10^6
    
    // Example
    // Input:
    // Copy code
    // 4
    // 9 5 5 6
    // Output:
    // Copy code
    // 3
    // Explanation
    // The array 

    // A is [9, 5, 5, 6].
    // Element 9: It can be converted into 7 (prime) in 2 steps or into 11 (prime) in 2 steps. Choose 7, taking 2 steps.
    // Element 5: It is already a prime. No steps required.
    // Element 5: It is already a prime. No steps required.
    // Element 6: It can be converted into 5 (prime) in 1 step or into 7 (prime) in 1 step. Choose either, taking 1 step.
    // Total steps: 
    // 2+0+0+1=3.
#include <iostream>
#include <vector>

std::vector<int> sumOfAllSubarrays(const std::vector<int>& arr) {
    std::vector<int> result;

    // Iterate through each starting point of the subarray
    for (size_t start = 0; start < arr.size(); ++start) {
        int sum = 0;

        // Iterate through each ending point of the subarray
        for (size_t end = start; end < arr.size(); ++end) {
            sum += arr[end]; // Calculate the sum of the current subarray
            result.push_back(sum); // Store the sum in the result vector
        }
    }

    return result;
}

int main() {
    // Example usage
    std::vector<int> arr = {1, 2, 3};
    std::vector<int> sums = sumOfAllSubarrays(arr);

    // Output the results
    std::cout << "Sums of all subarrays:" << std::endl;
    for (int sum : sums) {
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}

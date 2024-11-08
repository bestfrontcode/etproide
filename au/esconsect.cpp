#include <iostream>
#include <vector>
#include <stdexcept> // For std::out_of_range

// Function template to safely access elements in an array
template <typename T>
T safeArrayAccess(const std::vector<T>& arr, size_t index) {
    if (index >= arr.size()) {
        throw std::out_of_range("Index out of range");
    }
    return arr[index];
}

int main() {
    // Example usage:
    std::vector<int> array = {1, 2, 3, 4, 5};
    size_t k = 2; // Example index

    try {
        int value = safeArrayAccess(array, k);
        std::cout << "Value at index " << k << " is: " << value << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

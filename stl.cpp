#include <iostream>
#include<vector>
using namespace std;

int main() {
    // STL in C++
    // 1. Vector
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> v(5, 10); // Vector of size 5, all elements initialized to 10 => {10, 10, 10, 10, 10}
    vec.push_back(6); // Add element at the end
    cout << "Vector elements: ";
    for (int v : vec) {
        cout << v << ' ';
    }
    cout << endl;
    cout << "Vector size: " << vec.size() << endl; // Number of elements
    cout << "Vector capacity: " << vec.capacity() << endl; // Allocated memory (not size)
    vec.emplace_back(7); // More efficient than push_back , constructs objects in place
    vec.pop_back(); // Remove last element
    vec.front() = 10; // Access and modify first element
    vec.back() = 20; // Access and modify last element
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
    cout << "Vector after pop_back: ";
    for (int v : vec) {
        cout << v << ' ';
    }
    cout << endl;

    return 0;
}
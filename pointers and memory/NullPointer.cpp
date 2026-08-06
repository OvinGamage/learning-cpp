#include <iostream>
//When you declare a regular pointer without giving it an initial address, it contains garbage data (a random memory address leftover in RAM):
//If you accidentally try to read or modify whatever is sitting at that random address, your program will crash or corrupt arbitrary memory.
//Initializing it as a null pointer safely marks it as unassigned:
//2. Common Uses for Null Pointers
//A. Checking If a Pointer is Safe to Use
//Before dereferencing (*) a pointer, you can check if it holds valid memory or if it's null. Dereferencing a null pointer causes a Segmentation Fault (instant crash).
//B. Indicating Failure or "Not Found"
//Functions that search for something or dynamically allocate memory often return nullptr if the operation fails or finds no result.

// Returns a pointer to the number if found, or nullptr if NOT found
int* findNumber(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return &arr[i]; // Return memory address of the match
        }
    }
    return nullptr; // Return nullptr to signal "Search Failed"
}

int main() {
    int scores[] = {85, 92, 78, 90, 88};
    int size = 5;

    // Search 1: Looking for a number that exists
    int* result1 = findNumber(scores, size, 90);

    if (result1 != nullptr) {
        std::cout << "Found target! Value is: " << *result1 << '\n';
    } else {
        std::cout << "Target not found.\n";
    }

    // Search 2: Looking for a number that does NOT exist
    int* result2 = findNumber(scores, size, 100);

    if (result2 != nullptr) {
        std::cout << "Found target! Value is: " << *result2 << '\n';
    } else {
        std::cout << "Target not found.\n"; // This line will execute!
    }

    return 0;
}

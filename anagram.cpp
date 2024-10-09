#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Function to check if two numbers are anagrams
bool areAnagrams(int num1, int num2) {
    // Convert numbers to strings
    string str1 = to_string(num1);
    string str2 = to_string(num2);

    // If lengths are different, they can't be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return (str1 == str2);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to check if they are anagrams: ";
    cin >> num1 >> num2;

    if (areAnagrams(num1, num2)) {
        cout << num1 << " and " << num2 << " are anagram numbers." << endl;
    } else {
        cout << num1 << " and " << num2 << " are not anagram numbers." << endl;
    }

    return 0;
}

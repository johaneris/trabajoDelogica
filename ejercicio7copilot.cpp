#include <iostream>
using namespace std;
int main() {
    // Initialize vectors and lengths
    const int length = 5;
    int vector1[length], vector2[length], sum[length];

    // Input vectors
    cout << "Enter " << length << " numbers for vector 1:\n";
    for (int i = 0; i < length; i++) {
        cin >> vector1[i];
    }
    cout << "Enter " << length << " numbers for vector 2:\n";
    for (int i = 0; i < length; i++) {
        cin >> vector2[i];
    }

    // Calculate sum
    for (int i = 0; i < length; i++) {
        sum[i] = vector1[i] + vector2[i];
    }

    // Output sum
    cout << "Sum of vectors:\n";
    for (int i = 0; i < length; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
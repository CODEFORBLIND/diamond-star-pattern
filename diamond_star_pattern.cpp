#include <bits/stdc++.h>
using namespace std;

// Function to print the upwards pyramid
void upwards_pyramid(int N) {
    int count = N - 1; // Variable to manage spaces before stars
    for (int i = 1; i < N * 2; i++) {
        if (i % 2 == 0) {
            continue; // Skip even rows
        } else {
            // Print spaces
            for (int k = 0; k <= count; k++) {
                cout << " ";
            }
            // Print stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        count--; // Decrease the space count for the next row
        cout << endl; // Move to the next line
    }
}

// Function to print the downwards pyramid
void downwards_pyramid(int N) {
    int count = 0; // Variable to manage spaces before stars
    for (int i = N * 2; i >= 1; i--) {
        if (i % 2 == 0) {
            continue; // Skip even rows
        } else {
            // Print spaces
            for (int k = 0; k <= count; k++) {
                cout << " ";
            }
            // Print stars
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        count++; // Increase the space count for the next row
        cout << endl; // Move to the next line
    }
}

int main() {
    int N;
    cout << "Enter the value of N (size of the pyramid): ";
    cin >> N; // Taking input from the user for the pyramid size

    // Call the functions to print the pattern
    upwards_pyramid(N);
    downwards_pyramid(N);

    return 0;
}

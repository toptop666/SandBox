#include <iostream>
#include <chrono>
#include <thread> // for sleep
#include <iomanip> // for time formatting

using namespace std;
using namespace std::chrono;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to simulate progress bar
void progress_bar(int steps) {
    for (int i = 0; i <= steps; ++i) {
        int width = 50;
        float progress = (float)i / steps;
        int pos = width * progress;

        cout << "[";
        for (int j = 0; j < width; ++j) {
            if (j < pos) cout << "=";
            else if (j == pos) cout << ">";
            else cout << " ";
        }
        cout << "] " << int(progress * 100.0) << " %\r";
        cout.flush();
        // this_thread::sleep_for(milliseconds(50)); // simulate progress time
    }
    cout << endl;
}

int main() {
    int num1, num2;
    
    // Input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Start time measurement
    auto start_time = high_resolution_clock::now();

    // Simulate progress bar (to give a TQDM-like feel)
    cout << "Calculating GCD... Please wait.\n";
    progress_bar(100);
    
    // Calculate GCD
    int result = gcd(num1, num2);

    // End time measurement
    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end_time - start_time);

    // Print the result and time taken
    cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    cout << "Time taken: " << duration.count() << " milliseconds" << endl;

    return 0;
}

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate two random numbers between 0 and 500
    int num1 = rand() % 500;
    int num2 = rand() % 500;

    // Display the two random numbers to be added
    cout << "Solve the following problem:" << endl;
    cout << num1 << " + " << num2 << " = ?" << endl;

    // Pause for the student to work on the problem
    cout << "Press any key to see the correct answer..." << endl;
    cin.get();  // Wait for the user to press a key

    // Calculate and display the correct answer
    int correctAnswer = num1 + num2;
    cout << num1 << " + " << num2 << " = " << correctAnswer << endl;

    return 0;
}
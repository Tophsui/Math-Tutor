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

    // Get the student's answer
    int studentAnswer;
    cout << "Enter your answer: ";
    cin >> studentAnswer;

    // Calculate the correct answer
    int correctAnswer = num1 + num2;

    // Display the correct answer and check if the student's answer is correct
    cout << num1 << " + " << num2 << " = " << correctAnswer << endl;
    if (studentAnswer == correctAnswer) {
        cout << "You are correct!" << endl;
    }
    else {
        cout << "Your answer is not correct." << endl;
    }

    return 0;
}
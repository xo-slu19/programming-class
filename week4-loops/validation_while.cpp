cpp
// ============================================================
// ACTIVITY 3A: INPUT VALIDATION WITH WHILE LOOP
// Learning Outcome: Evaluate while vs do-while for validation
// ============================================================

// Include the input/output library
#include <iostream>


// Use the standard namespace
using namespace std;

// The main function
int main() {

// Declare an integer variable to store the user's input
int number;

// Display a prompt asking for a positive number
cout << "Enter a positive number: ";

// Read the first input from the user BEFORE the loop
// This is necessary because the while loop checks the condition first
cin >> number;

// While loop: checks condition BEFORE executing the body
// If the user entered a valid number (positive), the loop never runs
// If the user entered an invalid number, the loop repeats
while (number <= 0) {

// Display an error message
cout << "Invalid! Please enter a positive number: ";

// Read a new input from the user

cin >> number;

} // End of while loop - condition is re-checked

// This line runs only when a valid number is entered
cout << "You entered: " << number << endl;

// Return 0 to signal successful completion
return 0;
}

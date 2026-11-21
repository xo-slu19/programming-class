c
// ============================================================
// ACTIVITY 3B: INPUT VALIDATION WITH DO-WHILE LOOP (C VERSION)
// Learning Outcome: Evaluate while vs do-while for validation
// ============================================================


// Include the standard input/output library
#include <stdio.h>

// The main function
int main() {

// Declare an integer variable to store the user's input
// We initialise it to 0 so the do-while loop will run at least once
int number = 0;

// do-while loop: executes the body FIRST, then checks the condition
// This guarantees the body runs at least once
do {

// Display a prompt asking for a positive number
printf("Enter a positive number: ");

// Read the input from the user
scanf("%d", &number);

// Check if the input is invalid and display an error
if (number <= 0) {
printf("Invalid! ");
}

} while (number <= 0); // Condition checked AFTER the body runs

// This line runs only when a valid number is entered
printf("You entered: %d\n", number);

// Return 0 to signal successful completion
  return 0;
}
return 0;
}

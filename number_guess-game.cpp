#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. One variable to store the chosen number
    int chosenNumber = 7;
    
    // 2. Another variable to store the user's input
    int userGuess = 0;
    
    // 3. An empty list (vector) to keep all numbers entered by the user
    vector<int> guessHistory;

    cout << "--- Number Guessing Game ---" << endl;

    // Use a while loop that continues as long as the guess is not equal to the chosen number
    while (userGuess != chosenNumber) {
        // Ask the user to enter a number
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Immediately save the value into the array/list
        guessHistory.push_back(userGuess);

        // Use if/else statements to compare the guess
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct!" << endl;
        }
    }

    // After the loop finishes, use a for loop to display all guesses
    cout << "\nYour guess history:" << endl;
    for (int i = 0; i < guessHistory.size(); i++) {
        cout << "Attempt " << i + 1 << ": " << guessHistory[i] << endl;
    }

    return 0;
}

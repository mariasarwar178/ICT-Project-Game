#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  
    int number = rand() % 100 + 1; 
    string guess;

    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Is it odd or even? (Enter 'odd' or 'even'): ";
    cin >> guess;

    if ((number % 2 == 0 && guess == "even") || (number % 2 != 0 && guess == "odd")) {
        cout << "Correct! The number was " << number << "." << endl;
    } else {
        cout << "Wrong! The number was " << number << "." << endl;
    }

    return 0;
}

#include <iostream>
#include <string>  // Include this to use string functions
using namespace std;

int main() {
    string tea;
    float price = 10.25;
    float rating;
    string feed;
    float modifiedPrice;
    

    // Prompt user for tea order
    cout << "What would you like to order, sir? " << endl;
    getline(cin, tea);  // Use getline to allow multi-word input
    cout << "You have ordered: " << tea << endl;

    // Show the initial price
    cout << "Price of this " << tea << " is: $" << price << endl;

    // Ask for feedback
    cout << "How was your experience (good/bad)? " << endl;
    getline(cin, feed);

    // Ask for rating (let's assume it as a float for fractional ratings)
    cout << "Please rate the tea on a scale of 1 to 10: " << endl;
    cin >> rating;

    // Ask for expected price
    cout << "What is your price expectation, sir? " << endl;
    cin >> modifiedPrice;

    // Adjust price based on user's expectation
    if (modifiedPrice <= price) {
        // If the modified price is lower or equal, we add 10% extra charge
        price = modifiedPrice+modifiedPrice * 0.10;
        cout << "Price has been increased by 10%. " << endl;
    } else {
        // Otherwise, set price to the user's desired price
        price = modifiedPrice;
    }

    // Final output
    cout << "Here is your " << tea << " at your desired price: $" << price << "!" << endl;
    cout << "Thank you for the feedback: " << feed << " and rating of " << rating << "!" << endl;

    return 0;
}

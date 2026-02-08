// COMSC-210 | Lab 3 | Gillian Rhett

#include <iostream>
#include <string>

using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisine;
    int year;
    char rating;
};

// function prototypes
Restaurant newRestaurant(); // attributes are set by user input
void printRestaurant(Restaurant); // displays the Restaurant's attributes

int main() {
    Restaurant r = newRestaurant();
    printRestaurant(r);
    return 0;
}

Restaurant newRestaurant() {
    Restaurant newR;
    cout << "Enter restaurant name: ";
    getline(cin, newR.name);

    cout << "Enter address: ";
    getline(cin, newR.address);

    cout << "Enter type of cuisine: ";
    getline(cin, newR.cuisine);

    cout << "Enter year opened: ";
    cin >> newR.year; // TODO input validation

    cout << "Enter rating (A-F): ";
    cin >> newR.rating; // TODO input validation

    return newR;
}

void printRestaurant(Restaurant rst) {
    cout << "\n=== Restaurant Information ===" << endl;
    cout << "Name: " << rst.name << endl;
    cout << "Address: " << rst.address << endl;
    cout << "Cuisine: " << rst.cuisine << endl;
    cout << "Year opened: " << rst.year << endl;
    cout << "Rating: " << rst.rating << endl;
    cout << "==============================";
}
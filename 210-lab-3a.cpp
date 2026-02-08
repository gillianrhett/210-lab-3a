// COMSC-210 | Lab 3 | Gillian Rhett

#include <iostream>
#include <string>
#include <ctime>

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
    // input validation
    time_t now = time(0);
    tm* local = localtime(&now);
    int currYear = local->tm_year + 1900;
    int yearIn = 0;
    while (!(0 < yearIn && yearIn <= currYear)){
        cin >> yearIn;
        if (!(0 < yearIn && yearIn <= currYear))
            cout << "Enter a valid year greater than 0 and no later than this year: ";
    }

    cout << "Enter rating (A-F): ";
    // input validation
    char charIn = 'Z';
    while (!(65 <= charIn && charIn <= 70)){
        cin >> charIn;
        if (!(65 <= charIn && charIn <= 70))
            cout << "rating must be a character A, B, C, D, E, F: ";
    }
    newR.rating = charIn;

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
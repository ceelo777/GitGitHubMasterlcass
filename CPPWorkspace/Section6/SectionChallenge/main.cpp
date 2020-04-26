#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Chris' carpet cleaning service!" << endl;
    cout << "How many large rooms would you like cleaned?" << endl;
    int large_rooms {0};
    cin >> large_rooms;
    cout << "How many small rooms would you like cleaned?" << endl;
    int small_rooms {0};
    cin >> small_rooms;
    
    const double price_per_small { 25.0 };
    const double price_per_large { 35.0 };
    const double sales_tax { 0.06 };
    const int estimate_expiry { 30 }; // days
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << price_per_small << endl;
    cout << "Price per large room: $" << price_per_large << endl;
    cout << "Cost: $" << (small_rooms * price_per_small + large_rooms * price_per_large) << endl;
    cout << "Tax: $" << (small_rooms * price_per_small + large_rooms * price_per_large) * sales_tax << endl;
    cout << "====================================" << endl;
    cout << "Total Estimate: $" << (small_rooms * price_per_small + large_rooms * price_per_large) * (1 + sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
}
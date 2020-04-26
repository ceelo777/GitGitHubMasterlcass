#include <iostream>
#include <climits>

using namespace std;

int main() {
    
    cout << "sizeof information" << endl;
    cout << "========================" << endl;
    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    cout << "========================" << endl;
    cout << "long min: " << LONG_MIN << endl;
    cout << "short max: " << SHRT_MAX << endl;
    
    cout << "========================" << endl;
    int age {21};
    cout << "age is " << sizeof age << " bytes" << endl;
    
    double wage { 22.24 };
    cout << "wage is " << sizeof wage << " bytes" << endl;
    
}
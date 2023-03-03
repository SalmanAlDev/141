// this program uses the iostream library for input and output
#include <iostream>

// this program uses the namespace std for input and output
using namespace std;

// the main function is where program execution begins
int main(){

/*double C;
double F;
double tmp;

cout << "Enter temperature value: ";
cin >> tmp;

cout << "Enter temperature type: "*/

// values
    double temp, F, C;

// Letters
    char type;

// prompt output
    cout << "Enter temperature value: ";
// prompt input
    cin >> temp;

// prompt output
    cout << "Enter temperature type: ";
// prompt input
    cin >> type;

// if statement 
    if (type == 'C') {
// initializing the variable
        F = (temp * 9/5) + 32;
// output
        cout << "The " << temp << " Celsius is equivalent to " << F << " Fahrenheit";
    }
	if (type == 'F'){
// initializing the variable
        C = (temp - 32) * 5/9;
// output
        cout << "The " << temp << " Fahrenheit is equivalent to " << C << " Celsius";
    }

// return 0 indicates successful program execution
    return 0;
}


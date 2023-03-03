// this program uses the iostream library for input and output
#include <iostream>

// this program uses the namespace std for input and output
using namespace std;

// the main function is where program execution begins
int main() {
// declaring the variables
    float inheritance, wife, son, son_all, daughter, daughter_all;
    
// declaring and initializing the variables
    int num_sons = 3, num_daughters = 6;

// prompt output
    cout << "Enter the inheritance value: ";
// prompt input
    cin >> inheritance;

// calculating wife inheritance
    wife = inheritance * 0.125;

//    son = (7 * inheritance) / 16 / num_sons;
//    daughter_share = (inheritance - wife_share - (2 * son_share * num_sons)) / num_daughters;


// calculating the remanence of the inheritance
	inheritance = inheritance - wife;
// calculating the inheritance of all the sons
	son_all = inheritance / 2;
// calculating the inheritance of all the daughters
	daughter_all = inheritance / 2;
// calculating the inheritance of each son
	son = son_all / 3;
// calculating the inheritance of each daughter
	daughter = daughter_all /6;
	
// output the wife share
    cout << "The wife share is: " << wife << endl;
// output the share of each son 
    cout << "The share of each son is: " << son << endl;
// output the total share of sons
    cout << "The total share of sons is: " << son_all << endl;
// output the share of each daughter
    cout << "The share of each daughter is: " << daughter << endl;
// output the total share of daughters is
    cout << "The total share of daughters is: " << daughter_all<< endl;


// return 0 indicates successful program execution
    return 0;
}




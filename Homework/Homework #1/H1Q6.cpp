// this program uses the iostream library for input and output
#include <iostream>

// this program uses the namespace std for input and output
using namespace std;

// the main function is where program execution begins
int main(){
// declaring the variables
	float gpa;
// prompt output
	cout <<"Enter GPA: ";
// prompt input
	cin >> gpa;
// if satement
	if (gpa > 4 || gpa < 1){

// output
		cout << "Unknown GPA, exiting program...";}
// else satement
	 else if (gpa == 4){

// output A
		cout <<"your grade is A";} 
// else satement
	else if (gpa >= 3.67){

// output A-
		cout <<"your grade is A-";} 
// else satement
	else if (gpa >= 3.33){
	
// output B+
		cout <<"your grade is B+";} 
// else satement
	else if (gpa >= 3.0){
	
// output B
		cout <<"your grade is B";}
// else satement
	 else if (gpa >= 2.63){

// output B-
		cout <<"your grade is B-";} 
// else satement
	else if (gpa >= 2.33){

// output C+
		cout <<"your grade is C+";} 
// else satement
	else if (gpa >= 2.0){

// output C
		cout <<"your grade is C";}
// else satement
	else if (gpa >= 1.67){
// output C-
		cout <<"your grade is C-";}  
// else satement
	else if (gpa >= 1.33){

// output D+
		cout <<"your grade is D+";} 
// else satement
	else{
		
		cout <<"your grade is D-";
		
	} 

// return 0 indicates successful program execution
	return 0;
}

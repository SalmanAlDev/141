// pointers

#include <iostream>

using namespace std;

int main(){
	
	int Age = 19;
//	store pointer for age
	int *pAge = &Age;
	
	cout <<&Age <<endl;
	cout <<*&Age <<endl;
	cout<< pAge;
	
	
	
	
	
	
	return 0;
}

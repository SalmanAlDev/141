#include <iostream>

using namespace std;

int main(){
	double n1, n2;
	char opt;
	
	cout <<"1) Compute Rectangle Area"<<endl;
	cout <<"2) Compute Triangle Area"<<endl;
	cout <<"3) Compute Circle Area"<<endl;
	cout <<"E) Exit"<<endl;
	
	cout <<"Select option: ";
	cin >> opt;
	
	while (opt != 'E' || opt != 'e'){
	
		switch(opt){
	
	
		case '1':
			cout<<"Enter the length of the rectangle: ";
			cin>>n1;
			cout<<"Enter the width of the rectangle: ";
			cin>>n2;
		
			cout <<"The area of the rectangle is: "<< n1 *2;
			break;
		case '2':
			cout<<"Enter the base: ";
			cin>>n1;
			cout<<"Enter the height: ";
			cin>>n2;
		
			cout <<"The area of the triangle is: "<< (n1 *n2)/2;
			break;
		case '3':
			cout<<"Enter the radius : ";
			cin>>n1;
		
		
			cout <<"The area of the circle is: "<< (3.14 *n1*n1);
			break;
		case 'E':
			break;
	
}
}
	cout <<"";	

	return 0;
}

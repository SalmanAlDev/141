// switch

#include <iostream>

using namespace std;

int main(){
	int daynum;
	string dayname;
	
	cout <<"Enter Day Number";
	cin >> daynum;
	
	switch(daynum){
		case 0:
			dayname = "Sunday";
			break;
			
		case 1:
			dayname ="Monday";
			break;
			
		case 2:
			dayname ="Tuesday";
			break;
		
		case 3:
			dayname ="Wednesday";
			break;
		
		case 4:
			dayname ="Thursday";
			break;
		
		case 5:
			dayname ="Friday";
			break;
		
		case 6:
			dayname ="Saturday";
			break;
		
		default:
//			dayname ="invalid Day Number";
			cout << "invalid Day Number";
	}
	
	
	
	cout <<dayname;
	
	
	return 0;
}

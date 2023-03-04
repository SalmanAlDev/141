#include <iosstream>

using namespace std;

int main(){
    int i, num1, num2;
    char o;

    while(i = -1){
        cout <<"1) Compute Rectangle Area\n";
        cout <<"2) Compute Triangle Area\n";
        cout <<"3) Compute Circle Area\n";
        cout <<"E) Exit\n";

        cout <<"Select option: ";
        cin >>o;

        switch(i){
            case '1':
                cout <<"Enter the length of the rectangle: "<<endl;
                cin <<num1;
                
                cout <<"Enter the width of the rectangle: "<<endl;
                cin >>num2;

                cout <<"The area of the rectangle is: " <<num1 * num2;



            break;

            case '2':



            break;

            case '3':



            break;

            case 'E' ||'e':



            break;



        }
    }




    return 0;
}
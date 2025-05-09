#include <iostream>
using namespace std;

int main()
{

    int i;
    int input;

    cout << "Please enter the number of rows : " << endl;
    cin >> input;

    int number_of_stars = input;
    int number_of_stars_temp = input;

    for (i = 0; i <= input; i++) {
        number_of_stars = input;
        while (number_of_stars != i) {
            cout << "*";
            number_of_stars = number_of_stars -1;
        }
        
        cout << " " << endl;


    }

    
}
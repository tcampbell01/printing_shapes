#include <iostream>
using namespace std;

int main() {

    int input;
    int i;
    int number_of_stars = 0;

    cout << "Please enter the number of rows:" << endl;
    cin >> input;

    for (i = 1; i <= input; i++) {
        number_of_stars = 0;
        while (number_of_stars != i) { 
            cout << "*"; 
            number_of_stars = number_of_stars + 1;

        }
        cout << " " << endl;
    }

    return 0;
}
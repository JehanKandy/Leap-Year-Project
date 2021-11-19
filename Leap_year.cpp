#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter Year : ";
    cin >> year;

    if (year % 4 == 0){
        cout << "Leap Year";
    }else{
        cout << "Not a Leap year";
    }

}

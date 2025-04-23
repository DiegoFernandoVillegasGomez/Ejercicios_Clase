#include <iostream>
using namespace std;

int main()
{
    int Grade;
    cout << "Enter a grade from 1 to 100 to see your performance" << endl;
    cin >> Grade;
    
    if (Grade >= 95 && grade <= 100) {
        cout << "Excellent grade, keep it up" << endl;
    }
    else if (Grade >= 85 && grade <= 94) {
        cout << "Very good grade, keep going" << endl;
    }
    else if (Grade >= 75 && grade <= 84) {
        cout << "You passed, keep moving forward" << endl;
    }
    else if (Grade >= 60 && grade <= 74) {
        cout << "You passed, next time you'll do even better" << endl;
    }
    else if (Grade >= 50 && grade <= 59) {
        cout << "You barely passed, put in more effort next time" << endl;
    }
    else if (Grade >= 0 && grade <= 49) {
        cout << "You failed, but next time will be better" << endl;
    }
    else {
        cout << "You entered a number greater than 100" << endl;
    }

    return 0;
}

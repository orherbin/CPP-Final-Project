/*
 Or Herbin 206092835
 Omri Milo 206093833
 */

#include <iostream>

using namespace std;

int checkNumber(int num);

int main() {

    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << checkNumber(number);
    return 0;
}

int checkNumber(int num) {

    int res=0;
    if(num>=1 && num<=9){
        if(num%10%3 == 0)
            return res +1;
        return res;
    }
    if ((num % 10) % 3 == 0) {
        return 1 + checkNumber(num / 10);
    } else
        return 0 + checkNumber(num / 10);
}
/*
 Or Herbin 206092835
 Omri Milo 206093833
 */

#include <iostream>

using namespace std;

int sumArray(int arr[], int n);

int main() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
    cout << sumArray(array, 10);

    return 0;

}

int sumArray(int arr[], int n) {
    if (n == 1 && n % 2 == 0) {
        return arr[0];
    }
    if (n == 1 && n % 2 != 0) {
        return 0;
    }
    int evenNumbers = sumArray(arr, n - 1);
    if (arr[n - 1] % 2 == 0) {
        evenNumbers += arr[n - 1];
    }
    return  evenNumbers;
}
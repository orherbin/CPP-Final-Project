/*
 Or Herbin 206092835
 Omri Milo 206093833
 */

#include <iostream>

using namespace std;

#define SIZE 12

void bubbleSort(int array[], int size);

void arrayPrint(int array[4][3], int size);


int main() {

    int array1[4][3];
    cout << "Please enter a 4:3 array: ";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array1[i][j];
        }
    }

    int array1_1D[12];
    int index = 0;

    //Converting the 2D array to a 1D array, copying all of the 2D array elements to the 1D.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            array1_1D[index++] = array1[i][j];
        }
    }

    //Bubble sorting the new 1D array.
    bubbleSort(array1_1D, 12);

    //Inserting the new sorted values to the original 2D array.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            array1[i][j] = array1_1D[index++];
        }
    }

    cout << "The array is: " << endl;
    arrayPrint(array1, 4);
    cout << endl;

//-------------------------END of Array 1--------Switching to array 2--------------------------------------------------

    int array2[4][3];
    cout << "Please enter a 4:3 array: ";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array2[i][j];
        }
    }

    int array2_1D[12];
    int index2 = 0;

    //Converting the 2D array to a 1D array, copying all of the 2D array elements to the 1D.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            array2_1D[index2++] = array2[i][j];
        }
    }

    //Bubble sorting the new 1D array.
    bubbleSort(array2_1D, 12);

    //Inserting the new sorted values to the original 2D array.
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            array2[i][j] = array2_1D[index2++];
        }
    }

    cout << "The array is: " << endl;
    arrayPrint(array2, 4);
    cout << endl;

    //-------------------------END of Array 2--------Switching to check permutation------------------------------------

    int counter = 0;
    for (int i = 0; i < SIZE; i++) {
        if (array1_1D[i] == array2_1D[i]) {
            counter++;
        }
    }
    if (counter == SIZE) {
        return 1;
    } else return 0;
}

//---------------------------------------End of main---------------------------------------------------------------

void bubbleSort(int array[], int size) {

    //Function for bubble sorting the 1D array.
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void arrayPrint(int array[4][3], int size) {

    //Function for printing the array.
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            cout << array[i][j] << " ";
        }
    }
}
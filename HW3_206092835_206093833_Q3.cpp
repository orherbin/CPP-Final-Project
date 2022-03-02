/*
 Or Herbin 206092835
 Omri Milo 206093833
*/

#include <iostream>

using namespace std;

void PigLatin(char input[], char output[]);

void BLanguage(char input[], char output[]);

void printMenu();

void bye();

int main() {

    bool userIn = true;
    int num;
    char input[100];
    char output[255];
    int select = 1;

    while (userIn) {

        cout << endl;
        printMenu();
        cout << "\nEnter number for the desired function:" << endl;
        cin >> num;

        if (num >= 1 && num <= 3) {
            switch (num) {
                case 1:
                    PigLatin(input, output);
                    break;
                case 2:
                    BLanguage(input, output);
                    break;
                case 3:
                    userIn = false;
                    bye();
                    break;
            }
        } else cout << "Illegal input, please try again." << endl;
    }


    return 0;
}

void BLanguage(char input[], char output[]) {

    int inputIndex = 0;
    int outputIndex = 0;
    char a;

    cout << "Please enter a sentence \n";
    cin.ignore();
    cin.getline(input, 100);
    cout << endl;

    // Checking if it's not the end of the sentence.
    while (input[inputIndex] != '.') {

        a = input[inputIndex];
        output[outputIndex++] = a;

        // if current input index is a vowel, placing 'b' after it and than the vowel.
        if (a == 'a' || a == 'o' || a == 'i' || a == 'u' || a == 'e') {
            output[outputIndex++] = 'b';
            output[outputIndex++] = a;
        }
        // promote input index
        ++inputIndex;
    }
    output[outputIndex++] = '.';
    output[outputIndex++] = '\0';
    cout << "The new sentence after translation =  " << output << endl << endl;
}

void PigLatin(char input[], char output[]) {

    int inputIndex = 0;
    int outputIndex = 0;
    char a;

    cout << "Please enter a sentence \n";
    cin.ignore();
    cin.getline(input, 100);
    cout << endl;

    // Checking until the end of the sentence.
    while (input[inputIndex] != '\0') {

        a = input[inputIndex];
        if (a == ' ') {
            inputIndex++;
        }
        // Checking if the word starts with a vowel.
        if (a == 'a' || a == 'o' || a == 'i' || a == 'u' || a == 'e') {
            while (input[inputIndex] != ' ' && input[inputIndex] != '.') {
                output[outputIndex++] = input[inputIndex++];
            }
            output[outputIndex++] = 'w';
            output[outputIndex++] = 'a';
            output[outputIndex++] = 'y';
            if (input[inputIndex] == ' ') {
                output[outputIndex++] = ' ';
            }
        } else {

            char arr[100];
            int arrIndex = 0;

            // Checking if the word starts with consonant.
            while (a != 'a' && a != 'o' && a != 'i' && a != 'u' && a != 'e' && a != '.' && a != ' ') {
                arr[arrIndex++] = input[inputIndex++];
                a = input[inputIndex];
            }

            arr[arrIndex] = '\0';
            arrIndex = 0;

            // placing input in output until hte end of the word or sentence.
            while (input[inputIndex] != ' ' && input[inputIndex] != '.') {
                output[outputIndex++] = input[inputIndex++];
            }
            //concatenate arr to output.
            while (arr[arrIndex] != '\0') {
                output[outputIndex++] = arr[arrIndex++];
            }

            arr[0] = '\0';

            //concatenate "ay" after arr was concatenated.
            output[outputIndex++] = 'a';
            output[outputIndex++] = 'y';

            if (input[inputIndex] == ' ') {
                output[outputIndex++] = ' ';
            }
        }
        inputIndex++;
    }
    output[outputIndex++] = '.';
    output[outputIndex++] = '\0';
    cout << "The new sentence after translation = " << output << endl << endl;
}

void printMenu() {
    cout << "1. Pig-Latin" << endl << "2. B-Language" << endl
         << "3. Exit" << endl;
    return;
}

void bye() {
    cout << "\nGood Bye!" << endl;
}

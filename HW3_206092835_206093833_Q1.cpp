/*
 Or Herbin 206092835
 Omri Milo 206093833
 */

#include <iostream>

using namespace std;

int mystr(char s[], char t[]);

int main() {

    char s[] = "aaaaa";
    char t[] = "a";

    //cout << "Enter a string: ";
    //cin >> s;
    //cout << "Enter a second string: ";
    //cin >> t;

    cout << mystr(s, t);

}

int mystr(char s[], char t[]) {

    int counter = 0;
    int answer = 0;

    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < strlen(t); j++) {
            if (s[j] == t[j]) {
                counter++;
            }
            if (counter == strlen(t)) {
                answer++;
            }
        }
        counter = 0;
    }
    return answer;
}
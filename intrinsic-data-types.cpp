#include <iostream>

using namespace std;

void printChars(int start, int end, char* word) {
    cout << "[" << end - start << "] ";
    while(start != end) {
        cout << word[start];
        start++;
    }
    cout << endl;
}

int main () {
    // Q1.
    /*
    enum {RED, YELLOW, AMBER=YELLOW, GREEN};
  cout << RED << YELLOW << AMBER << GREEN << endl;  
    */

    // Q2.
    /*    
    int var1 = 5;
    int* var2 = &var1;
    ++*var2;
    int& var3 = var1;
    ++var3;
    
    cout << var1 << endl;

    const int var4 = 123;
    // var4 = 200; // throws error: assignment of read-only variable ‘var4’
    //
    float dec1 = 0xf3f2;
    float dec2 = 0437;
    float dec3 = 'a';


    cout << "dec1: " << dec1 << endl;
    cout << "dec2: " << dec2 << endl;
    cout << "dec3: " << dec3 << endl;
    */

    // Q3.
    /*
    char word[50];
    int word_size;

    cout << "Enter word: ";
    cin >> word;

    int start = 0;
    int end = 0;

    word_size = sizeof(word)/sizeof(word[0]);
    for (int i = 0; i < word_size; i++) {
        if (word[i] == '-') {
            end = i;
            printChars(start, end, word);
            start = i + 1; 
        }
        else if (word[i] == '\0') {
            end = i;
            break;
        }
    }
    // print last words
    printChars(start, end, word);  
*/
    // Q4., Q5 
    
    /*
    // typedef string ten_strings[10];
    using ten_strings = string[10];

    ten_strings words;
    for (int i = 0; i < 10; i++) {
        cout << "Enter string: ";
        cin >> words[i]; 
    }

    string largest = words[0];


    for(int i = 1; i < 10; i++) {
        if (largest.length() < words[i].length())
            largest = words[i];
    }

    cout << "Largest: " << largest << endl;
    */

    // Optional Questions
    string board[3][3]; // 3x3 matrice
    /* 00 01 02
     * 10 11 12
     * 20 21 22
     */
    
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = "?";
        }
    }

    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
              cout << board[i][j] <<  " ";
        }
        cout << endl;
    }





























    return 0;
}

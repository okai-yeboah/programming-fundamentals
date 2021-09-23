#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main () {
    // Q1.
    // cout << "Okai Yeboah" << endl;
    
    // Q2. 
    /*
    int numbers[5];
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);
    
    map<string, int> numbers_with_occurrence;

    for (int i = 0; i < numbers_size; i++) {
        cout << "Please enter number: ";
        cin >> numbers[i];
        
        string key = to_string(numbers[i]);
        // increase number count if already exist, otherwise assign 1
        if (numbers_with_occurrence.find(key) != numbers_with_occurrence.end())
            numbers_with_occurrence[key] = numbers_with_occurrence[key] + 1;
        else
            numbers_with_occurrence[key] = 1;
    }

    // find mean 
    int sum = 0;
    for (int i = 0; i < numbers_size; i++) sum += numbers[i];

    double mean = sum / numbers_size;
    cout << "Mean: " << mean << endl;

    // find mode
    map<string, int>::iterator it;
    int mod_freq = -1;
    string mode;

    for(it = numbers_with_occurrence.begin(); it != numbers_with_occurrence.end(); it++) {
        if (it->second > mod_freq) {
            mode = it->first;
            mod_freq = it->second;
        }
        else if (it->second == mod_freq) mode += " " + it->first;
    }
        
    cout << "Mode: " << mode << endl;

    // find median
    sort(numbers, numbers + numbers_size);
    int half_numbers_size = numbers_size / 2;
    cout << "Median: " << numbers[half_numbers_size] << endl;
    */

    // Q3.
    
    int num;
    cout << "Please enter a number: ";
    cin >> num;

    if (num % 2 == 0 ) {
        int counter =  1;

        while (counter <= 20) {
            cout << counter << " x " << 2 << " = " << counter * 2 << endl;
            counter++;
        }
    }
    else {
        int counter = 1;
        int dividend = 1;

        while(counter <= 30)  {
            if (dividend % num != 0) { 
                cout << dividend << endl;
                counter++;
            }
            dividend++;
        }
    }
        

    return 0;
}

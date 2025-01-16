#include <iostream>
#include <string>
using namespace std;

int* countFrequency(string str) {
    int* frequency = new int[26](); 
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            frequency[str[i] - 'A']++; 
        }
    }
    return frequency; 
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]); 
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    cout << "The converted string is: " << str << endl;

    int* newfrequency = countFrequency(str);

    cout << "\nCharacter frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (newfrequency[i] > 0) { 
            cout << char(i + 'a') << " : " << newfrequency[i] << endl;
        }
    }

    delete[] newfrequency;

    cout << endl;
    system("pause");
    return 0;
}

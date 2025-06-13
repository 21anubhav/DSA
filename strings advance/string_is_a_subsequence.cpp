#include <iostream>
using namespace std;

bool issubseq(string s1, string s2) {
    int j = 0;
    for (int i = 0; i < s1.length() && j < s2.length(); i++) {
        if (s1[i] == s2[j])
            j++;
    }
    return j == s2.length();
}

int main() {
    string s1, s2;

    // Ask user for input
    cout << "Enter the main string (s1): ";
    cin >> s1;

    cout << "Enter the subsequence to check (s2): ";
    cin >> s2;

    cout << boolalpha;
    if (issubseq(s1, s2)) {
        cout << "Yes, \"" << s2 << "\" is a subsequence of \"" << s1 << "\"." << endl;
    } else {
        cout << "No, \"" << s2 << "\" is NOT a subsequence of \"" << s1 << "\"." << endl;
    }

    return 0;
}

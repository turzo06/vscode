#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);
}

string removeChars(string str, int n) {
    // remove n characters from both the start and end
    str.erase(0, n);
    str.erase(str.size() - n);
    return str;
}

int main() {
    string s;
    cin >> s;

    // check if the string is already a palindrome
    if (isPalindrome(s)) {
        cout << "YES" << endl;
        return 0;
    }

    // check if it is possible to make the string a palindrome by removing 3 characters at once
    for (int i = 0; i <= 3; i++) {
        string temp = removeChars(s, i);
        if (isPalindrome(temp)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    // if neither condition is met
    cout << "NO" << endl;
    return 0;
}

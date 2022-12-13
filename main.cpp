#include <iostream>
#include <string>
#include <algorithm>
#include <exception>

using namespace std;


bool Palindrome(string str) {

//only one letter is palindrome
    if(str.empty() || str.length() == 1) {
        return true;
    }

//check if first and last characters are the same
   if (str[0] == str[str.length() - 1]) {
    return Palindrome(str.substr(1, str.length() - 2));
   }
else {
    return false;
}
}

int main() {
    string str;

try {
    cout << "Enter a Palindrome: ";
    cin >> str;

    if(str.empty())
        throw runtime_error("ERROR. Empty input.");

    if(Palindrome(str))
        cout << str << ", is a palindrome" << endl;
    else
        cout << str << ", is not a palindrome" << endl;
}
catch(const char* msg) {
    cout << msg << endl;
}
return 0;

}

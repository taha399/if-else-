//to cheak the charactder enter by the user is vovle or not
#include <iostream>
using namespace std;

int main() {
    char ch;

   
    cout << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        cout << ch << " is a vowel." << endl;
        else
        cout << "Your charachter is CONSTANT." << endl;
    

    return 0;
}


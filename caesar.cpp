// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 6B
// Write a program caesar.cpp with functions implementing Caesar cipher encryption:
// A helper function to shift one character by rshift
// char shiftChar(char c, int rshift);
// Caesar cipher encryption
// string encryptCaesar(string plaintext, int rshift);
// The argument rshift is the magnitude of the right shift. 
// For the sake of the lab, you may assume it to be in the range 0 ≤ rshift ≤ 25 
// (although, implementing it correctly for an arbitrary integer shift is also possible, of course).

#include <iostream>
#include <string>


using namespace std;

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
    if (isalpha(c)) {
        char base = islower(c) ? 'a' : 'A'; 
        return (c - base + rshift) % 26 + base; 
    }
    else {
        return c; 
    }
}

// Caesar cipher encryption
string encryptCaesar(string plaintext, int rshift){
    string text = "";
    for (char c : plaintext) {
        text += shiftChar(c, rshift); 
    }
    return text;

}

int main(){
    int rshift;
    string plaintext;

    cout << "Enter plaintext: ";
    getline(cin , plaintext);

    cout << "Enter shift    : ";
    cin >> rshift;


    cout << "Ciphertext     : " << encryptCaesar(plaintext, rshift) << endl;


}
// Topic: Writing to a file
// Opens a file through the ofstream constructor and writes a string to it.
// Note: Overwrites sample.txt. Run 01 or restore the file afterwards.

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("output.txt"); // Write operation
    out<<st;

    return 0;
}

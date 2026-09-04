#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // alternative way to open a file without suing constructor
    ofstream out;
    out.open("Sample2.txt");
    out << "This is Abhay" << endl;
    out << "This is not my fault" << endl;
    out << "Does this even work?";
    out.close();

    ifstream in;
    string st;
    in.open("Sample2.txt");
    /*Ways to print:
    1) print only 1 word
        in>>st
    2) print one line
        getline(in,st);*/

    // using eof() we can keep printing the file till it ends
    // eof ---> end of file

    //in.eof() == 0 means 'the end of the file has not been reached'
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}
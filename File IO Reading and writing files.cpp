#include<iostream>
#include<fstream> // used to read and write files

/*
useful classes to use files 
1) fstreambase
2. ifstream --> Read from a file derived from fstreambase
3. ofstream --> write to a file derived from fstreambase
*/

/*
There are two waya to open a files
1) using a constructor
2) using the member function open() of the class
*/
using namespace std;

int main(){
    string st = "This is a new world";
    string st2;
    //opening files using constructors and writing in it
    ofstream out("Sample1.txt"); // write operatiom
    out<<st;
    out.close();

    //opening files using constructors and reading it
    ifstream in("Sample1.txt"); // Read operation 


    // in>>st2; //this mean ki jo bhi file mein hai woh data string st2 mein aa jaye
    // this gives only one word from the file... 
   
   
    // to get full sentence we need to use getline(in,the string you want to store it in ) function
    getline(in,st2);
    
    cout<<st2;



    return 0;
}
#include<iostream>
#include<fstream>

using namespace std;

int main(){

    //connecting our files with hout stream
    ofstream hout("Sample1.txt"); 
    string name;

    // creates a name string and fill the file by the string entered by the user
    cout<<"Enter your name :";
    cin>>name;

    //writing a string to the file
    hout<<name;

    hout.close(); // if we do not close the hout then the hin will not work 

    ifstream hin("Sample1.txt");
    string content;
    getline(hin,content);
    cout<<"The content of the file is: "<<content;

    hin.close();
    return 0;
}
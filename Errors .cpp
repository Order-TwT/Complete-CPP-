#include <iostream>
using namespace std;
int main(){

// Un-buffered Standard Error Stream - cerr
// cerr is the standard error stream used to display error messages. 
// It is an instance of the ostream class.
// It is an unbuffered output stream used to display error or warning messages immediately,
// ensuring they appear instantly without any buffering delays like cout

 cerr << "An error occurred"<<endl;


// Buffered Standard Error Stream - clog
// clog is the standard logging stream used to display error or log messages.
//  It is an instance of the ostream class, like cerr.
// Messages are first stored in a buffer and displayed only 
// when the buffer is full or explicitly flushed using flush() (Buffered output)
// Useful for logging messages that don’t need to appear immediately on the screen.
// Unlike cerr, output from clog may be delayed due to buffering.

 clog << "An error occurred";
    return 0;
}
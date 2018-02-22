//C++ READER
#include <iostream> 
#include <fstream> 
#include <string> 

#define Read
#ifndef Read 

using namespace std; 

class Read{ 
public: 

	void Read(ifstream & ostream);

	void Count(ifstream,  char fold); 

}

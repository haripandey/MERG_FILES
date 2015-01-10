#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <ctime>
#include <cerrno>
#include <unistd.h>
#include <glob.h>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
using namespace std;
int main(){ 
////////////////////////////////////////////////////////////////////////////////////
    std::cout<<std::endl;
////////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"**********************************"<<RESET;std::cout<<BOLDRED<<"**************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"***************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;

cout<<'\n';
    std::cout<<BOLDCYAN <<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;std::cout<<BOLDRED<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;std::cout<<BOLDWHITE<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET<<endl;
////////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"**********************************"<<RESET;std::cout<<BOLDRED<<"**************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"***************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;
cout<<'\n';
//////////////////////////////////////////////////////////////////////////////////
std::cout<<CYAN <<"                       नमस्ते! ई हरफ हरु पढ्नुस  "<<RESET<<endl<<'\n'; std::cout<<BOLDRED <<"        THIS PROGRAM WILL MERG YOUR  FILES IN TO A SINGLE FILE"<<RESET<<std::endl; cout<<endl;std::cout<<BOLDBLUE<<"    first answer will be as like (/home/user/Desktop/PARTS/*.extension)" <<RESET<<'\n';std::cout<<BOLDGREEN<<"           second answer is like (/home/user/Desktop/PARTS) "<<RESET<<std::endl;
    std::cout<<BOLDCYAN <<"**********************************"<<RESET;std::cout<<BOLDRED<<"**************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"***************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;

cout<<'\n';
int c;
std::string name ; 
std::string name1;
std::cout<<BOLDYELLOW<<"        What is path of directory which contain files to merg ? "<<RESET<<std::endl;
cin>>name;  
std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;
cout<<'\n';
glob_t gl;
size_t num = 0;
if(glob(name.c_str(), GLOB_NOSORT, NULL, &gl) == 0)
  num = gl.gl_pathc;
globfree(&gl);
cout <<BOLDYELLOW<< "        Counting file is successful! The number of files contained in that directory= "RESET << num << endl;
cout<<'\n';
std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;
cout<<'\n';
c=num;
std::cout<<BOLDYELLOW<<"               What is the path of directory ?"<<RESET<<std::endl;
cin>>name1;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;
cout<<'\n';
chdir(name1.c_str());

    ofstream out("merged.txt");
    string line;
    ifstream infile;
    for (int i=1; i<c; i++) {
        stringstream sstream;
        string hari_i;
        sstream <<i;
        sstream >> hari_i;
        string filename =  "part"  + hari_i  +".txt";
        ifstream infile( filename.c_str() );
        while (getline(infile, line)) {
            out << line<<endl;
        }
     }
     std::cout<<BOLDGREEN<<"    Congratulations ! file merging is successiful. Please find your merged file (merged.txt) in: ~/Desktop/MERGED  "<<RESET<<std::endl;
     cout<<'\n';
    return 0;
}

	

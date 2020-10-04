/*#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include"data.h"
using namespace std;
list <string> list1;
int main()
{
string line,word,temp;
ifstream myfile;
myfile.open("unemp.csv");
int row_count =0 ;
while(std::getline(myfile,line,'\n'))
{
    row_count +=1;
    std::stringstream  lineStream(line);
    std::string        cell;
    int column_count = 0 ;
    list1.push_back(line);
    //cout<<line<<endl;
}
}

        /*while(std::getline(lineStream,cell,','))
        {
            column_count+=1;
            if ( column_count == 1)
            {
                std::cout << cell<< "\n" ;
            }
        }*/


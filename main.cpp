#include <iostream>
#include <fstream>

int count ;
extern void write_extern();
 
int main()
{
    count = 5;
    #ifdef DEBUG
        std::cout << "Beginning execution of main()"  << std::endl;
    #endif
    write_extern();
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outfile("example1.txt");
    ifstream infile("example.txt");
    if(!infile)
    {
        cerr << "error: unable to open input file!\n";
        return -1;
    }

    if(!outfile)
    {
        cerr << "error: unable to open output file!\n";
        return -2;
    }

    string word;
    while(infile >> word)
    {
        cout << word << endl;
        outfile << word << ' ';
    }


    return 0;
}
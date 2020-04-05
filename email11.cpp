#include <iostream>
#include <string>

using namespace std;



  int main()
{
    cout << "Programmer: " << endl;
    cout << "Description: make a program that prompt the input and output filenames" << endl << endl;
    
    string I = "fileContainingEmails.txt";
    string O = "copyPasteMyEmails.txt";
    
    string D = I;
    string outputFilename = O;
    cout << "Enter input filename [default: " << I << "]: ";
    getline(cin, D);
    outputFilename = D;
    if (D.empty())
    {
        D = I;
        outputFilename = O;
    }
    cout << "Enter output filename [default: " << outputFilename << "]: ";
    getline(cin, outputFilename);
    if (outputFilename.empty())
    {
        if (D == I)
        {
            outputFilename = O;
        }
        else
        {
            outputFilename = D;
        }
    }
    cout << "Input file: " << D << endl;
    cout << "Output file: " << outputFilename;
    
    
    
    cout << endl;
}

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char input[100];
    ofstream os;
    os.open("file.txt");
    cout << "Writing to the text file: " << endl;
    cin.getline(input, 100);
    os << input << endl;
    cin.ignore();
    os.close();
    ifstream is;
    string line;
    is.open("file.txt");
    cout << "Reading text from file: " << endl;
    while (getline(is, line))
    {
        cout << line << endl;
    }
    is.close();
    return 0;
}
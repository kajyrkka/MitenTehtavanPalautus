#include <iostream>

using namespace std;
void printLetters(string);

int main()
{
    string input;

    cout << "Give text I will count letters in it!" << endl;
    cin >> input;
    printLetters(input);

    return 0;
}

void printLetters(string in)
{
    for(auto iterator = in.begin(); iterator!=in.end();iterator++)
    {
        cout<<"merkki = "<< *iterator << endl;
    }
    size_t lkm = in.length();
    cout<<"merkkien lukumaara = " << lkm << endl;
}

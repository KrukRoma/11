#include <iostream>
#include <string>
using namespace std;

//1
void deleteChar(string& str, int index)
{
    str.erase(index, 1);
}

//2
void deleteLetter(string& str1, char ch) 
{
    str1.erase(remove(str1.begin(), str1.end(), ch), str1.end());
}

//3
void insertChar(string& str2, int index1, char ch1) 
{
    str2.insert(index1, 1, ch1);
}

//5
int countOccurrences(const string& str3, char ch2) 
{
    int count = 0;
    for (char c : str3) 
    {
        if (c == ch2) 
        {
            count++;
        }
    }
    return count;
}

int main()
{
    //1
    string str = "Hello World!";
    cout << "Original string: " << str << endl;

    int index = 7; 
    deleteChar(str, index);

    cout << "String after deletion: " << str << endl;

    //2
    string str1 = "Hello World!";
    char ch = 'l'; 

    cout << "Original string: " << str1 << endl;
    deleteLetter(str1, ch);
    cout << "String after deletion: " << str1 << endl;

    //3
    string str2 = "Hello World!";
    char ch1 = 'X'; 
    int index1 = 5; 

    cout << "Original string: " << str2 << endl;
    insertChar(str2, index1, ch1);
    cout << "String after insertion: " << str2 << endl;

    //4
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    for (char& c : input) 
    {
        if (c == '.') 
        {
            c = '!';
        }
    }

    cout << "Modified string: " << input << endl;

    //5
    string input1;
    char searchChar;

    cout << "Enter a string: ";
    getline(cin, input1);

    cout << "Enter the character to search for: ";
    cin >> searchChar;

    cin.ignore();

    int occurrences = countOccurrences(input1, searchChar);
    cout << "Occurrences of " << searchChar << ": " << occurrences << endl;

    //6
    string input2;
    cout << "Enter a string: ";
    getline(cin, input2);

    int letters = 0, digits = 0, others = 0;

    for (char c : input2) 
    {
        if (isalpha(c)) 
        {
            letters++;
        }
        else if (isdigit(c)) 
        {
            digits++;
        }
        else 
        {
            others++;
        }
    }

    cout << "Number of letters: " << letters << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of other characters: " << others << endl;

}

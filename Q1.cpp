// Q1  find identifier , keyword , comment
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string key[] = {"auto", "break", "case", "char", "main",
                    "const", "continue", "default", "do",
                    "double", "else", "enum", "extern",
                    "float", "for", "goto", "if",
                    "int", "long", "register", "return",
                    "short", "signed", "sizeof", "static",
                    "struct", "switch", "typedef", "union",
                    "unsigned", "void", "volatile", "while"};
    map<string, int> keyword;
    for (int i = 0; i < 32; i++)
    {
        string str = key[i];
        keyword[str] = 1;
    }
    // cout<<keyword.size()<<endl;
    // cout<<"key0"<<key[0]<<endl;
    cout << "Select any option: ";
    cout << "1: To check Identifier\n"; // variable
    cout << "                   2: To check Keyword\n";
    cout << "                   3: To check comment\n";

    cout << "Choose your option: ";
    int option;
    cin >> option;

    cout << "Please enter any String: ";
    string str;
    cin >> str;

    cout << "Output: ";
    if (option == 1)
    {
        if (keyword[str])
        {
            cout << "This is not valid Identifier.\n";
        }
        else if ((str[0] != '_') and (str[0] < 'a' || str[0] > 'z'))
        {
            cout << "This is not valid Identifier.\n";
        }
        else
        {
            cout << "This is an Identifier.\n";
        }
    }
    else if (option == 2)
    {
        if (keyword[str])
        {
            cout << "This is a valid Keyword.\n";
        }
        else
        {
            cout << "This is not valid Keyword.\n";
        }
    }
    else if (option == 3)
    {
        if (str[0] == '/' && str[1] == '/')
        {
            cout << "This is a comment\n";
        }
        else if (str.size() >= 4 && str[0] == '/' && str[1] == '*' && str[str.size() - 2] == '*' && str[str.size() - 1] == '/')
        {
            cout << "This is a comment\n"; /* */
        }
        else
            cout << "This is not a comment\n";
    }
}
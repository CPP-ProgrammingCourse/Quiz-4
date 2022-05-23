#include <iostream>
#include <cstring>
using namespace std;

void reverseString(const char *);
void dispString(const char *);
void userString(char *, int);
void convertLetter(const char *);
//**********************************************************************

int main()
{
    int size = 11; //EXAMPLE
    // cout << "Enter size of the string: ";
    // cin >> size;

    // Define the array to store the user string(c-string)
    char userCstring[size];

    // get user string
    userString(userCstring, size);

    cout << "User String: ";
    dispString(userCstring);

    cout << "\nReversed String: ";
    reverseString(userCstring);
    
    cout << "\nUppercase Format: ";
    convertLetter(userCstring);
}

//**********************************************************************

void userString(char *user_c_string,  int SIZE)
{
    cout << "\nEnter a string with no more than " << (SIZE - 1) << " characters: ";
    cin.getline(user_c_string, SIZE);
}

//**********************************************************************

void dispString(const char *c_string)
{
    while(*c_string != '\0')
    {
        cout << *c_string;
        c_string++;
    }
}

//**********************************************************************

void reverseString(const char *c_string)
{
    for (int i = strlen(c_string); i >= 0; i--)
        cout << *(c_string + i); //pointer method
        //Index method: c_string[i]
}

//**********************************************************************

void convertLetter(const char *c_string)
{
    for (int k = strlen(c_string); k >= 0; k--)
    {
        if (k % 2 == 0)
        {
            cout << (char) toupper(c_string[k]);
        }
        else 
        {
            cout << c_string[k];
        }
    }
    cout << endl;
}




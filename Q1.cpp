#include <iostream>
using namespace std;

void sortMyArray(int *, int );
int *generateElement(int *, const int);
void dispArray(int *, const int);
double medianArray(int * , int);

//**********************************************************************

int main()
{
    int arrSize;
    cout << "Enter size of the array: ";
    cin >> arrSize;

    int userArray[arrSize];
    for (int i=0; i<arrSize; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> userArray[i];
    }

    int * newArray = generateElement(userArray, arrSize);

    cout << "User Array: ";
    dispArray(userArray, arrSize);
    cout << "\nNew Array: ";
    dispArray(newArray, (arrSize + 1));

    cout << "\nNew Array(sorted): ";
    // sort the new array
    sortMyArray(newArray , (arrSize + 1));
    // Display the sorted array
    dispArray(newArray, (arrSize + 1));

    // Display median 
    cout << "\nMedian: " << medianArray(newArray , (arrSize + 1)) << endl;
}

//**********************************************************************

int *generateElement(int *array, int arrSize)
{
    const int newSize = arrSize + 1;
    int *newArray = new int[newSize];

    for(int i = 0; i < newSize; i++) 
    {
        if (i == 0)
        {
            cout << "Enter the new element: ";
            cin >> *(newArray + i);
        }
        else 
        {
            *(newArray + i) = array[i - 1];
        }
    }
    return newArray;
}

//**********************************************************************

void dispArray(int *array, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        // array[i]
        cout << *(array + i) << " "; 
    }
}

//**********************************************************************

void sortMyArray(int *array, int arrSize)
{
    int temp;
    for(int m=arrSize;m>1;m--)
    {
        for(int i=0;i<m-1;i++)
        {
            if(array[i]>array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        } 
    }
}

//**********************************************************************

double medianArray(int *array , int size)
{

    // Find median value
    if (size % 2 != 0)
    {
        return *(array + (size / 2));
        // index method: return array[size / 2];
    }
    else
    {
        return (*(array + ((size - 1) / 2)) + *(array + (size / 2))) / 2.0;
    }
}

//**********************************************************************


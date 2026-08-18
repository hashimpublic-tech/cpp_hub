#include <iostream>
using namespace std;

void createArray(int arr[][10], int x, int y)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[][10], int x, int y)
{
    cout << "Elements of array:\n";
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int x, y;
    cout << "Enter size of array (rows cols): ";
    cin >> x >> y;

    int arr[10][10];   // maximum size

    createArray(arr, x, y);
    printArray(arr, x, y);

    return 0;
}

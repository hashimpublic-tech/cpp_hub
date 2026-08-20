// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 10

void createArray(int arr[MAX][MAX], int r, int c){
 for(int i=0; i<r; i++)
 {
     for(int j=0; j<c; j++)
     {
         cout<<"["<<i<<"]"<<"["<<j<<"] : ";
         cin>>arr[i][j];
     }
 }
}
void printArray(int arr[MAX][MAX], int r, int c)
{
// cout<<"{\n";
// for(int i=0; i<r; i++)
//  {
//      cout<<"{";
//      for(int j=0; j<c; j++)
//      {
//         cout<<arr[i][j]<<", ";
//      }
//      cout<<"}\n";
//  }
//  cout<<"}";

for(int i=0; i<r; i++)
 {
     for(int j=0; j<c; j++)
     {
        cout<<arr[i][j]<<" ";
     }
 }
}


int main() {
int arr[MAX][MAX];
int rows;
int cols;
cout<<"Enter the number of rows: ";
cin>>rows;
cout<<"Enter the number of cols: ";
cin>>cols;

createArray(arr, rows, cols);
cout<<"Array Elements are: \n";
printArray(arr,rows,cols);

    return 0;
}
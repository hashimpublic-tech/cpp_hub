#include <iostream>
using namespace std;
class Result {
public:
    int calResult(int a , int b ) 
    {
        return a + b ;
    }

    int calResult(int a , int b , int c ) 
    {
        return a  +  b  + c ;
    }

    float calResult(float a , float b , float c ) 
    {
        return (a  +  b  + c ) / 3 ;
    }
};

int main() {
    Result r;

    cout << "Sum of 2 subjects: " << r.calResult(50 , 60) << endl;
    cout << "Sum of 3 subjects: " << r.calResult(50 , 60 , 70) << endl;
    cout << "Average of 3 subjects: " << r.calResult(50.0f , 60.0f , 70.0f) << endl;

    return 0;
}
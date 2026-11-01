#include<iostream>
using namespace std ;
class Shape{
    public:
    virtual void draw(int lenghth , int width){
        cout << "\nCalculate Area\n";
    }
};
class CalculateArea : public Shape{
    public:
    void draw(int lenghth , int width){
        
        int area = lenghth * width;
        cout << "Area Calculated Successfully\n\n";
        cout << "Area : " << area << endl;
    }
};
int main(){
    Shape s ;
    CalculateArea c;

    Shape* ptr ;

    ptr = &s ;
    ptr -> draw(5 , 3);

    ptr = &c ;
    ptr -> draw(5 , 3);

    return 0 ;

}

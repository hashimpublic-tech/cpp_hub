
// Date : 30-April-202600

#include<iostream>
using namespace std ;
class Shape{
    public:
    virtual void draw(){
        cout << "\nCalculate Area\n";
    }
};
class CalculateArea : public Shape{
    public:
    int area ;

    CalculateArea(int lenghth , int width){
         area = lenghth * width;
    }
        
       void draw(){ 
        cout << "Area Calculated Successfully\n\n";
        cout << "Area : " << area << endl;
       }
    
};
int main(){
    Shape s ;
    CalculateArea c(5,4);

    Shape* ptr ;

    ptr = &s ;
    ptr -> draw();

    ptr = &c ;
    ptr -> draw();

    return 0 ;

}
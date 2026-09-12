#include<iostream>
using namespace std ;
void fun(){
    static int count = 0 ;
    cout << "count : " << count << endl;

    count++;
}
int main(){
    fun();
    fun();
    fun();

}
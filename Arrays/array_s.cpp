



/*#include<iostream>
using namespace std ;
int main(){
    int num [5]={12,21,32,12,32};
    cout << num [ 2 ];
    return 0 ;
}*/

//************ */


/*#include<iostream>
using namespace std ;
int main(){
    int num[5]={3,5,6,77,3,};

    for(int i = 0 ; i < 5 ; i++){
        cout << " int of array :  " << num[i] <<" " << endl;;

    }return 0 ;
}
*/


//**************************** */


/*#include<iostream>
using namespace std ;
int main()
{
    double  array[3] = { 99.32 , 98.33 , 35.01 } ;

    array[2] = 34.02 ;
    cout <<  array[5] << endl;
    return 0 ;
}*/




/********************************** */

/*#include<iostream>
using namespace std ;
int main(){
    int array[] = { 23 ,34 ,54,34,34} ;
    for( int i = 0 ; i < 5 ; i++ ){
        cout << array[i] << endl;;
    }
    return 0 ;

}
*/

/*********************************** */



/*#include<iostream>
using namespace std ;
int main()
{
    int array[]={23,43,56,67,76,87};
    int size ;
    int sz = sizeof(array) / sizeof(int) ; // to find the array size : 
    cout << sz << endl;
    return 0;
}

*/


/************************************ */

// how to find the largest and smallest numbers in an array and also their indexes :



/*
#include<iostream>
#include<climits>
using namespace std ; 
void arrays()
{
    int largeIndex ;
    int smallIndex ;
    int array[] = { 2 , 4 , 34 , 32 , 23 , -1 , 3 } ;
    int smallest = INT_MAX ;
    int largest = INT_MIN ;

    for( int i = 0 ; i < 7 ; i++ ){
        array[i] ;
        
        if( array[i] < smallest ){
            smallest = array[i] ;
            smallIndex = i ;

        }
        if( array[i] > largest ){
            largest = array[i] ;
            largeIndex = i ;
        }
    }
    cout << " smallest number = " << smallest << endl;
    cout << " smallest value index : " << smallIndex << endl;

    cout << "\n largest number = " << largest << endl;
    cout << " largest value index : " << largeIndex << endl;

    return ;
    
}
int main()
{
    arrays();
    return 0 ;
}
*/





/*********************************** */


/*#include<iostream>
using namespace std ;
int passValue( int a , int b ){
    a=a+10 ;
    b=b+10 ;
    int sum = a+b ;
    return sum ;
}
int main(){
    int a = 5 ;
    int b = 6 ;
    
    cout << passValue( a , b ) << endl;
    cout << " a " << a << endl;
    cout << " b " << b << endl;
}


*/



/*************************************** */

// pass by reference in array :

/*#include<iostream>
using namespace std ;
void changeArray( int array[] , int size ){
    for ( int i = 0 ; i < size ; i++ ){
        array[i] = 2 * array[i] ;
    }
}
int main(){
    int array[]={ 1 , 2 , 3 , 4 };
    changeArray( array , 4 ) ;

    for( int i = 0 ; i < 4 ; i++ ){
        cout << array[i] << " " ;
    }
    cout << endl;
    return 0;
}*/


/*********************************** */


// linear search ;


/*#include<iostream>
using namespace std ; 
int main(){
   int array[]={ 1 , 2 , 3 , 4 , 5,  6, 7 , 8 , 9  };
   int target = 9 ;
   bool isfind = false ;


   for( int i=0 ; i<9 ; i++ ){
    if( array[i] == target ){
        cout << " target exist on index : " << i << endl;
        isfind = true ;
        break ;
    }   
}
if( isfind != true){
    cout << " target not found : " << endl;
}

return 0;
   }

*/



/*********************************** */

// Linear Search : 


/*#include<iostream>
using namespace std ;
int main(){
    int array[]={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 11 } ;
    int target ;
    bool isfind = false ;

    
        while ( true ){
           
        cout << " enter target to find index an array : " << endl;       // this is an code to find a number an array else pint not found :
        cin >> target ;
        
        for( int i=0 ; i<10 ; i++){
            if( array[i] == target ){
                cout << " target exist an index : " << i << endl;
                isfind = true ;
                break ;
                 
            }
        }
        if( isfind != true ){
            cout << " * target not found . " << endl;
         } }
    return 0 ;
}
*/




/*********************************** */


// Reverse an array :
//first logic :  


/*
#include<iostream>
using namespace std ;
int main(){
    int array[]={ 2 , 4 , 5 , 7 , 6 , 9 } ;
     
    for( int i=5 ; i>=0 ; i-- ){
        cout << array[i] << " " ;
    }cout << endl;
    return 0 ;
}
    */


/*********************************** */

// Reverse an array :


/*
#include<iostream> 
using namespace std ; 
void reverseArray( int array[] , int size ){
    int start = 0 ,  end = size - 1 ;
    while( start < end ){
        swap( array[start] , array[end]);
        start++ ;
        end-- ;
    }
}
int main(){
    int array[]={ 1 , 2 , 3 , 4 , 5 ,  6 , 7 };
    int size = 7 ;

    reverseArray( array , size );

    for( int i=0 ; i<size ; i++ ){
        cout << array[i] << " " ;
    }
    return 0;
}
    */


/*********************************** */

// linear search : 


/*#include<iostream>
using namespace std ;
void linearSearch( int array[] , int size , int target )
{
    
    bool isfind = false ;

    for( int i=0 ; i<size ; i++ ){
        if( array[i] == target ){
            cout << " target is exist an index : "<< i << endl;
            isfind = true ;
            break ;
        }
    }
    if( isfind == false  ){
        cout << " not found * " << endl;
    }
}
int main(){
    int array[]={ 1 , 2 , 3 , 4 , 5 };
    int size = 5 ;
     while( true ){
    int target ;
    cout << " enter target to find : " << endl;
    cin >> target ;

    linearSearch( array , size , target ) ;}

    return 0 ;
}
*/


/************************************ */

//Linear Search :


/*#include<iostream>
using namespace std ; 
void linearSearch( int array[] , int size , int target ){
    bool isfind = false ;
    for( int i=0 ; i<size ; i++ ){
        if( array[i] == target ){
            cout << " target exist on index " << i << endl;
            isfind = true ;
            break ;
        }
    }
    if( isfind == false ){
        cout << " * Not Found : "<< endl;
    }
}
int main(){
    int target ;
    int size = 6 ;
    int array[]={ 1, 2 , 3 , 4 , 5 , 6 };
    while( true ){

        cout << "\n enter a number to find exist or not  :  " << endl;
        cin >> target ; 
        system( " cls ");

        linearSearch( array , size , target ) ;

    }

        return 0 ;
    
}


*/



/************************************ */

// Reverse Array :

/*#include<iostream>
using namespace std ;
void reverseArray( int array[] , int size ){
    int start = 0 , end = size-1 ;

    for( int i=0 ; i<size ; i++ ){
        while( start <= end ){
        swap( array[start] , array[end]);
        start++;
        end--;
        }
    }
}
int main(){
    int array[]={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
    int size = 9 ;

    reverseArray( array , size );

    for( int i=0 ; i<size ; i++ ){
        cout << array[i] << " " ;
    }

    return 0 ;
}
*/



/*********************************** */


// Reverse Array :

/*
#include<iostream>
using namespace std ;
void reverseArray( int array[] , int size )
{
    int start = 0 , end = size-1 ;

    while( start < end )
    {
        swap( array[start] , array[end]);
        start++;
        end--;
    }
}
int main()
{
    int array[]={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9  };
    int size = 9 ;

    reverseArray( array , size ) ;

    for( int i=0 ; i<size ; i++ )
    {
        cout << array[i] << " " ;
    }
return 0 ;
    
}
*/


/************************************ */

// Linear Search on array : 

/*
#include<iostream>
using namespace std ; 
void linearSearch( int array[] , int size , int target ){
    bool isfind = false ;

    for( int i=0 ; i<size ; i++ ){
        if( array[i] == target ){
        cout << " target exist in index : "  << i << endl;
        isfind = true ;
        break ;

        }
    }
    if( isfind == false ){
        cout << " : target not found : * " << endl;
    }
    
}
int main(){
    int target ;
    int array[]={ 1, 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
    int size = 10 ;

    while( true ){
    cout << "\n enter target to find in array : " << endl;
    cin >> target ;
     system ( " cls ") ;

     linearSearch( array , size , target ) ;
    
    }

    return 0 ;
}
    */




    /**************************************** */


    // Reverse array 


    /*#include<iostream>
    using namespace std ;
    void ReverseArray( int array[] , int size )
    {
        int start = 0 ,  end = size - 1 ;
        for( int i=0 ; i<size ; i++ )
        {
            while( start <= end ){
            swap( array[start] , array[end]) ;
            start++ ;
            end--;
            }}
    }
    int main(){
        int array[]={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ;
        int size = 10 ;

        ReverseArray( array , size ) ;

        for( int i=0 ; i<size ; i++ ){
            cout << array[i] << " " ;
        }
        return 0;
    }
    */



    /****************************************** */


/*#include<iostream>
using namespace std ;
int main(){
    int size = 5 ;
    int array[size];

    cout << " enter marks : " << endl;
    for( int i = 0 ; i < size ; i++)
    {
        cin >> array[i] ;
    }
    for( int i = 0 ; i < size ; i++ )
    {
        cout <<" marks"<< i+1 << " = " << array[i] << endl;
    }
    return 0 ;
}*/

/********************************** */


// how to take 5 marks then print marks and total marks : 


/*#include<iostream>
using namespace std ;
int main(){
    int marks[5]={45 , 54 , 56 , 87 , 89 } ;
    int totalMarks = 0 ;

    for(int i = 0 ; i < 5 ; i++ ){
        cout << " marks : " << marks[i] << endl ;
        totalMarks+= marks[i];
    }
    cout <<" total marks is : " << totalMarks << endl;
    return  0 ;
}
*/



//*********************************************** */

//A program stores 10 numbers in an array.
//Input the numbers
//Find and print the largest number
 


/*#include<iostream>
using namespace std ;
int main(){
    int num[10];
    int largestNum = 0  ;
    int index ;

    for( int i = 0 ; i < 10 ; i++ ){
        cout << " enter number " << i+1 <<" : "<< endl;
        cin >> num[i] ;

        if( num[i] > largestNum ){
            largestNum = num[i] ;
            index = i ;
        }
    } 
     cout << " its the largest number in following numbers : " << largestNum  << endl;
     cout <<" largest number index is : " << index << endl;
     return 0 ;
}*/


/************************************************************** */

//Store 6 numbers in an array.
//Calculate and display the average


/*#include<iostream>
using namespace std ;
int main(){
    int num[6] ;
    int avg = 0 ;

    for(int i = 0 ; i < 6 ; i++ ){
        cout <<" enter numbers : " << i+1 << endl;
        cin >> num[i] ;

        avg+=num[i] ;

    }
    cout << " the avg of marks is : " << avg/6 << endl;
    return 0 ;
}
*/

/******************************************************** */

//You have 8 numbers in an array.
//Task:
//Count how many numbers are even


/*#include<iostream>
using namespace std ;
int main(){
    int num[8]={ 2 , 3 , 5 , 7, 4 , 8 , 22 , 13 };
     for(int i = 0 ; i < 8 ; i++ ){
        if( num[i]%2 == 0 ){
            cout << " even number : " << num[i] << endl;

        }
     }return 0 ;
}
*/


/********************************************************** */


//An array stores 7 integers.
//Task:
//Ask the user for a number
//Check if it exists in the array or not.


/*#include<iostream>
using namespace std ;
int main(){
    int num[7]={ 2 , 3 , 5 , 6 , 8 , 9, 10 } ;
    int checkNum ;

    cout << " enter the number to check its exist or not an array : " << endl;
    cin >> checkNum ;

    for(int i = 0 ; i < 7 ; i++){
        if( checkNum == num[i] ){
            cout << " yes this number is exist in array  : " << checkNum << endl;
        }
        
    }return 0 ;
}
*/


/********************************************************************** */




//A class stores 6 roll numbers in an array.
//Task:
//Print the array in reverse order

/*#include<iostream> 
using namespace std ;
int main(){

    int array[10]={ 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 3 };

    for(int i = 10 ; i > 0 ; i-- ){
        cout  << array[i] << endl;
    }
    return 0 ;

}
*/



/*************************************************************************** */


/*#include<iostream> 
using namespace std ;
int main(){
    int marks[6]={ 56, 67, 76, 78, 98 , 76};
    int sum = 0 ;

    for(int i = 0 ; i < 6 ; i++){
        cout << marks[i] << endl;
        sum+=marks[i];

    }cout << " sum = " << sum << endl;
    return 0;
    

}
*/

//********************************* */


/*#include<iostream>
#include<climits>
using namespace std ;
int main(){
    
    int num[5]= { 23, 34, 45, 2, 7 };
    int smallest = INT_MAX;
    int largest = INT_MIN ;

    for(int i = 0 ; i<5 ; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
        if(num[i] > largest){
            largest = num[i];
        }
    }cout << " smallest number in array is : " << smallest << endl;
    cout << " the largest number in array is : " << largest << endl;
    return 0 ;
    
    
}
*/


//*********************************************** */


/*#include<iostream>
using namespace std ;
int main(){
    int array [6]={2, 4, 6, 7, 3, 8 };
    for(int i = 0  ; i < 6 ;i++){
         if(array[i] % 2 == 0){
            cout << " even : " << array[i] << endl ;
         }else{
             cout <<  " odd : " << array[i] << endl;
         }
    }return 0 ;
}*/



//***************************************** */



/*#include<iostream>
using namespace std ;
int main(){
    int num[8]={12,32,12,32,34,36,76,67};
    
    for(int i = 0 ; i < 8 ;i++){
        cout << num[i ] << " " ;

    }
    return 0;
}*/

/******************************************** */

/*#include<iostream>
using namespace std  ;
int main(){


    int num[11]={12,3,56,45,23,56,43,23,12,45,65,};
    cout << sizeof(num);

    return 0 ;
}*/

/****************************************** */


/*#include<iostream>
using namespace std ;
 int main(){
    int sum = 0 ;
    int array[3]={12,43,23};
    for(int i = 0 ; i < 3 ;i++){
        cout << array[i] <<endl;
        sum+=array[i] ;


    }cout << " sum : "  << sum << endl;
    return 0 ;
 }
*/


/*********************************************** */



/*#include<iostream>
using namespace std ;
int main(){
    int array []={22,23,54,34,54,54};

    for(int i = 0 ; i < 6 ; i++){
        if(array[i] == 23){
            cout << " its their index : " << i << endl; ;
        }
    }return 0 ;
}*/



// ***********how to take numbers from user and culculate ***************



/*#include<iostream>
using namespace std ;
int main(){
    int array[10];//={1,3,4,2,1,4,5,6,8,9};
    int sum = 0 ;

   for(int i =0 ; i < 10 ; i++){
    cout << "enter numbers  " <<i+1 << " : " <<  endl;
    cin >> array[i];

    cout << i+1  << " number is : " << array[i] << endl;
    sum+=array[i];
    cout <<"\n";
   }cout << "its the sum of these numbers : " << sum << endl; 
   cout << " its the avg of all these numbers : " << sum / 5 << endl;

    return 0 ;
}*/

//*************************** */


/*#include<iostream>
using namespace std ;
int main(){
    int sum = 0 ;
    int marks[5];//={56, 67, 78, 100, 88};
    for(int i = 0 ; i < 5 ; i++){
        
        cout <<" enter marks " << i+1 << " : " << endl;
        cin >> marks[i] ;

        sum+=marks[i];
        
    }cout << " sum  = " << sum << endl;
    return 0;
}*/



//****************************** */


/*#include<iostream>
using namespace std ;
int main(){
    int marks[4]={56, 67, 65, 67,  };

    cout <<"its the arry size in bytes : " <<  sizeof(marks) << endl;
    cout << " its the array size : " << sizeof(int) << endl;
     
    return 0 ;
}*/



//******************************** */




/*#include<iostream>
#include<string>
using namespace std ;
int main(){
    string names[3] = {"banana", " apple", "mango" };
    for(int i = 0 ; i < 3 ; i++){
        cout << i <<" : "<<  names[i] << endl;;
    }

    return 0 ;}*/

    /*
    0 : banana
    1 :  apple
    2 : mango
    */

    //******************************** */


/*  
    #include<iostream>
    using namespace std ;
    int main(){
        int marks[3];
        for(int i = 0 ; i <  3 ; i++){
            cout << " enter your marks for index " << i << " : " << endl;
            cin >> marks[i];

        }        for(int i = 0 ; i < 3 ; i++){
            cout << i << " : " << marks[i] << endl;;
        }
        return 0 ;
    }
        */
    /*
 enter your marks for index 0 : 
12
 enter your marks for index 1 : 
23
 enter your marks for index 2 : 
34
0 : 12
1 : 23
2 : 34
*/


//****************************** */


/*#include<iostream>
using namespace std ;
int main(){
    int marks[5];
    int sum = 0 ;
    cout << " enter marks : " << endl;

    for(int i = 0 ; i < 5 ;i++){
        
        cin >> marks[i];

        cout << " marks " << i +1 << " = " << marks[i] << endl;
        sum+=marks[i] ;

    }
    cout << " sum = " << sum << endl;

    return 0 ;
}*/


//******************************* */
//how to find the smallest and largest numbers in a array :  ***************

/*#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int nums[] ={5,23,100,2,3};

    int smallest =INT_MAX;
    int largest = INT_MIN;

    for(int i = 0 ; i < 5; i++){
        if(nums[i] < smallest ){
            smallest = nums[i] ;
            
           }

          else if (nums[i] > largest ) {
            largest = nums[i];

          }

    } cout << " smallest :  " << smallest << endl;
    cout << " largest : " << largest << endl;
    return 0 ;
    
}*/

// how to find the the smallest and largest numbers and there indexes also in a array : ********************


/*
#include<iostream>
#include<climits>
using namespace std ;
int main(){

    int nums[5] = {5, 34 , 45 , 3 , 6};
    int smallest = INT_MAX;
    int largest =  INT_MIN ;
    
    int sindex = 0 ;
    int lindex = 0 ;

    for(int i = 0 ; i <  5 ; i++){
        if (nums[i] < smallest){

            smallest = nums[i] ;
            sindex = i ;
            
        }
        if(nums[i] > largest ){

            largest = nums[i];
            lindex = i ;
        }
    }
    cout <<"\nsmallest : " << smallest <<  endl;
    cout << " the smallest number index is : " << sindex << endl;

    cout << " largest : " << largest << endl;
    cout << " the largest number index is : " << lindex << endl;
    
    return 0 ;
}
    */


    //how to find the index of a number in array : **************

    /*#include<iostream>
    using namespace std ;
    int main(){
        int marks[5]= {12,34 , 33, 44 , 65};
        for(int i = 0 ; i < 5 ; i++){
            if(marks[i] == 44){
                cout << i << endl;
            }

        }return 0 ;
        
    }*/

    //***************************** */

//  a teacher wants to take input and print 5 student marks and the print the highst one :********** 


    /*#include<iostream>
    using namespace std ;
    int main(){

        int marks[5];
        int highest = 0 ;
        int sum = 0 ;

        for(int i = 0 ; i < 5 ; i++){

            cout << " enter marks " << i+1 << " : " << endl;
            cin >> marks[i] ;
            sum+=marks[i];

            

            if(marks [i] > highest) {
                highest = marks[i] ;
            }

        }cout << "Highest marks is  : " << highest << endl;
        cout << " sum of all marks is  : " << sum << endl;
        return 0;
        
    }
    */

    //************************************** */

    //take input from user to enter 7 days temp and print 
    //and then pring their avg and find the temp which is then avg of temp: *****


    /*#include<iostream>
    using namespace std ;
    int main(){

        int temp[7] ;
        int sum = 0 ;
        int avg = 0 ;
        int abv_avg = 0 ;

        for(int i = 0 ; i < 7 ; i++){
            cout << " enter temrature of day " << i+1 << " : " << endl;
            cin >> temp[i] ;
            avg+=temp[i];

            if(temp[i] > abv_avg ){
                abv_avg = temp[i] ;
            }

        }
        cout << " the avg of temp  is : " << avg / 7 << endl;
        cout << " the temp which is high the temp avg is : " << abv_avg << endl;
        return 0 ;



    }*/

    /******************************************** */


    // display 10 items with prices and print how many item are greater then 100 : ***************/


    /*#include<iostream>
    using namespace std ;
    int main(){

        int cost[10] = {12 , 34 , 80 , 80 , 100 , 190 , 100 , 150 , 50 , 130 } ;
        int count = 0 ;

        for(int i = 0 ; i < 10 ; i++){
            cout << "these are the item s : " << cost[i] ;

            if( cost[i] >= 100 ) {
                count++ ;
            }cout << endl;

        }cout << "\n counting of items which is more ex then 100 : " << count << endl;
        return 0 ;

    }*/


    /**************************************************************** */

    // make a students program if teacher enter 1 for pass and  0 for fail 
    // and then count pass students and fail students : ****************


    /*#include<iostream>
    using namespace std ;
    int main(){
        int marks[10];
        int countPass = 0 ;
        int countFail = 0;
        for(int i = 0 ; i < 10 ; i++){
            cout << " enter student " << i+1 << " id : " <<  endl;
            cin >> marks[i] ;

            if(marks[i] == 1){
                cout << " student " << i+1 << " is pass : " << endl;
                countPass++ ;
            }
            else{
                cout << " student " << i+1 << " is fail :  " << endl;
                countFail++ ;
            }cout << endl;

        } 
        cout << " pass students are : " << countPass << endl;
        cout << " Fail students are : " << countFail << endl;
        
        return 0 ;

    }*/



    //************************************************ */


    //your phone stores data in usage (in mb) for 5 days in array : 
    // calculate total data usage : 
    // and find the day of use max data : 
    

/*#include<iostream>
using namespace std ;
int main(){

    int data[5] = { 200 , 700 , 300 , 540 , 930 };
    int totalUsed = 0 ;
    int maxUse = 0 ;
    int index ;

    for(int i = 0 ; i < 5 ; i++){
        cout << " the data used in day " << i+1 << " : " << endl;
        cout << data[i];

        totalUsed+=data[i] ;

        if(data[i] > maxUse ) {
            maxUse = data[i];
            index = i ;
        }cout << endl;

    }
        cout << "**********************" << endl;
        
    cout << " * total used data in previus days are  : " << totalUsed << endl;
    cout << " * max data which are use in previus days are : " << maxUse << endl;
    cout << " * max data are used in day  : " << index+1 << endl;
    cout<< " \n" << endl; 
    
    return 0 ;


}*/



/*********************************************** */


/*#include<iostream>
using namespace std ;
int main(){
    int attendence[7];
    float present = 0 ;
    int absent = 0 ;
    float percentage ;

    for(int i = 0 ; i < 7 ; i++){
        cout << " mark your attendence by 1 : else you'll absent ( day " << i+1 << " ) : " << endl;
        cin >> attendence[i];
        
        if(attendence[i] == 1 ){
            //present = attendence[i];
            present++ ;
        }else{
            absent++ ;
        }

        
    }
    cout << " * your attendence are : " <<  present << endl;
    percentage = present * 100 / 7 ;
    cout << " * your attendence is  " << percentage << " percent% : " << endl;


    if(percentage > 75 ){
        cout <<" * congratulation you are eligibal to join exam : " << endl;
    }else {
        cout << " * sorry ! you can't join exam :  " << endl;
        cout << " * becouse you have absent " << absent << " days : " << endl;

    }return 0 ;
}

*/




//**************************************************** */


//Question 2 quiz : ********

/*#include<iostream>
using namespace std ;
int main(){
    float days[7]={ 0.7 , 0.9 , 1.1 , 1.2 , 0.3 , 1.0 , 0.6 } ;
    float avg = 0 ;
    float maxData = 0;
    int index ;

    for(int i = 0 ; i < 7 ; i++){
        cout << " its the data use on day " << i+1 << " : "  << days[i] << " (GB) " << endl;
        avg+=days[i];

        if(days[i] > maxData){
        maxData = days[i] ;
        index = i ;
    }
    } cout << " \n " ;
    cout << " ********** " << endl; ;
    cout << " * total avg of data is : " << avg << " (GB) " << endl;
    cout << " * highest rate of data use is : " << maxData <<" (GB) " << endl;
    cout << " * the highest data is used on day " << index + 1 << endl;
    cout << " ********** " << endl;
    cout << " \n " ;

    return 0 ;
    
}*/




/***************************************** */

// a grocery store has 8 vegetable bags : 
// find the haveist and lightest : 



/*#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int bags[8]={ 8 , 9  , 2 ,  3 , 7 , 4 , 6 , 1 };
    int max = INT_MIN ;
    int min = INT_MAX ;

    for (int i = 0 ; i < 8 ; i++){
        
        if(bags[i] > max ){
            max = bags[i] ;
        }
        if(bags[i] < min ) {
            min = bags[i] ;
        }
    }
    cout << " haviest bag is : " << max << endl;
    cout << " lightest bag is : " << min << endl;

    return 0 ;

}*/

/*********************************************** */

//playes of score of some days : 
// print all scores and count how many are above 50  : 


/*#include<iostream>
using namespace std ;
int main(){
    int score[6] = { 53 , 48 , 74 , 35 , 21 , 51 } ;
    int abvScore = 0  ;
    int matches = 0  ; 

    for(int i = 0 ; i < 6 ; i++ ) {  
        cout << " its the player obtained score  in match  " << i+1 << " : " << score[i] << endl;

        if(score[i] > 50 ) {
           
            abvScore++ ;
           
        }
    }cout << "\n" << endl;
    cout << " **************"  << endl;
    cout << " * the score which is above 50 are in " << abvScore << " matches : " << endl;
    cout << " * player score is above then 50 in match " << matches << " : " << endl; 
    return 0 ;
}*/


/****************************************** */

//ticket number of 5 passenger stored in a aarray
// search ticket number by user : 
// print for right key " found " else " npt fount " :  



/*#include<iostream>
using namespace std ;
int main(){
    int key[3] = {34 ,43 ,45 };
    int search  ;
    int found = true ;

    cout << " enter code : " << endl;
    cin >> search ;

    for(int i = 0 ; i < 3 ; i++) {
         if(key[i] == search){
         search = true;

         }

    } if(search == true){
        cout << " ok , found  : " << endl;
    } else {
        cout << " not found : " << endl;
    }
     

    
}
*/



/***************************************************** */


//print the smallest and largest value index : 


/*#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int num[5]= {  4 , 9 , 2 , 6 , 7  };
    int max = INT_MIN ;
    int min = INT_MAX ;
    int index = 0 ;
    int index2 = 0 ;

    for(int i = 0 ; i < 5 ; i++ ) {

        if(num[i] > max ){
            max = num[i] ;
            index = i ;
        }
        if(num[i] < min ) {
            min = num[i] ;
            index2 = i ;
        }
    }
    cout << " * its the index of largest value in array : " << index << endl;
    cout << " * its the index of smallest value in array : " << index2 << endl;

    return 0 ;
}*/


/*********************************************** */


//2D array :
//A class has 3 students and each student has marks in 4 subjects.
//Scenario:
//Each row represents a student
//Each column represents a subject
//Practice Task:
//Store all marks
//Find the total marks of each student


/*#include<iostream>
using namespace std ;
int main(){
    int num[3][4];
    int total ;

    for( int student = 0 ; student < 3 ; student++){
        cout << " enter marks of students : " << student+1 << endl;
        for(int marks = 0 ; marks < 4 ; marks++ ) {
            cout <<" enter marks  " << marks+1 << " : " << endl;
            cin >> num[student][marks] ;
        }cout << endl;
    }

    for(int students = 0 ; students < 3 ; students++){
        total = 0;
       for(int marks = 0 ; marks < 4 ; marks++ ) {
        total+=num[students][marks] ;
       }
        cout << " total marks of " << students +1 << " is : " << total << endl;

    }
}*/



/***************************************************** */

// Reverse Array :

/*#include<iostream>
using namespace std ;
void reverseArray( int array[] , int size ){
    int start = 0 , end = size -1 ;
    for( int i=0 ; i<size ; i++ ) {
        while( start <= end ){
            swap( array[start] , array[end]);
            start++;
            end--;
        }
    }
}
int main(){
    int array[]={ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
    int size = 10 ;

    reverseArray( array , size );

    for( int i = 0 ; i<size ; i++ ){
        cout << array[i] << " " ;
    }

    return 0 ;
}

*/

/**************************************** */


// linear Search :

#include<iostream>
using namespace std ;
int linearSearch( int array[] , int size , int target ){
    bool isfind = false ;

    for( int i=0 ; i<size ; i++ ){
        if( array[i] == target ){
            cout << " target exist in array index : " << i << endl;
            isfind = true ;
            break ;
        }
    }
    if( isfind == false ){
        cout << " target not found * " << endl;
    }
    return 0 ;
}
int main(){
    int target ;
    int size = 10 ;
    int array[] = { 6 , 1 , 2 , 34 , 44 , 33 , 66 , 23 , 67 , 87 } ;

    while( true ){
        cout << "\nfind number exist or not ! ... " ;
        cin >> target ;

        system( " cls ") ;

        linearSearch( array , size , target ) ;

    }
}






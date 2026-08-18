//***************VECTORS********************* */
// 20/1/2026.

/*#include<iostream>
#include<vector>
using namespace std ;
int mian(){
    vector<int> vec ; //0 value now 
    cout << vec[0] ;  // dont print anything .

    return 0 ;
}*/


/******************************************* */


/*#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vec = { 1 , 2 , 3 };           // arrays and vectors has very close relation 
    cout << vec[0] << endl;                    // array store fix data , and vector store infinite data very easy ;
    cout << vec[1] << endl;                    
    cout << vec[2] << endl;

    return 0 ;

}*/

/************************************* */

/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vec( 5 , 1 ) ;          // we can also initialize a vector vec( 5 , 1 ) like this , here the five will show the size of vector 
    cout << vec[0]<< endl ;             // and 1 will store in every index of vector , now 1 is stored in every index .
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;



    return 0 ;
}
    */

    /******************************** */


    /*#include<iostream>
    #include<string>
    #include<vector>
    using namespace std ;
    int main(){
        vector<string> vec={ " hashim", " yousaf"," zeeshan"," numan" };
        cout << vec[0]<< endl;
        cout << vec[1]<< endl;
        cout << vec[2]<< endl;
        cout << vec[3]<< endl;

        return 0 ;
    }
*/
    /**************************************** */


    // for each loop ;


    /*#include<iostream>
    #include<vector>
    using namespace std ;
    int main(){                                      // in vectors for each loop use , but loop will not print index                                                 
        vector<int> vec = { 1 , 2 , 3 , 4 , 5 } ;     //it will print values inside index .

        for( int val : vec ){
            cout << val << endl ;
        }
        return 0 ;
    }
*/


/*************************************** */


/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<char> value={ 'a' , 'b' , 'c' , 'd' , 'e' };
    for( char val : value ){
        cout << val << endl;
    }
    return 0;
}
*/


/************************************ */


// find size of vector :

/*#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vect = {  1 , 2 , 3 , 5 , 6 , 7 , 7 , 8 } ;      // size is  a built in function in vector :
    cout << " size = " << vect.size() << endl;

    for( int value : vect ){
        cout << value << endl;
    }
    return 0 ;

}*/


/**************************************** */


// push_back ;
// mean how we can assign/add a value to vector :

/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vect;
    cout << " size = " << vect.size() << endl;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(25);
    cout << " after push back : " << vect.size() << endl;

    for( int value : vect ){
        cout << value << endl;
    }
    return 0 ;

    return 0 ;
}
*/


/********************************************* */


/*#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vect ;

    cout << " size = " << vect.size() << endl;

    vect.push_back(10);                         // it was a empty vector but i assign 6 value to vector with the help of push_back:
    vect.push_back(25);
    vect.push_back(30);
    vect.push_back(35);
    vect.push_back(45);
    vect.push_back(50);

    cout << " size after push back : " << vect.size() << endl;

    vect.pop_back();                            // it will print only 10 bcz i removed last 5 value wth the help of pop_back :
    vect.pop_back();
    vect.pop_back();
    vect.pop_back();
    vect.pop_back();

    for( int value : vect ){
        cout << value << endl;
    }
    return 0 ;
}
*/


/****************************************** */


//how to use built in types of vector .
/*
1 . size 
2 . push_back 
3 . pop_back 
4 . front 
5 . back
6 . at 
*/


/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vect ;
    cout << " size = " << vect.size() << endl;      // here the vector is empty , so size will equal to zero : 
                                               
    vect.push_back(10);
    vect.push_back(15);
    vect.push_back(20);                      // here i assign 7  values to vector with the help of push_back identifier :
    vect.push_back(25);
    vect.push_back(30);
    vect.push_back(35);
    vect.push_back(40);

    cout << " size after assign values : " << vect.size() << endl;     // then here their size will equal to 7 ;

    vect.pop_back();
    vect.pop_back();     // and then here i removed some last value from vector with the help of pop_back identifier 
    vect.pop_back();

    cout << " first value of vector is : " << vect.front() << endl;   // print first value of vector :
    cout << " last value of vector is : " << vect.back() << endl;     // print last value of  vector :

    cout << " value of index 2 is : " << vect.at(2) << endl;     // print value from your own choice with the help 
                                                                 //  of at() identifier , enter index number 
    for( int value : vect ){ 
        cout << value << endl; // this is a loop for vector which is called for each loop ;
    }
    return 0 ;
}
    */




    /****************************************** */


/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){

    vector<int>vect = { 1 , 2 , 3 } ;

    for( int value : vect ){
        cout << value << endl;
    }
    return 0;
}
 */


 /*********************************************** */



 /*
 #include<iostream>
 #include<vector>
 using namespace std ;
 int main(){
    vector<char> character = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' };
    cout << " size of vector = " << character.size() << endl;

    character.push_back('h');
    cout << " after push_back vector size = " << character.size() << endl;

    character.pop_back();
    character.pop_back();
    cout << " aftre pop_back vector = " << character.size() << endl;

    
    cout << " front value of vector = " << character.front() << endl;

    cout << " last value of vector = " << character.back() << endl;

    cout << " value of vector at index i = " << character.at(2) << endl;

    for( char ch : character ){
        cout << ch << endl;
    }
    return 0 ;
 }


*/




/******************************************************************** */

// find size and capasity o a vector :


/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){

    vector<int> vect;

    vect.push_back(1) ;
    vect.push_back(2) ;           // when we push bach value to vector their 
    vect.push_back(3) ;           // capasity will be going to improve : .
    vect.push_back(4) ;
    vect.push_back(5) ;
    vect.push_back(6) ;
    vect.push_back(7) ;
    vect.push_back(8) ;
    vect.push_back(9) ;
    
    cout <<" size = " << vect.size() << endl;
    cout<< " capasity = " << vect.capacity() << endl;
 


}
*/
//22/1/2026.
/******************************************** */


/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vect ;
    
    vect.push_back(1); // when push back 3 number to vector their capacity become 4 , and then wehen we push back 4rt number 
    vect.push_back(2); // to vector 4rt number is keep fix in vector , but when we are push_back 5th digit to vector then 
    vect.push_back(3); // their capacity become double it will becom from 4 to 8 .
    vect.push_back(4); // and 3 indexes will be empty :
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(9);

    cout << " size = " << vect.size() << endl;
    cout << " capacity = " << vect.capacity() << endl;

    return 0 ;
}
    */



    /******************************************* */

    //Single Value :

    /*#include<iostream>
    #include<vector>
    using namespace std ;
    int main(){
        int ans = 0 ;
        vector<int> vect = { 1 , 2 , 3 , 1 , 2  } ;     ^ axore is a function which is cancel same values 

        for( int value : vect ){
            ans = ans ^ value ;
        }
        cout << " single value in array is : " << ans << endl;
    }
*/



/****************************************** */


// Single Value :


/*#include<iostream>
#include<vector>
using namespace std ;
int singleValue(){
    vector<int>vect={ 1 , 2 , 3 , 1 , 2 };

    int ans = 0 ;
    for( int value : vect ){
        ans = ans ^ value ;
    }
    return ans ;
}
int main(){
    cout << singleValue() << endl;
}
*/


/***************************************** */

// linear Search on vectors : 

/*/*#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int> vect={ 1 , 2 , 3 , 4 , 5 , 6 };
    int target = 7 ;
    bool isfind = false ;

    for( int value : vect ){
        if( value == target ){
            cout << " target exist : " << value << endl;
            isfind = true ;
            break ;
        }
    }
    if( isfind == false ){
        cout << " target not exit : " << endl;

    }
    return 0 ;
}*/



/*#include<iostream>
#include<vector>
using namespace std ;
void linearSearch( vector<int>vect , int target ){
    bool isfind = false ;

    for( int value : vect ){
        if( value == target ){
            cout << " target find : " << value << endl;
            isfind = true ;
            break ;
        }
    }
    if( isfind == false ){
        cout << " not found : " << endl;
    }
    
}
int main(){
    vector<int> vect={ 1 , 2 , 3 , 4 , 5 };
    int target  ;

    cout << " enter a number to find in vector : " << endl;
    cin >> target ;

    linearSearch( vect , target ) ;

    return 0 ;
}


*/


/**************************************** */


// Reverse a vector :


/*
#include<iostream>
#include<vector>
using namespace std ;
void reverseVector( vector<int>&vect ){
    int start = 0 , end = vect.size() - 1 ;
    
    for( int value : vect ){
        while( start < end ){
           swap( vect[start] , vect[end]);
            start++ ;
            end-- ;
        }
    }
}
int main(){

    vector<int>vect={ 1 , 2 ,3 , 4 , 5 , 6 , 7 };
     
    reverseVector(vect) ;

    for( int value : vect  ){
        cout << value << " " ;
    }
return 0 ;

}
*/


/************************************* */


// Reverse Vector :

/*
#include<iostream>
#include<vector>
using namespace std ;
void ReverseVector( vector<int>&vect ){
    int start = 0 , end = vect.size() - 1 ;

    for( int value : vect ){
        while ( start < end ){
            swap( vect[ start ] , vect[ end ]) ;
            start++;
            end--;
        }
    }
}
int main(){
    vector<int>vect = { 1 , 2 ,3 , 4 , 5 , 6 , 7 , 8 , 9 };

    ReverseVector( vect );

    for( int value : vect ){
        cout << value << " " ;
    }
    return 0 ;
}
*/

//23/1/2026.
/***************************************************** */



/*#include<iostream>
#include<vector>
using namespace std ;
int func( vector<int>vect){
   int ans = 0 ;
   for( int value : vect ) {
    ans = ans ^ value ;
   }
return ans ;
}
int main(){
    vector<int>vect = { 1 , 2 , 3 , 1 , 2 } ;

   cout <<  " single value in vector is : " << func(vect)  << endl;
}
   */




/*
   #include<iostream>
using namespace std ;
 int fact( int num ){
    int facto = 1 ;
    if( num == 0 ){
        return 1 ;
    }
   
    return  num * fact( num-1 ) ;
 }
 int main(){
    int num = 4 ;
    fact(num);
    return 0 ;
 }
    */


    /************************** */



    #include<iostream>
#include<vector>
using namespace std ;
int name(){
    vector<int>vect1 = { 1 , 2 , 3 }; 
    
    vector<int>vect2(vect1) ;

    for( int value : vect2 ){
        cout << value << endl;
    }
    return 0 ;

}


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



/*#include<iostream>
using namespace std ;
int main(){

    int shelve;
    int books ;
    int totalBooks = 0 ;

    cout << " * enter number of shelve in liberay : " << endl;
    cin >> shelve ;

     for(int i = 1 ; i <= shelve ;i++ ){
        cout << " \n* enter number of books in shelve " << i << "  : " << endl;
         cin >> books ;

         for(int j = 1 ; j <= books ; j++ ){
       cout << " * c++ book " << j << " contains in shelve : " << i << " : " << endl;
      totalBooks++ ;
    }
   } cout << " * ************* : " << endl;
     cout << " ** the total number of books in liberary are : " << totalBooks << endl;
   return 0 ;
}*/



/***************************************** */






/*#include <iostream>
using namespace std;

int main() {
    int temp[3][7];

    string cities[3] = {"Islamabad", "Lahore", "Rawalpindi"};

    
    for (int city = 0; city < 3; city++) {
        cout << "Enter temperatures for " << cities[city] << " (7 days):\n";
        for (int day = 0; day < 7; day++) {
            cin >> temp[city][day];
        }
    }

  
    cout << "\nTemperature Record:\n";
    for (int city = 0; city < 3; city++) {
        cout << cities[city] << ": ";
        for (int day = 0; day < 7; day++) {
            cout << " day " << day+1 << " : " << temp[city][day] << endl;
        }
        cout << endl;
    }

    return 0;
}*/


/****************************************************** */




/*#include<iostream>
using namespace std ;
int main(){
   int hotel[4][6]={{1 , 0 , 1 , 1 , 0 ,0}, {1, 0 , 1 , 0 , 0 ,1 } , {1, 1 , 1 ,1 ,1 ,1} ,{ 1 , 0 , 0 , 0  , 1 , 1}};
   int occupied = 0 ;
   int vacant = 0 ;
   
   

   cout << "*** :  1 will occupied and 0 for vacant : ***" << endl;

   for(int i = 0 ; i < 4 ; i++ ){

      int occupied = 0 ;
      int vacant = 0 ;
      bool fullyOcc = true ;

      cout << "\n ***** floor  "<< i+1 << "***** \n"  << endl;
      

      for(int j = 0 ; j < 6 ; j++ ) {

         cout << " rooms  on " << i+1 << " floor is : *  " << hotel[i][j]  << endl;

         if(hotel[i][j] == 1 ) {
            occupied++ ;
              }else{
                vacant++ ;
                 fullyOcc = false ;
         }
      } 
      
      if(fullyOcc == true ){
            cout << "\n*** floor " << i+1 << " is fully occupied :  ***" << endl;
         }
         cout << " occupid rooms "  << " : " << occupied << endl;
         cout << " vacant rooms  " <<  " : " << vacant << endl;

         
         
   } 
   return 0 ;
}*/



/************************************************************************* */


#include <iostream>
using namespace std;

int main() {
    int days, sessions;
    string participants[7][10];

    cout << "* Enter days * : ";
    cin >> days;
    cout << "* Enter sessions per day * : ";
    cin >> sessions;
    
    for ( int i = 0 ; i < days ;  i++ ) {
        cout << "* Day " << i + 1 << " : " << endl; ;

        for (int j = 0; j < sessions; j++) {
            cout << "* Enter participant name for Session " << j + 1 << " : " << endl ;

            cin >> participants[i][j] ;
        }
    }
    cout << "\n* Conference schedule table * " << endl; ;

    for (int i = 0; i < days; i++) {
        cout << "Day " << i + 1 << ":" << endl;

        for (int j = 0; j < sessions; j++) {
            cout << " * Session " << j + 1 << " : " << participants[i][j] << endl ;
           
        }
    }
    return 0;
}
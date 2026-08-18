//#include<iostream>
//using namespace std ;

/*int main(){
    int marks ;
    cout << " enter your marks :"<< endl;
b    cin >> marks ;

    if (marks >= 80){
        cout << " your grade is A : "<< endl;
    }else if (marks >= 70){
        cout << " your grade is B :"<< endl;
    }else if (marks >= 60){
        cout << " your grade is C :" << endl;
    }else if (marks >= 50){
        cout << " your grade is D :"<< endl;
    } else {
        cout << " you are fail : "<< endl;
    } return 0 ;*/


/*#include<iostream>
using namespace std ;

int main (){
    int score ;
    int sixes ;

    cout << " enter score : " << endl;
    cin >> score ;
    cout << " enter sixes : " << endl;
    cin >> sixes ;

    if(score >= 50 ){
        if(sixes >= 3 ){
            cout << " exelent performence : "<< endl;
        }else if (score >= 50 ){
            if(sixes < 3)
            cout << " good performence : "<< endl;
        }
    }else { 
        cout << " needs improvement : " << endl;
    }
    
    return 0 ;
}*/



/*#include<iostream>
#include <string>
using namespace std;

int main (){
    int age ;
    char licence ;

    cout << " enter your age : "<< endl;
    cin >> age ;
    cout << " do you have driving licence :"<< endl;
    cin >> licence ;
 
    if (age >= 18){
        if( licence=='Y')
        cout <<" you are eligibal to drive :"<< endl;
    }
    else if (age >= 18){
        if (licence == 'N')
        cout << " not allowed , first you need to get a licence :"<< endl;
    } 
    else{ cout << "you are not eligibal to drive :";} 
}*/
/*#include<iostream>
using namespace std ;
int main(){
     long int age ;
     
     cout << sizeof(short int)<< endl;
     return 0;
}*/





//#include<iostream>
//using namespace std ;

// TYPE CONVERSION :
// IMPLICITE :
/* here in this stage we will convert a small data type to big  :  and compiler will do autumatically
this process for us.  FOR EXAMPLE : 

int main(){
   char ch ='A';
   double  grade = ch ;

   cout << grade <<endl;
    

    
    return 0;
}*/




//TYPE CASTING .***************
// EXPLICITE .
/* this is the process which we will  do manually is programmer .
in this case we will convert any premittive  data type to another premittive but mostly we will 
convert big datatype to small : */

/*int main (){
    int grade = 9.9;
    float newgrade =  grade + 0.10;

    cout << newgrade << endl;
    return 0 ;

}*/


// ternary statements : if we write a code in 1 line instead of 15 lines : example : 

/*#include<iostream>
using namespace std ;
int main(){
    int n =6;

    cout << (n>=0? " positive":"negitive");
    return 0;
}*/   

// in this code we used ternary statement instead of (if else if):
  





/*#include<iostream>
using namespace std;

int main(){
    int n ;

    cout << " enter number :" << endl;
    cin>> n ;


    
    cout <<(n >= 0?"the number is positive":"the number is negitive") << endl;
    return 0;
}*/


           //LOOPS*********************
           //WHILE LOOP :


/*#include<iostream>
using namespace std ;

int main(){
    int count = 1;

    while (count <= 5 ){
        cout << count << " ";
        count++ ; 

        cout << endl;
        return 0;
    }


}
#include<iostream>
using namespace std ;
int main (){
  int count   ;

  cout << " enter number : " << endl;
  cin >> count ;

while (count <= 50){
  cout << count << " ";
  count++ ;}

  cout << endl;
    return 0;
    }     */


        //  HOW TO USE GETLINE IN CPP **********

/*#include<iostream>
#include <string>
using namespace std;

int main (){
string name ;

cout << " enter your name :" << endl ;
getline(cin, name) ;

cout << " your name is :"<< name << endl;
return 0 ;

}*/



       //USE OF STRING IN C++ ************



    /*#include<iostream>
    using namespace std ;
    #include<string>

    int main (){
       string name1 ;
       string name2 ;
       
       cout << " enter your name : " << endl;
       cin >> name1>> name2;

       cout << name1 << name2 << endl;
       return 0 ;
    }  */

        
 

              //HOW TO USE CHAR TYPE ************



/*#include<iostream>
using namespace std ;

int main(){
    char a = 'B';
    char b = 'S';
    char c = 'S';
    char d ='E';

   cout <<a<<b<<c<<d<< endl;
}  */





             //FOR LOOP **************



 /*#include<iostream>
 #include <string>
 using namespace std;

 int main (){
    int i  ;
    int sum = 0 ;
    int n  ;

    cout << " enter i =: " << endl;
    cin >> i ;

    cout << " enter your number : " << endl;
    cin >> n ;

    for(int i = 1  ; i <=n ; i++){
        sum +=i ;
    }cout << " sum of your number is  : " << sum << endl;
    return 0;
    
 }*/

/*#include<iostream>
 using namespace std;
  
 int main (){
     int n = 5;
 
    for(int i;i<=n;i++){
        cout << i << " ";
        
    } 
    cout << endl;
    return 0 ;
 }*/
   

             //while loop *************************


/*#include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(i<=20){
        cout << i << endl;
        i++;
    }  cout << endl;
         return 0;}*/
           
           

         //while loop*********** making table;

/*#include<iostream>
using namespace std ;

int main(){
    int i = 1;
    int n ;

    cout << "enter a number :"<< endl;
    cin >> n ;

    while( i <= 10){

        cout << i <<" * "<<n<<" = " << i * n << endl;
        i++ ;
        cout << endl;
    }
return 0;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int sum = 0;
    int i = 1;
    
    for(int i=1;i<=10;i++){
        sum+=i;
        cout <<"sum = + "<< i << "  is :" << sum << endl;
    }return 0;
}
*/



/*#include<iostream>
using namespace std ;
int main(){
    int n  ;
    int sum = 0;

    cout << " enter number : " << endl; 
    cin >> n ;

    for (int i = 1 ; i <= 10 ; i++ ){
        cout << i <<" = " << i << " * " << n << " " << i*n << endl;
        
}return 0 ;
}*/






/*#include<iostream>
using namespace std;
int main(){
    int sum = 0 ;
    int n  = 20 ;
    for(int i = 1 ; i <= n ; i++){
        sum+=i;
        if(i==5){
            break ;
        }
    }cout << " sum : " << sum << endl;
    return 0 ;
}*/

   




/*#include<iostream>
using namespace std ;
int main(){
    int n ;

    while (true){
        cout << " enter a number : " << endl;
        cin >> n ;
         if(n==0){
            cout << " program terminated : " << n << endl;
            break ; 
         }
    }cout << " entered integer : " << n << endl;
    
    return 0 ;
}*/





/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    int count = 0 ; 

    while(true){
        cout << " enter a number : " << endl;
        cin >> n ;

        if (n==0){
            cout << " program terminated :\n" << count << " character you entered : " << endl;
            break ;
         } count++;
         }
        
    cout << " entered number : "  << n << endl ;
    
    return 0 ;
}*/





/*#include<iostream>
using namespace std ;
int main(){
    int count = 0  ;
    int  ch ;

    while (true){
        cout << " enter character to print  : " << endl;
        cin >> ch ;
        if(ch == 0){
            cout << " program terminated : "<< count  <<" you entered digits  : "<< endl;
            break ; 
            
            
            
        } count++;
        cout << " entered character is : " << ch << endl; 
    }
    return 0 ;
}*/








/*#include<iostream>
using namespace std ;
int main (){
    int marks ;
    
    while ( true ){
        cout << " enter your marks to find your grade : " << endl;
        cin >> marks ;


        if (marks >= 80 && marks <= 100){
            cout << " you got A grade : "<< endl ;
        }else if ( marks >= 60 && marks < 80) {
            cout << " you got B grade : " << endl;
        }else if (marks >= 50 && marks < 60){
            cout << " you got C grade : " << endl;
        } else if (marks < 50){
            cout << " you are absolutely fail : " << endl;
        } else { 
            cout << " program terminated : " <<  endl;
            cout << " invalid address please try again  : " << endl;
            
            
            break ;
        }
    } 
return 0 ;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << " enter a number to find 1-n alll ditits fact : " << endl;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++ ){
        cout <<  " cube of  : " << i << " is  " << i*i*i << endl; 
       }cout << endl;
       return 0 ;
}*/




/*#include<iostream>
using namespace std ;
int main (){
    char ch ;
    int count = 0 ; 

    while (true ) {

        cout << " enter a character  : "  << endl;
        cin >> ch ;

        if(ch == 'z'){
            cout << " program terminated : "  << ch <<  endl;
            cout << " you entered characters  : " << count << endl;

            break ;
        } else {
            cout << " you entered character : " << ch << endl;
        }count ++ ;
        
    } return 0 ;
    
}*/






/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    int count = 0 ;



    while (true){

        cout << " enter a number to print : " << endl;
        cin >> n ;

        if (n == 0) {
            cout << " program terminated : \n" << " you entered digits :  " << count  << endl;
            break ;
        }count++ ;
        cout << " you entered number is : " << n << endl;
    }return 0 ;
}


*/


             

/*#include<iostream>
using namespace std ;
int main (){
    int n = 10 ;
    int i =1 ;

    do{
        cout << i << endl;
        i++ ;
    } while ( i <= n ) ;
}*/









/*#include<iostream>
using namespace std ;
int main(){
    int marks;

    while (true){
        cout << " enter your marks to check your grade : " << endl;
        cin >> marks ;

        if(marks >= 80 && marks <= 100){
            cout << " you got grade A : " << endl;
            break;
        }else if (marks >= 60 && marks < 80){
            cout << " you got grade B : " << endl;
            break ;
        }else if ( marks >= 50 && marks < 60) {
            cout << " you got grade C  : "<< endl;
            break ;
        }else if ( marks >=0 && marks < 50){
            cout << " ohoo : you are fail : " << endl;
            break ;
        }else {
            cout << " invalid address \" please try again \" : " << endl;
        }
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 10 ;
    int i = 1 ;

    do{
        cout << i << endl;
        i++ ;
    }while(i <= n);
    
  
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    bool isprime = true ;

    cout << " enter a number to check prime or not : " << endl;
    cin >> n ;

    

    for(int i= 2 ; i <= n-1 ; i++){
       
        if(n%i == 0){
            isprime = false ;
            break ;
            
        }
    }if(isprime==true){
        cout << " its a prime number : " << n << endl;
    } else {
        cout << " its a non prime number : " << endl;

    }return 0 ;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    int count = 0 ;

    for(int i = 0 ; i<=6 ;i++ ){
        cout << " enter numbers :  " << endl;
        cin >> n ;

        cout << " enter numbers : "  << n << endl;
        count +=n ;

    } cout << " its the avg of these numbers : " << count/6 << endl;
    return 0;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    int m ;

    cout << " enter a number to run your  loop till the number  : " << endl;
    cin >> n;
    cout << " enter ,  how many times you print  your work "<< endl;
    cin >> m ;
    
   
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=m ; j++){
            cout << "hashim: " ;

        }cout << endl;
    }
    return 0; 
}*/


//************ square patterns in nested loops : ********** */


/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    int m = 4 ;
    cout << " enter a number : " << endl;
    cin >> n ;
    for(int i = 1 ; i <=n ; i++){
        for(int j=1 ; j<=n; j++){
            cout << j ;
        }cout << endl;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << " enter a number to run your loop : " << endl;
    cin >> n ;
    for(int i =1 ; i <= n ; i++){
        for(int j=1 ; j <= n ;j++ ){
            cout << "*";

        }cout << endl;
    }return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n ;
    
    cout << " enter number of iteration :  " << endl;
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){
        char ch ='A';
        for(int j = 1 ; j<=n ; j++){
            cout   <<  ch ;
            ch = ch + 1 ;
        }cout << endl;
    }return 0 ;
}*/





/*#include<iostream>
using namespace std ;
int main () {
    int n ;
    char ch = 'A';

    cout << " enter the iteration of loop : " << endl;
    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        cout << i <<" : "<<  ch << endl;
        ch = ch +1;
    }return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    int m = 1;
    for(int i = 0 ; i<n ; i++){
        
        for(int j = 0 ; j<n ; j++){
            cout << m << " ";
            m++;
        }cout << endl;
        
    }cout << " number after pattern :  "  << m << endl;
    return 0 ;
}*/


/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    char  ch ='A';
    for(int i = 0 ; i < n ; i++ ) {
        for(int j = 0 ; j < n ; j++){
            cout << ch << " " ; 
            ch = ch + 1 ;
        }cout << endl;

    } cout << " character after pattern is : " << ch << endl;
    return 0 ;


}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    char ch  = 'A';

    for(int i = 1  ; i <= n ; i++){
        for(int j = 1 ; j <= n ;j++){
            cout << ch << " " ;
            ch = ch + 1 ;
        }cout << endl;
    }cout << " its the next value of ch : "  << ch << endl;
     return 0 ; 
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ;j<i+1 ; j++){
            cout << "*" << " " ;
        }cout << endl;
    }return 0 ; 
}*/



/*#include<iostream>
using namespace std ;
int main (){
    int n = 5 ;
    for (int i = 0 ;  i <= n ; i++ ) {
        for( int j = 0 ; j <= i ; j++){
            cout << i+1 ;
        }cout << endl ;
    }cout << endl;
    return 0 ; 
}
*/


/*#include<iostream>
using namespace std ;
int main(){
   
    for(int i = 0 ; i < 4; i++ ){
         char ch = 'A';
        for(int j = 0 ;j < 4; j++){
            cout << ch <<" " ;
            ch = ch +1 ;
            

        }cout << endl;
    }return 0 ;
}
*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    int m =  1 ;
    char ch = 'A' ;

    for(int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < n ; j++  ){
            cout << ch << " " ;
           ch += 1 ;
        }cout << endl;
    }cout << " next value of ch : "  << ch << endl ;
    return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    char ch = 'A';

    for(int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= n ; j++){
            cout << ch  << " " ;
            ch = ch + 1 ;
        }cout << endl;
    }cout << " the valume of ch is now : " << ch  << endl;
    return 0 ;
}*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout << "* " <<" " ;
        }cout << endl;
    }return 0 ;
}

*/



/*#include<iostream>
using namespace std ;
int main(){
    int n=5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << i <<" ";
        }cout << endl;
    }cout << " its the current value of n : " << n << endl;
    return 0 ;
}

*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 4 ;
   
    for(int i = 0 ; i<n ; i++){
         char ch = 'A' ;
        for(int j = 0 ; j < i+1 ; j++ ){
            cout << ch+i << " " ;
            
        }cout <<endl;
    }
     return 0 ;
}
*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for (int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout << i << " " ;
        }cout << endl;
    }return 0 ;
}


*/



/*#include<iostream>
using namespace std ;
int main(){
    char ch = 'A';
    for(int i = 0 ; i < 5 ;i++){
        for(int j = 0 ; j < i+1 ;j++){
            cout << ch << " ";
        }cout << endl;
        ch++ ;
    }return 0;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ; i++){
        for(int j=1 ;j < i+1 ;j++){
            cout << j <<" " ;
        }cout << endl;
    }return 0 ;
}

*/


//*********REVERSE LOOP ********* */



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 0 ; i < n ;i++){
        for(int j = i+1 ; j > 0 ; j-- ){
            cout <<  j << " " ;
        }cout << endl;
    }return 0 ;
}
*/



/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j > 0 ; j--){
            cout << j << " " ;
        }cout << endl;
    }
    return 0 ;
}


*/


/*#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = n ; i >0; i-- ){
        for(int j =i; j > 0 ;j--){
            cout << "*" << " " ; 
        }cout << endl;
    }return 0 ;
}*/




//******* ARRAYS ************ */




/*#include<iostream>
using namespace std ;
int main(){
    int num [5]={12,21,32,12,32};
    cout << num [ 2 ];
    return 0 ;
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int num[8]={12,32,12,32,34,36,76,67};
    
    for(int i = 0 ; i < 8 ;i++){
        cout << num[i ] << " " ;

    }
    return 0;
}*/



/*#include<iostream>
using namespace std  ;
int main(){


    int num[11]={12,3,56,45,23,56,43,23,12,45,65,};
    cout << sizeof(num);

    return 0 ;
}*/



/*#include<iostream>
using namespace std ; 
int main(){
    int n = 5 ;
    int m = 1 ;
    for(int i = 0 ; i  < n ; i++){
        for(int j = 0 ; j < i+1 ; j++){
            cout << m <<" " ;
            m = m+ 1;

        }cout << endl;
    }return */


   /*#include<iostream>
   using namespace std ;
   int main(){

    int choice ; 
     cout << " press s for sunny :  " << endl;
     cout << " press R for rainy : " << endl;
     cout << " press c for cloudy : " << endl;
     cin  >> choice;

     switch(choice)

     case 's':
     system("collour 0B");
     cout << " sunny" ;
     
   }

*/


/*#include<iostream>
using namespace std ;
int mian(){
    int n = 5 ;
    int sum = 0 ;
   

    for(int i = 0 ; i<n ; i++ ){
        cout << " enter subject marks : " << endl;
        cin >> n ;

        cout << " its the subjects marks : " << n << endl;
        sum += n ;
    }cout <<"its the avg of subjects: " << sum/5 << endl;
    return 0 ;
}*/


/********************************************** */



/*#include<iostream>
using namespace std ;
int cal( int a , char b , int c ){
    if(b == '+'){
        cout << a+c << endl;
    } else if ( b == '-'){
        cout << a-c << endl;
    }else if ( b == '*'){
        cout << a*c << endl;
    }else if ( b == '/'){
        cout << a/c << endl;
    }else { 
        cout << " wrong input : " << endl;
    }
}
int main(){
    int a ;
    char b ;
    int c ;

    cout << " enter number 1 : " << endl;
    cin >> a ;
    cout << " enter operation : " << endl;
    cin >> b ;
    cout <<" enter number 2 : " << endl;
    cin >> c ;

    cout << cal(a ,b , c) << endl;
     return 0;
}
     

*/


/********************************************* */






#include <iostream>
using namespace std;

int calculateTotal(int marks[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += marks[i];
    }
    return total;
}

float calculatePercentage(int total, int size)
{
    return (total / (size * 100.0)) * 100;
}

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    int marks[5];
    int size = 5;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    int total = calculateTotal(marks, size);
    float percentage = calculatePercentage(total, size);
    char grade = calculateGrade(percentage);

    cout << "\nTotal Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
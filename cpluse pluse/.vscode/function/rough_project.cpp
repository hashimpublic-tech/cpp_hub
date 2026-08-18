#include<iostream> 
using namespace std ;

void adminLogIn(){

    string adminUser = "hashim";
    string adminPass = "67360" ;
    string  password, username , name , Useremail ;
    int number , choice , attempts = 0 ;

    cout << ": === Admin Log In === :" << endl;
    while(attempts < 3 ) {
        system( " color 0B");
        
        cout << " *Enter username to Log In : " << endl;
        getline( cin , username );

        cout << " *Enter password to Log In : " << endl;
        getline( cin , password ) ;

        if( username == "hashim" && adminPass == "67360")
        {
            cout << "\n*** :  Successfully Log In : ***" << endl;
            cout << " \n\n " ;
            
            cout << "********************************\n";
            cout << " 1 . :--- for account setting ---:\n" ;
            cout << " 2 . :---Account managing ----: \n" ;
            cout << " ********************************" << endl; ;

            cout << " \n == Enter your chaoice == " ;
            cin >> choice ;
            cout << "\n" ;


            if( choice == 1 ){
           
            do{
                cout << "---------------------------------\n" ;
                cout << " 1. = Create New Account ---: \n" ;
                cout << " 2. = View Account Detaile ---: \n";
                cout << " 3. = Exite ---: \n ";
                cout << "---------------------------------\n" ;

                cout << "\n  = Enter choice ---: " ;
                cin >> choice ;
                cin.ignore();

                if( choice == 1)
                {
                    cout << "\n";
                    cout << " = Lets Create New Account =\n\n " ;
                    cout << " Enter name : " << endl;
                    getline( cin , name) ;
                    
                    cout << " Enter Email Or Phone Number : " << endl;
                    cin >> Useremail ;
                    cin.ignore();


                    cout << " Enter Password , ' Use Strong Pass ' :   " << endl;
                    getline(cin , password );
                   

                    cout << " *** Account has been succesfully created : *** \n " ;
                   
                    break ;

                } else if ( choice == 2 )
                {
                    cout << " * Lets See Account Detail ---: " << endl;
                    cout << " \n " ;
                    cout << " * Your Account Username Is ---: " << adminUser << endl;
                    cout << " * Your Account password Is ---: " << adminPass << endl;
                    break ;

                } else if ( choice == 3 )
                {
                    cout << " ***=Exit=*** \n";
                     
                } else {
                    cout << " Wrong Input : \n ";
                    
                } 
                
            }
            while( choice != 3  );
            return ; 

            } else if ( choice == 2 ){

                cout << " * 1 . Deposite money \n" ;
                cout << " * 2 . Withdraw money \n" ;
                cout << " * 3 . Check Balance  \n" ;

                cout << ": == Enter choice == :\n" ;
                cin  >>  choice ;

                if( choice == 1 )
                {
                    cout << " * Enter deposite money " << endl;
                    cin >> 
                }

            }

        } else{
            attempts++ ;
            cout <<" Invalid Input , Attempts Left : " << 3 - attempts << endl;
        }
    }
    cout << " Because Of Too Many Attempts , Account Is Blocked : " << endl; 
    
}
void userLogIn()
{
    string name , username = "hashimkhan123" ;
    string  password = "hashimkhan" ;
    string  email = "hk4838033@gmail.com"  ;
    int number , choice , attempts = 0 ;

    cout << " === Log In user ===  " << endl;

    while( attempts < 5  )
    {
        cout << " Enter Number To log In : " << endl ;
        cin >> number ;
        cin.ignore() ;

        cout << " Enter Password : " << endl;
        getline( cin , password ) ;

        if( number == 33399 && password == "hashim")
        {

        cout << " \n*** Your Account  Is Successfully Log In :***\n\n " << endl;



        

        do{
            cout << " 1. Create new Account : \n " ;
             cout << " 2. See Account Details  : \n " ;
              cout << " 3. Log Out Account : \n " ;
               cout << " 4. =*** Exite ***= : \n " ;
               cout << "\n Enter Option To continue : " << endl;
               cin >> choice ;

               if( choice == 1 ) 
               {
                cout << "  = Sitting = \n " ;
                cout << " Lets Create New Account : \n " ;
                cout << " Enter Name  : " << endl;
                getline( cin , name ) ;
                cin.ignore();

                cout << " Enter username : " << endl;
                cin >> username ;
                getline( cin , username ) ; 
                cin.ignore();

                cout << " Enter Number or Email :  " << endl;
                cin >> email ;
                cin.ignore() ;

                cout << " Enter Password : " << endl;
                getline( cin , password ) ;
                cin.ignore();

                cout << " **==Account is Created ==** \n " ;
                break;
                

               } else if ( choice == 2 )
               {
                cout << "\n : == Account Privacy == : \n\n " ;
                cout << " * Account Email is : " << email << endl ;
                cout << " * Account username is  : " << username << endl;
                cout << " * Password is : " << password  << "\n " << endl;
                break ;

               } else if ( choice == 3 )
               {
                char ch ;
                cout << " * Do You Want To Log Out Account ? : \n " ;
                cout << "* Y for Yes \n * N for No \n" ;
                cout << "\n Enter choice : " << endl;
                cin >> ch ;

                if( ch== 'Y')
                {
                    cout << "\n* : Account log out * \n\n";
                } else if ( ch == 'N') 
                {
                    cout << "\n * Log Out Cancel *  \n\n "  ; 
                } else {
                    cout << " * Invalid Input ! * \n " ; 
                }
                break;
               } else if( choice == 4 )
               {
                cout << " *** = Exite = *** \n " ;
                break;
               }

        } while ( choice != 5 );
        return;
    } else {
        attempts++ ;
        cout << " Invalid Input , Attempts Left , Try Again  :  " << ( 5 - attempts ) <<endl;
    }
    
     }
     cout << " * becouse of too many attempts , account is blocked for 10 minutes " ;
}

double depositeMoney( double balance , double deposite )
{
    int totalbalance = balance + deposite ;
    return totalbalance ;
}

double withdrawAmount( double balance , double withdraw )
{
    int currentBalance ;
    if( withdraw >= 0 && withdraw <= balance )
    {
     currentBalance = balance - withdraw ;

     cout << " * Your current balance is :  " ;
     
     return currentBalance ;

    } else{
        cout << " Insuffecient balance , Enter balance in account balance range  : " ;
        return balance ;
    }
}

double checkBalance( double balance )
{
    return balance ;
}


int main(){
    char logInPage ;
    system(" color 1B") ;
    cout << " WellCome Sir !\n";
   cout << " * Log In Your Account with Full Of Trust : " << endl;
   cout << " * A ,  For admin log in . \n * U , For User log in . " << endl;
   cout << " Write Your choice here : " ;
   cin >> logInPage ;
   cin.ignore();
   cout << " \n\n " ;


   if( logInPage == 'A')
   {
    
    adminLogIn();
   } else if ( logInPage == 'U')
   {
    userLogIn();
   } else{
    cout <<" * invalid input : try again : " << endl;
   }

    return 0 ;
}
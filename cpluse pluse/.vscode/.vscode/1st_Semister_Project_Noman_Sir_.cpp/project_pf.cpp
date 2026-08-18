#include<iostream> 
#include<iomanip>
#include<string>
#include<windows.h>
using namespace std ;

int depositeCounts = 0 ;
int withdrawCounts = 0 ;             // global variables :
int accountCounts = 0 ;

double depositeMoney( double balance , double deposite ) ;

double withdrawAmount( double balance , double withdraw );           // functions

double checkBalance( double balance ) ;

void adminLogIn(){
    system(" cls ") ;

string  adminUser = "zeeshan" ;
string adminPass = "hashim";
string  password , name , Useremail , newPass , confirmPass ;       // variables :
int number , choice , menuchoice , attempts = 0 ;

cout << ": === Admin Log In === :" << endl;

    while( attempts < 3) 
    {
    
    system( " color 0B");
        
    cout << " *=Enter username to Log In : ";
    getline( cin , adminUser );

    cout << " *=Enter password to Log In : ";
    getline( cin , adminPass ) ;
    system( " cls ") ;

        if( adminUser == "zeeshan" && adminPass == "hashim")
        {
        system("cls");
    
        cout << "\n*** :=  Successfully Log In =: ***" << endl;
        cout << " \n\n " ;
            
        cout << "********************************\n";
        cout << " 1 . for ---: account setting ---:\n" ;
        cout << " 2 . for ---: Account managing ----: \n" ;
        cout << " ********************************" << endl; 

        cout << " \n == Enter your chaoice == " ;
        cin >> choice ;
        cout << "\n" ;


        if( choice == 1 ){
           
            do{
                system( " cls ") ;
                cout << "---------------------------------\n" ;
                cout  << setw(10) << "\n    *-- setting Menu --* \n";
                cout <<setw(10) << " 1. = Create New Account ---:* \n" ;
                cout <<setw(10) << " 2. = Change Password ---:* \n";
                cout <<setw(10) << " 3.     = View Account Detaile ---:* \n";
                cout << " 4. = Exite ---: \n ";
                cout << "---------------------------------\n" ;

                cout << "\n  = Enter choice ---: " ;

                cin >> menuchoice ;
                cin.ignore();

                if( menuchoice == 1)
                {
                    cout << "\n";

                    cout << " = Lets Create New Account = \n\n" ;
                    cout << " *-- Enter name : " ;
                    getline( cin , name) ;
                    
                    cout << " *-- Enter Email Or Phone Number : " ;
                    cin >> Useremail ;
                    cin.ignore();


                    cout << " *-- Enter Password , ' Use a Strong Pass ' : " ;
                    getline(cin , password );
                    system("cls");

                    cout << "\n ***-- Account has been succesfully created : *** \n" ;
                    accountCounts++ ;
                    cout << " ***-- accounts created : " << accountCounts << endl;
                   
                    

                } else if( menuchoice == 2 )
                {

                    cout << " *=== change password ===* \n\n " ;

                    cout << " *= Enter Current password --: ";
                    getline( cin , adminPass ) ;
                  

                    cout << " *= Enter New  password --: ";
                    getline( cin , newPass ) ;
               
                    cout << " *= Confirm password --: "; // a condition to to check password is same or not :
                    getline( cin , confirmPass );

                    if( adminPass == "hashim" && newPass == confirmPass )
                    {
                    system("cls");
                    cout << "\n : --- password is changed --- : \n" ;
                    cout << " *= New password is : * " << confirmPass << " *: \n\n"; 
                    }
                    else {
                    cout << " : # wrong password , plz Inter correct password : #" << endl;             
                    }
                 
                } else if ( menuchoice == 3 )
                {
                    cout << " * Lets See Account Detail ---: " << endl;
                    cout << " \n " ;
                    cout << " *= Your Account Username Is ---: " << adminUser << endl;
                    cout << " *= Your Account password Is ---: " << adminPass << endl;
                   

                } else if ( menuchoice == 4 )
                {
                    system( " color 0A ");
                    cout << " ***=Exit=*** \n";
                    cout << " *-- Thanks For Visiting --* \n " ;
                    break ;
                     
                } else {
                    cout << " Wrong Input : \n ";                  
                } 

            }while( menuchoice != 4  );       // the loop will run until user dont enter 4 for exit  : 
            return ; 

        } else if ( choice == 2 ){

            int balance = 2500 ;
            int deposite ;
            int withdraw ;

            do{
            system("cls");
            cout << "\n       *---MENU---*\n";
            cout << " * 1 . Deposite money \n" ;
            cout << " * 2 . Withdraw money \n" ;
            cout << " * 3 . Check Balance  \n" ;
            cout << " * 4 . :--Exite--: \n " ;

            cout << ": == Enter choice == :\n" ;
            cin  >>  menuchoice ;
            cout<< "\n";

                
            if( menuchoice == 1 )
            {
                system("cls");
                    
                cout << " ** Your Current balance is : " << balance << endl;
                cout << " \n " ;
                cout << " *- Enter deposite amount : " ;
                cin >> deposite ;
                    
                cout<< "\n";
                cout << "\n ** deposite amount is : " << deposite << endl;
                cout << " ** total balance : " <<  depositeMoney( balance , deposite ) << endl;
                cout << " == total deposits are : " << depositeCounts <<" . "<< endl;
                cout << "\n --= Thanks For Visiting =-- * : \n" << endl;

            } else if ( menuchoice == 2 )
            {
                system("cls");

                cout << " ** Your Total balance is : " << balance << endl;
                cout << " \n " ;
                cout << " *- enter withdraw amount  : " ;
                cin >> withdraw ;
    
                cout << " \n ";
                cout << withdrawAmount( balance , withdraw ) << endl;
                cout << " total withdraws are :  " << withdrawCounts <<" ."<< endl;
                cout << "\n --= Thanks For Visiting =-- * : \n" << endl;

            } else if ( menuchoice == 3 )
            {
                system("cls");
                cout << " ** Your current balance is : " << checkBalance( balance )<< "\n\n";
                cout << " --= Thanks For Visiting =-- * : \n" << endl;
            } 
            else if ( menuchoice == 4 )
            {
                system( " color 0A ");
                cout << " :-- Exite --: \n ";
                cout << " *-- Thanks For Visiting --* \n " ;
                cout << " \n ";
                break;

            }else 
            {
                cout << "\n ! -= Invalid input :-=# \n" << endl;
            } 
               
        } while ( choice != 4 ) ;
        return ;

        } else {
        cout << " ! wrong input : " << endl;
    }
    }
        
    else {
    system( " color 0C ") ;
    attempts++ ;
    cout << "\n *=* Wrong address , attempts left : " << ( 3 - attempts ) << endl;
    }
    }
    cout << " *-- Becouse of too many wrong attempts , account is block --* : \n\n" ;

}

void userLogIn()
{
system(" color 0B ") ;
string name , username , password , email , newPass , confirmPass  ;
int number , choice , attempts = 0 ;
int menuchoice ;

cout << " 1. for --- : Sign Up * " << endl ;
cout << "  2. for ---:  Sign In * " << endl ;
cout << " Enter choice : " << endl;
cin >> choice ;
system("cls");
  

   

    
    if( choice == 1 )
    {
        cout << " *:--- Sign Up User ---:* \n ";
        cout << " *** Wellcome Sir ***\n " ;
        cout << " Lets create a new account : \n" ;
        cout << " ------------------------- : \n" ;

        cout << " *- Enter Name : " ;
        getline( cin , name ) ;
        cin.ignore();
        

        cout << " *- Enter Username : " ;
        getline( cin , username ) ;
        cin.ignore();
        
        cout << " *- Enter Number : " ;
        getline(cin , email ) ;
        cin.ignore();
        

        cout << " *- Enter Password , Use a strong password : " ;
        getline( cin , password ) ;
        cin.ignore();
        
        system("cls");

        cout << "\n :--- Succesfully Created ---:*\n";
        cout << " *-- Thanks For Visiting --* \n " ;
        

    } else if ( choice == 2)
    {

        cout << " === Sign In user ===  " << endl; ;

        cout << " *- Enter Account Number  : " ;
        cin >> number ;
        
        cout << " *- Enter Password : " ;
        cin >> password ;

        system("cls");
        
        cout << " \n***  Successfully Log In :***\n\n " << endl;
        cout << " \n\n " ;
           
        cout << "---------------------------------\n" ;
        cout << " 1 . for ---: account setting ---:\n" ;
        cout << " 2 . for ---: Account managing ----: \n" ;
        cout << "---------------------------------\n" ;
           

        cout << " \n == Enter your chaoice == " ;
        cin >> choice ;  

        system("cls");
             
            

            if( choice == 1 )
            {

        do
        {
            cout << "---------------------------------\n" ;
            cout << "\n        *-- setting Menu --* \n";
            cout << "  * 1. = Create new Account = : \n " ;
            cout << " * 2. = Change Password = : \n " ; 
            cout << " * 3. = See Account Details =  : \n " ;           
            cout << " * 4. = Log Out Account = : \n " ;
            cout << " * 5. =*** Exite ***= : \n " ;
            cout << "---------------------------------\n" ;

            cout << "\n Enter Option To continue : " << endl;
            cin >> menuchoice  ;
            system("cls");

               if( menuchoice == 1 ) 
               {
                cout << "  = Sitting = \n " ;
                cout << " Lets Create New Account : \n\n" ;

                cout << " *- Enter userName  : " ;
                cin >> username ;
                
                cout << " *- Enter Number or Email : " ;
                cin >> email ;

                cout << " *- Enter Password : " ;
                cin >> password ;

                system("cls");

                accountCounts++ ;
                cout << "\n **==Account is Created ==** \n " ;
                cout << " **==total accounts created : " << accountCounts << endl;
                cout << " *-- Thanks For Visiting --* \n " ;
                
                
                

               } else if ( menuchoice == 2 )
               {
                cout << " *=== change password ===* \n\n" ;

                cout << " *- Enter Current password --: ";
                cin >> password ;
                
                cout << " *- Enter New  password --: ";
                cin >> newPass ;

                cout << " *- Confirm password --: "; 
                cin >> confirmPass ;
                  
                    if( newPass == confirmPass ) // a condition to to check password is same or not :
                    {
                    cout << "\n : --- password is changed --- : \n" ;
                    cout << " *- New password is : " << confirmPass << " : \n\n";
                    }
                    else {
                    cout << " ! *- wrong password , plz Inter correct password -*" << endl;                        
                    }
                    
               
                
                } else if ( menuchoice== 3 )
                {
                cout << "\n : == Account Privacy == : \n\n " ;

                cout << " *- Account Email is := " << number << endl ;
                cout << " *- Password is := " << password  << "\n " << endl;
                //cout << " * = account balance = * : " << balance << endl;
                
                
                

                } else if ( menuchoice == 4 )
                {
                system("cls");
                char ch ;
                cout << " *= Do You Want To Log Out Account ? : \n " ;
                cout << "* Y for Yes \n* N for No \n" ;
                cout << "\n Enter choice : " << endl;
                cin >> ch ;

                    if( ch== 'Y')
                    {
                    cout << "\n* : Account log out * \n\n";
                    cout << " *-- Thanks For Visiting --* \n " ;
                    }
                    else if ( ch == 'N') 
                    {
                    cout << "\n * Log Out Cancel *  \n\n "  ; 
                    }
                    else {
                    cout << " * ! Invalid Input ! * \n " ; 
                    }
                    
               
                } 
                else if( menuchoice == 5 )
                {
                system("cls");
                system( " color 0A ");
                cout << " *** = Exite = *** \n " ;
                cout << " *-- Thanks For Visiting --* \n " ;

                break;
                }
    
        }while ( menuchoice != 5 );
        return; 

        } else if ( choice == 2 )
        {

        int balance = 2500 ;
        double deposite ;
        double withdraw ;

       do{
            system("cls");
            cout << "\n       *---MENU---*\n";
            cout << " * 1 . Deposite money \n" ;
            cout << " * 2 . Withdraw money \n" ;
            cout << " * 3 . Check Balance  \n" ;
            cout << " * 4 . :--Exite--: \n " ;

            cout << ": == Enter choice == :\n" ;
            cin  >>  menuchoice ;
            cout<< "\n";

                
                if( menuchoice == 1 )
                {
                    system("cls");
                    
                cout << " ** Your Current balance is : " << balance << endl;
                cout << " \n " ;

                cout << " *- Enter deposite money : " ;
                cin >> deposite ;

                    cout << "\n ** deposite amount  : " << deposite << endl;
                    cout << " ** total balance : " <<  depositeMoney( balance , deposite ) << endl;
                    cout << " *** total deposites are : " << depositeCounts << endl;
                    cout << " --= Thanks For Visiting =-- * : \n" << endl;
                    
                } else if ( menuchoice == 2 )
                {

                system("cls");
                cout << " ** Your Total balance is : " << balance << endl;
                cout << " \n " ;

                cout << " \n " ;
                cout << " *- enter withdraw amount  : " ;
                cin >> withdraw ;


                    cout << withdrawAmount( balance , withdraw ) << endl;
                    cout << " *** total withdraws are  : " << withdrawCounts << endl;
                    cout << " --= Thanks For Visiting =-- * : \n" << endl;
                   

                } else if ( menuchoice == 3 )
                {
                    cout << " Your current balance is : " << checkBalance( balance )<< "\n\n";
                    cout << " --= Thanks For Visiting =-- * : \n" << endl;
                    
                } 
                else if ( menuchoice == 4 )
                {
                    system( " color 0A ");
                    cout << " :-- Exite --: \n ";
                    cout << " *-- Thanks For Visiting --* \n " ;
                    cout << " \n ";
                  

                }else {

                    cout << " Invalid input : " << endl;

                } 
               
        } while ( menuchoice != 4 ) ; // the loop will run untill user don't press 4 :
        return ;
       
    }
}
}

double depositeMoney(  double balance , double deposite )
{
    if( deposite > 0 )
    {
    depositeCounts++ ;

    double totalBalance = balance + deposite ;

    return totalBalance ;
    } 
    else 
    {
    cout << " *= Invalid amount =* " << endl;
    }
}

double withdrawAmount( double balance , double withdraw )
{
    int currentBalance ;

    if( withdraw >= 0 && withdraw <= balance )
    {
    withdrawCounts++;
    currentBalance = balance - withdraw ;

    cout << " *** Withdarw Successful : " << withdraw << endl;
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

    int logInPage ;
  
   system(" color 1B ") ;
   
   cout << "     ============== \n";
   cout << "     WellCome Sir !\n";
   cout << "     ============== \n\n";
   cout << " *--- Log In Your Account ---: " << endl;
   cout << " * '1'  For admin log in " << endl;
   cout << " * '2'  For User log in " << endl;

   cout << " Write Your choice here : " ;
   cin >> logInPage ;
   cin.ignore(); 
   system("cls");

   cout << " \n\n " ;

   if( logInPage == 1)
   { 
    adminLogIn();
   } 
   else if ( logInPage == 2)
   {
    userLogIn();
   }
    else{
    cout <<" *- invalid input : try again : " << endl;
    cout << "\n";
   }

    return 0 ;
}
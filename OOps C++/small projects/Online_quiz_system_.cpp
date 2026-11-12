#include<iostream>
using namespace std ;
class Quiz{
    private:
    string questions[3]={
        "who was the first prime ministre of pakistan",
        "which one is the capital of pakistan",
        "who is the current army cheip of pakistan"
    };
    string answers[3][4]={
        "A.Alam Iqbal","B.Bacha Khan","C.Quid e Azam","D.Liaqat ALi Khan",
        "A.Islamabad","B.Lahore","C.Karachi","D.Pindi",
        "A.Hashim khan","B.Asim Munir","C.Zeeshan Khan","D.Huzaifa"};
        
        char ans[3] ={'D','A','B'};
        int points = 0 ;

        public:
        void userAnswer(){
            char choice ;
            cout << "Start The Exam Time \n";
            for(int i=0 ; i<3; i++){
                cout << "*Question " << i+1 << "\n\n"; 
                cout << "**";
                cout << questions[i] << " A/B/C/D ?";
                
                cout << "\n";
                for( int j=0 ; j<4 ; j++){
                    
                    cout  << answers[i][j] << "\n" ;
                    
                }
                cout << "\nEnter Your Choie here : " ;
                cin >> choice ;

                system("cls");

            if(choice == ans[i]){
                cout << "\nCorrect ! \n\n";
                points++;
            } else {
                cout << "\nWrong !\n\n";
            }
            }
            
            cout << "Total points : " << points << endl ;
        }
};
int main(){
    Quiz q ;
    q.userAnswer();

    return 0 ;
}
// 6️⃣ Cricket Player Record
// Create a structure Player with:
// name
// matches
// runs

// Task:
// Input 3 players.
// Display the player with highest runs.


#include<iostream>
using namespace std ;
struct player{
    string playerName ;
    int playerMatches ;
    int playerScore ;
};
void function(player p1[]){
    string highName ;
    int highMatches ;
    int highScore = 0 ;

    cout << ": Player with high score : " << endl;
    for( int i=0 ; i<3 ; i++ ){

        if(p1[i].playerScore > highScore ){
            highScore = p1[i].playerScore ;
            highName = p1[i].playerName ;
            highMatches = p1[i].playerMatches ;
        }
    }
    cout << "Name : " << highName << endl;
    cout << "Matches : " << highMatches << endl ;
    cout << "Score : " << highScore << endl; 
}
int main(){
    player p1[3] ;
    cout << "\n: Enter Data For Player :\n" << endl;

    for( int j=0 ; j<3 ; j++ ){
        cout << "Player " << j+1 << " Data " << endl;

        cout << "Enter player Name : " ;
        getline( cin >> ws , p1[j].playerName );

        cout << "Enter player Matches : " ;
        cin >> p1[j].playerMatches ;

        cout << "Enter player Score : " ;
        cin >> p1[j].playerScore ;

        system("cls") ;
    }

    function(p1);

    return 0 ;

}
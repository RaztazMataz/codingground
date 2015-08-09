#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Random(int low, int high);

int main()
{
    srand( (unsigned int) time(0) ); 
    
    float playersChips = 1000;
    int gameStartChoice = 0;
    int playerBet = 0;
    
    while(gameStartChoice != 2){

        cout << "Player's chips: $" << playersChips << endl;
        cout << "1) Play Slot." << endl; cout << "2) Exit." << endl;
        cin >> gameStartChoice;

        switch(gameStartChoice){
    
            case 1:{
    
                while(true){
                    cout << "Please enter your bet amount." << endl;
                    cin >> playerBet;
    
                    if(playerBet > playersChips || playerBet < 0){
                        cout << "Please enter a valid bet amount" << endl;
                    } else {
                        break;
                    }
                }
       
                int wheel1 = Random(2,7);
                int wheel2 = Random(2,7);
                int wheel3 = Random(2,7);
                cout << wheel1 << "     " << wheel2 << "     " << wheel3 << endl;
            }
            
            
            case 2:
                break;
            
            default:
                break;
        }
    }
    

   return 0;
}

int Random(int low, int high){
    return low + rand() % (high - low);
    }




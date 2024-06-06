#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
      cout<<"Welcome to Number Guessing Game"<<endl;
      cout<<"In this game you have to guess a secret number"<<endl;
      cout<<"You will be provided with fix number of chances to guess the number"<<endl;
      cout<<"you can increase or decrese number of choices based on the dificulty level you choose"<<endl;

      int difficulty_level;
      cout<<"Choose the difficulty level of the game"<<endl;
      cout<<" enter 1 (easy level)for 10 chances"<<endl;
      cout<<" enter 2 (medium level)for 7 chances"<<endl;
      cout<<" enter 3 (difficult level)for 4 chances"<<endl;
      cout<<"enter 0 to quit the game"<<endl;

      cin>>difficulty_level;

        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int Guess;

if(difficulty_level==1){
    int choice_left =10;

    for(int i=0;i<10;i++){
    cout<<"enter your Guess Number"<<endl;
        cin>>Guess;
       
        if(Guess ==secretNumber){
         cout<<"Correct Guess,You won the game."<<endl;
         break;
            }
        else{
            if(secretNumber>Guess){
                    cout<<"the number you guessed is less than secretnumber"<<endl;
            }
            else{
                    cout<<"the number you guessed is greter than than secretnumber"<<endl;
            }
            }
            if(choice_left!=0)
            cout<<"Number of Chances Left "<<--choice_left<<endl;
            if(choice_left==0){
                cout<<"Game End,No more chances left"<<endl;
                break;
            }
        }
      }


      if(difficulty_level==2){
    int choice_left =7;

    for(int i=0;i<7;i++){
    cout<<"enter your Guess Number"<<endl;
        cin>>Guess;
      
        if(Guess ==secretNumber){
         cout<<"Correct Guess,You won the game."<<endl;
         break;
            }
        else{
            if(secretNumber>Guess){
                    cout<<"the number you guessed is less than secretnumber"<<endl;
            }
            else{
                    cout<<"the number you guessed is greter than than secretnumber"<<endl;
            }
            }
            if(choice_left!=0)
            cout<<"Number of Chances Left "<<--choice_left<<endl;
            if(choice_left==0){
                cout<<"Game End,No more chances left"<<endl;
                break;
            }
        }
      }
      

      
      if(difficulty_level==3){
    int choice_left =4;

    for(int i=0;i<4;i++){
    cout<<"enter your Guess Number"<<endl;
        cin>>Guess;
        if(Guess ==secretNumber){
         cout<<"Correct Guess,You won the game."<<endl;
         break;
            }
        else{
            if(secretNumber>Guess){
                    cout<<"the number you guessed is less than secretnumber"<<endl;
            }
            else{
                    cout<<"the number you guessed is greter than than secretnumber"<<endl;
            }
            }
            if(choice_left!=0)
            cout<<"Number of chances Left "<<--choice_left<<endl;
            if(choice_left==0){
                cout<<"Game End,No more chances left"<<endl;
                break;
            }
        }
        }
      
 if(difficulty_level==0){
    cout<<"You quit the game"<<endl;
 }
      
return 0;
}
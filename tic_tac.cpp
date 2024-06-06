#include<iostream>
using namespace std;

void draw_Board(char Board[3][3])
{
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<Board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool win(char board[3][3],char player){

if((board[0][2]==player)&&(board[1][1]==player)&&(board[2][0]==player))
        return true;
    
    //diagonal check
if((board[0][0]==player)&&(board[1][1]==player)&&(board[2][2]==player))
    return true;
    
 for(int i=0;i<3;i++){
    if((board[i][0]==player)&&(board[i][1]==player)&&(board[i][2]==player))
    return true;
  
 if((board[0][i]==player)&&(board[1][i]==player)&&(board[2][i]==player))
    return true;    
}
return false;
}

int main(){
     int play_Again;
    do{
    cout<<"The Tic-Tac-Toe started"<<endl;
            char  board[3][3]={{'-','-','-'},
                   {'-','-','-'},
                   {'-','-','-'}};

  char player ='X';
   int row,col,turn;
   for(turn=0;turn<9;turn++){

    draw_Board(board);
             while(true){
                cout<<"Player "<<player<<" turn."<<endl;
                cout<<"enter value of row(0-2) and value of column(0-2)"<<endl;
               
                cin>>row>>col;
                if(board[row][col] !='-' || row>2 ||row<0 || col>2 || col<0){
                             cout<<"invalid"<<endl;
                }
                else{
                    break;
             }  
             }
               board[row][col] =player;
             
          //check winning 
          if(win(board,player)){
            draw_Board(board);
            cout<<"winner of the game is "<<player<<endl;
            cout<<"want to play Again"<<endl;
            cout<<"enter 1 to play again or 0 to stop"<<endl;
            cin>>play_Again;
            break;
          }
       else{
            cout<<"Game State:Ongoing"<<endl;
          }
             
          
           //now switching beetween the players
           player = (player=='X')?'o':'X';
   }

   draw_Board(board);
   
    if(turn ==9 && ((!win(board,'X') || (!win(board,'o'))))){
          cout<<"The game is draw, nobody won the game"<<endl;
          cout<<"want to play Again"<<endl;
          cout<<"enter 1 to play again or 0 to stop"<<endl;
          cin>>play_Again;
    }
         }while(play_Again==1);
    return 0;

}

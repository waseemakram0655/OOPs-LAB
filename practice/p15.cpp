// Create a class “player” consisting of following members with appropriate datatypes:
//  ballScores[12]: denotes an array wherein the scores corresponding to each ball are stored.
//  PlayerName: representing the player name.
//  TotalScore: containing count total score for each player.
// 2. Create a class “Game” consisting of following members with appropriate datatypes:
//  playGame(Player& player): each player gets their turn to face the 12 balls. The function prompts the
// player to enter the score for each ball.
//  ValidateScore(): if the score entered is not between 0 and 6 (inclusive), it won't be considered, but the
// ball will still be recorded.
//  findWinner(Player& player1, Player& player2): the winner is determined based on the total scores.
//  displayMatchScoreboard(Player& player1, Player& player2): This function displays the detailed
// summary of the match. In summary, each player's name and their score against each ball should be in
// ascending manner with average score and total score for each player, giving a comprehensive overview
// of their performance.
#include<iostream>
using namespace std;
class player{
int ballscored[12];
int totalscore=0;
string name;  
public:
player(string n):name(n){}
void setter(int index,int score){
  if(score<=6 && score>=0){ballscored[index]=score;
  totalscore+=ballscored[index];}else ballscored[index]=score;
}
int gettotal(){return totalscore;}
};

class game{
  public:
  void playgame(player& play){
    
    for(int i=0;i<12;i++){
      int score;
      cout<<"Enter the score for ball "<<i+1<<endl;
      cin>>score;
      play.setter(i,score);
    }
  }
  void findWinner(player& play1, player& play2){
if(play1.gettotal()>play2.gettotal()){cout<<"Winner is player 1 with score "<<play1.gettotal()<<"and loser is player 2 with score"<<play2.gettotal()<<endl;}else{cout<<"Winner is player  with score "<<play2.gettotal()<<"and loser is player 1 with score"<<play1.gettotal()<<endl;}
  }
};
int main(){
  player p1("waseem"),p2("rafay");
game g1;
g1.playgame(p1);
g1.playgame(p2);
g1.findWinner(p1,p2);
}
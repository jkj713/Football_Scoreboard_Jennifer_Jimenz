//Jennifer Jimenez
//Football Scoreboard
//Dr_T
#include <iostream>
#include <unistd.h>
#include <string>
#include <iomanip>

using namespace std;

class Team
{
  private:
    int score;
    string name;
    string t1Coach;
    string t2Coach;
    string t1City;
    string t2City;
    bool home;
    int timeOut;
  public:
    Team()
    {
      score = 0;
      timeOut = 3; 
      t1Coach = "Mike McCarthy";
      t2Coach = "Matt LaFleur";
      t1City = "Dallas";
      t2City = "Green Bay";
    }
    void setScore(int s) {score = s;}
    void setTimeOut(int to) {timeOut = to;}
    void setName(string n) {name = n;}
    void setCoach(string t1c) {t1Coach = t1c;}
    void setCoach(string t2c) {t2Coach = t2c;}
    void setCity(string c1) {t1City = c1;}
    void setCity(string c2) {t2City = c2;}
    double getScore() const {return score;}
    double getTimeOut() const {return timeOut;}
    string getName() const {return name;}
    string getCoach() const {return t2Coach;}
    string getCoach() const {return t1Coach;}
    string getCity() const {return t1City;}
    string getCity() const {return t2City;}

    
};
class Scoreboard
{
  private: 
    Team team1;
    Team team2;
    int down;
    int quarter;
    bool poss;
  public:
  Scoreboard()
  {
    quarter = 1;
    poss = true;
    down = 1;
  
  }
  //setters and getters
    void setPoss(bool po) {poss = po;}
    void setTeam1(Team t1) {team1 = "Dallas Cowboys";}
    void setTeam2(Team t2) {team2 = "Green Bay Packers";}
    void setDown(int d) {down = d;}
    void setQuarter(int q) {quarter = q;}
    bool getPoss() const {return poss;}
    Team getTeam1() const {return team1;}
    Team getTeam2() const {return team2;}
    int getDown() const {return down;}
    int getQuarter() const {return quarter;}
    void showScoreboard()
    {
      cout  << team1.getName() << "\t\t\t" << team2.getName() << endl;
        cout << "Team 1 Name: " << team1.getName() << endl;
        cout << "Team 1 Score: " << team1.getScore() << endl;
        cout << "Team 1 Coach: " << team1.getCoach() << endl;
        cout << "Team 2 Name: " << team2.getName() << endl;
        cout << "Team 2 Score: " << team2.getScore() << endl;
        cout << "Team 2 Coach: " << team2.getCoach() << endl;
        cout << "Quarter: " << quarter << endl;
    }
     //bool & possesion of the ball
        if(poss == true)
        {
          cout << "Home team has the ball" << endl; 
        }
        else
        {
          cout << "Visiting team has the ball" << endl; 
        }


};
void scoreboardControls()
{
  Scoreboard s;
  
  Team tQuarter;
  char decision = '\0';
  int newScore = 0;
  int newQuarter = 0;
  s.setTeam1(tOneMain);
  s.setTeam2(tTwoMain);
  s.setQuarter(newQuarter);

  //Menu Options
  cout << "\nMenu: " << endl;
  cout << "A. Update Team 1 Score" << endl;
  cout << "B. Update Team 2 Score" << endl;
  cout << "C. Update Quarter" << endl;
  cout << "D. Update Team Possession";
  cout << "X. To Exit" << endl;
  cin >> decision;

  if(decision == 'a' || 'A')
  {
    cout << "Team 1 score update.";
    cout << "\nWhat is the new score?";
    cin >> newScore;
    tOne.Main.setScore(newScore);
    cout << "\nUpdating new score for Team 1 to..." << tOneMain.getScore() << endl;
    sleep(3);
  }
 else if(decision == 'b' || 'B')
  {
    cout << "Team 2 score update.";
    cout << "\nWhat is the new score?";
    cin >> newScore;
    tTwo.Main.setScore(newScore);
    cout << "\nUpdating new score for Team 2 to..." << tTwoMain.getScore() << endl;
    sleep(3);
  }
  else if(decision == 'c' || decision == 'C')
  {
    cout << "Quarter Update. ";
    cout << "\nWhat is the new Quarter ";
    cin >> newQuarter;
    s.setQuarter(newQuarter);
    cout << "\nUpdating Quarter to..." << s.getQuarter() << endl;
    sleep(3);
  }
  else if(decision == 'd' || decision == 'D')
  {
    cout << "Posession Update";
  
  }
  s.setTeam1(tOneMain);
  s.setTeam2(tTwoMain);
  
  
} while(decision != 'x' && decision != 'X');


int main() 
{
  scoreboardControls();

  return 0;
}
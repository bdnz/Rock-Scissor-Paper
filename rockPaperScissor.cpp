#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string  getUserChoice(string& userChoice );
string   getPCpick(string& PCpick);
string winner(string& userChoice, string& PCpick,int& userWins,int& PCwins );


int main () {
   string PCpick = "";
   string userChoice = ""; 
   string again;
  
   int userWins = 0;
   int PCwins = 0;

 do{  
   getUserChoice(userChoice );


     getPCpick(PCpick);
    //cout<<PCpick;
    winner(userChoice,PCpick,userWins,PCwins );
	
	cout<<"Again ?? (y for again or press anything for quit): ";
	cin>>again;

 }while(again == "y");

 cout<<endl<<endl;

 if(userWins > PCwins)
 {
	 cout<<"You Won "<<userWins<<" times and you won the game."<<endl<<endl;
 }
 else if (userWins < PCwins)
 {
	 cout<<"Computer won "<<PCwins<<" times and Computer finished the game. ";

 }
  


	system("pause");
}

string  getUserChoice(string& userChoice)
   {
         
        cout<<"rock, paper, or scissor?";

         cin>>userChoice;
         
         //check for user valid input 
         while(userChoice != "rock" && userChoice !="paper" && userChoice != "scissor")
         {
             cout<<"sorry that was an invalid. rock, paper or scissor?";
			 cout<<"rock, paper, or scissor?"<<endl;
             cin>>userChoice;
         } 
         
         return userChoice;
    }



string   getPCpick(string& PCpick)
    {
     
         
        

		
	  int cpuRandom = 0;
       srand(time(0));     
      cpuRandom = (rand() % 3) + 1;
                 
         if(cpuRandom == 1)
         {
         PCpick = "rock";
         }
         if(cpuRandom == 2)
         {
         PCpick = "paper";
         }
         if(cpuRandom == 3)
         {
         PCpick = "scissor";
         } 
             
	

         return PCpick;


     } 


   string winner(string& userChoice, string& PCpick,int& userWins,int& PCwins )
     {
     
		 cout<<endl;
             //int userWins = 0;
             //int PCwins = 0;
             
             string winner = "";
          
	
              if(userChoice == "scissor" && PCpick == "paper")
              {
                 cout<<"computer selected " + PCpick + " and   YOU WON"<<endl<<endl ;
                 userWins++;
              } 
			  else if  (userChoice == "rock" && PCpick == "scissor")
				{
                 cout<<"computer selected " + PCpick + " and   YOU WON"<<endl<<endl ;
				 cout<<endl;
                 userWins++;
              } 

			  else if (userChoice == "paper" && PCpick == "rock")
				{
                 cout<<"computer selected " + PCpick + " and   YOU WON"<<endl<<endl ;
                 userWins++;
              } 
             
			  else  if (userChoice == "scissor" && PCpick == "rock")
              {
                cout<<"computer selected " + PCpick + " and  COMPUTER WON"<<endl<<endl;
                PCwins++;
              }
              
			  else  if(userChoice == "rock" && PCpick == "paper" )
				{
                cout<<"Computer selected " + PCpick + " and  COMPUTER WON"<<endl<<endl;
                PCwins++;
              }

			  else if(userChoice == "paper" && PCpick == "scissor")
				  {
                cout<<"Computer selected " + PCpick + " and  COMPUTER WON !!"<<endl<<endl;
                PCwins++;
              }

			  else if (userChoice == PCpick)
			  {
				  cout<<"Computer selected "<<PCpick<<" and it is TIE !!"<<endl<<endl;
			  }

              return winner;

              
        
   }
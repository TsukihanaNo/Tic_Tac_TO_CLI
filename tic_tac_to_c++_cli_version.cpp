//current version: 1.0 
//this program will run a command line base version of tic tac to and allow two human players to play against each other.

#include <iostream>
#include <string>
using namespace std;

//game board
string row1[] = { " ", "     |     ", " ", "      |      ", " "};
string divider ="______|___________|_________";
string row2[] = { " ", "     |     ", " ", "      |      ", " "};
string row3[] = { " ", "     |     ", " ", "      |      ", " "};

string player1 = "O", player2 = "X";


//prints the intro
void printIntro()
{
	cout<< "welcome to tic tac to prototype!"<<endl;
	cout<< "i hope that you have fun playing this game!"<<endl;
	cout<< "GAME COMMENCING!"<<endl<<endl<<endl;
}

//draws the initial blank board
void drawBlankBoard(){
	//resets the board
	row1[0] = " ";
	row1[1] = "     |     ";
	row1[2] = " ";
	row1[3] = "     |     ";
	row1[4] = " ";
	row2[0] = " ";
	row2[1] = "     |     ";
	row2[2] = " ";
	row2[3] = "     |     ";
	row2[4] = " ";
	row3[0] = " ";
	row3[1] = "     |     ";
	row3[2] = " ";
	row3[3] = "     |     ";
	row3[4] = " ";
	
	//print out blank board
	cout<< row1[0] << row1[1]<< row1[2]<< row1[3]<<row1[4]<< endl<<endl;
	cout<< divider << endl<<endl;
	cout<< row2[0] << row2[1]<< row2[2]<< row2[3]<<row2[4]<< endl<<endl;
	cout<< divider <<endl<<endl;
	cout<< row3[0] << row3[1]<< row3[2]<< row3[3]<<row3[4]<< endl<<endl;
}

//updates the game board and also checks if the game is won by a player
bool gameMethod(int x, int y , int player)
{
	if (y == 1){
		//row1
		if (player == 1){
			row1[x] = player1;
		}
		else{
			row1[x] = player2;
		}
	}
	
	else if (y == 2){
		//row2
		if (player == 1){
			row2[x] = player1;
		}
		else{
			row2[x] = player2;
		}
	}
	else{
		//row 3 
		if (player == 1){
			row3[x] = player1;
		}
		else{
			row3[x] = player2;
		}
	}

	//drawing the new board
	cout<< row1[0] << row1[1]<< row1[2]<< row1[3]<<row1[4]<< endl<<endl;
	cout<< divider << endl<<endl;
	cout<< row2[0] << row2[1]<< row2[2]<< row2[3]<<row2[4]<< endl<<endl;
	cout<< divider <<endl<<endl;
	cout<< row3[0] << row3[1]<< row3[2]<< row3[3]<<row3[4]<< endl<<endl; 

	//check for if player has won

	//by rows
	if(row1[0] == "O" && row1[2]=="O" && row1[4] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row1[0] == "X" && row1[2]=="X" && row1[4] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	else if(row2[0] == "O" && row2[2]=="O" && row2[4] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row2[0] == "X" && row2[2]=="X" && row2[4] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	else if(row3[0] == "O" && row3[2]=="O" && row3[4] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row3[0] == "X" && row3[4]=="X" && row3[4] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	//by columns
	else if(row1[0] == "O" && row2[0]=="O" && row3[0] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row1[0] == "X" && row2[0]=="X" && row3[0] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	else if(row1[2] == "O" && row2[2]=="O" && row3[2] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row1[2] == "X" && row2[2]=="X" && row3[2] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	else if(row1[4] == "O" && row2[4]=="O" && row3[4] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row1[4] == "X" && row2[4]=="X" && row3[4] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	//by diagonals
	else if(row1[0] == "O" && row2[2]=="O" && row3[4] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row1[0] == "X" && row2[2]=="X" && row3[4] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	else if(row1[4] == "O" && row2[2]=="O" && row3[0] == "O"){
		//player 1 wins
		cout<< " player 1 wins"<<endl;
		return true;
	}
	else if (row1[4] == "X" && row2[2]=="X" && row3[0] == "X"){
		//player 2 wins
		cout<< " player 2 wins"<<endl;
		return true;
	}
	else if(row1[0] != " " && row1[2] != " " && row1[4] != " " && row2[0] != " " && row2[2] != " " && row2[4] != " " && row3[0] != " " && row3[2] != " " && row3[4] != " "){
		//all coordinates taken
		cout<< " the board is full. No one wins!"<<endl;
		return true;
	}

}


//execution function
int main(){
	int x, y;
	bool continueGame = true, isEmpty = true;
	char decision;
	char proceedTermination;
	printIntro();
	while (continueGame != false){
		int player = 1;
		bool gameOver = false;
		drawBlankBoard();
		while (gameOver == false){
			
			do{
				cout<<endl<<endl;
				cout<< "it is player "<<player<<"'s turn"<<endl;
				cout<<" X: ";
				cin>>x;

				//changes x so that it matches the array elements
				if(x==1){
					x=0;
				}
				else if(x==2){
					x=2;
				}
				else if(x==3){
					x=4;
				}
				
				cout<<" Y: ";
				cin>>y;
				cout<<endl;

				//check if the coordinate is empty
				if( y == 1){
					if( row1[x] != " "){
						cout<< " the coodinate that you have enter is already taken!"<<endl;
						cout<< " Piss off and get another coordinate!"<<endl;
						isEmpty = false;
					}
					else{
						isEmpty = true;
					}
				}
				else if( y == 2){
					if( row2[x] != " "){
						cout<< " the coodinate that you have enter is already taken!"<<endl;
						cout<< " Piss off and get another coordinate!"<<endl;
						isEmpty = false;
					}
					else{
						isEmpty = true;
					}
				}
				else if( y == 3){
					if( row3[x] != " "){
						cout<< " the coodinate that you have enter is already taken!"<<endl;
						cout<< " Piss off and get another coordinate!"<<endl;
						isEmpty = false;
					}
					else{
						isEmpty = true;
					}
				}
			}while(isEmpty == false);
		
			//use the input and drive the game method
			gameOver = gameMethod(x,y,player);
			if (player == 1){
				player = 2;
			}
			else if(player == 2){
				player =1;
			}

		}
		cout << " do you want to play another round?"<<endl;
		cout << " y/n: ";
		cin >> decision;
		if (decision == 'n'){
			cout<< "you have chosen to end the game"<<endl;
			cout<< "good bye!"<<endl;
			cout<< "press any key to continue the process";
			cin >> proceedTermination;
			continueGame = false;
		}
		else{
			cout<< "you have either enter yes or something other than no"<<endl;
			cout<< "therefore the game will not terminate";
			cout<< "have fun playing another round! muhahahhahaha!"<<endl<<endl;
			continueGame = true;
		}
		}
		
	return 0;
}
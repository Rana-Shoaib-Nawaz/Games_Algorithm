//Tic tac toe
#include<iostream>
using namespace std;
main()
{
	int player,choice;
	char board[]={'0','1','2','3','4','5','6','7','8'};    //Taking board array to store char
	char mark;
	for(int i=0;i<9;i++)       //Outer loop start
	{
		for(int i=0;i<9;i+=3)    //Inner loop start
		{
			cout<<"\t\t\t "<<board[i]<<" | "<<board[i+1]<<" | "<<board[i+2]<<endl;   //these shows board
		}
		if(i%2==0)   //if the i modulus is even  then 
		{
			player=1;     //1 assign to player
			mark='x';     //'x' assign to mark
		}
		else      //otherwise else condition run
		{
			player=2;    //2 assign player
			mark='o';    //'o' to assign mark
		}
		cout<<"Select option player "<<player<<":";     //This statement print the player number
		cin>>choice;                                   //Given the number and store in choice
		if(choice>0&&choice<9)                        //If condition check that the value is greater than 0 and less than 9
		{
			if(board[choice]!='x'&&board[choice]!='o')  //If condition check that the given place has not have 'x' and 'o'
			{
				board[choice]=mark;                        //If above statement is true than mark assign to board index
			}
			else                                    //Otherwise the else statment run
			{
				cout<<"Already marked\n";
				i--;                                  //In case if the user enter already marked value than it reduse one iteration of i
				continue;                            //Continue statment stop the next statment 
			}    
			if(board[0]==board[1]&&board[1]==board[2] || board[3]==board[4]&&board[4]==board[5] || board[6]==board[7]&&board[7]==board[8] || board[0]==board[3]&&board[3]==board[6] ||  board[1]==board[4]&&board[4]==board[7] ||  board[2]==board[5]&&board[5]==board[8] || board[0]==board[4]&&board[4]==board[8] ||  board[2]==board[4]&&board[4]==board[6]  )
			{                        //If statement check the rows,columns and daignol values are same or not
				cout<<"Player"<<player<<"wins";     //If above statement is true than print the winner player
				break;                                //Break statement is use to terminate the program
			}
		}
	}
}

#include <iostream>

using namespace std;

char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};  //main matrix 3x3 to start game
char player = 'X'; 
int counter_gameplay;         //counter for game if counter == 9 game is finished
string name1,name2,mainname;   //name of players

void draw(){                   //show matrix in real time 
	system("cls");             //replace new matrix
	cout<<"\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" | "<<matrix[i][j]<<" | ";
        }
       	if(i == 2){
        	break;
		}
        cout<<endl<<" -------------------"<<endl;
    }
}

void input(){    //this function get a number 1 until 9 and check if input is correct write o and x in matrix
    int get_input;
    cout<<"\n\n # Hey \""<<mainname<<"\", "<<"You are \""<<player<<"\", Press the number of the field please: ";
    cin>>get_input;	
    if(get_input == 1){
        if(matrix[0][0] == '1'){ 
            matrix[0][0] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 2){ 
        if(matrix[0][1] == '2'){
            matrix[0][1] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 3){
        if(matrix[0][2] == '3'){
            matrix[0][2] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
            else if(get_input == 4){
        if(matrix[1][0] == '4'){
            matrix[1][0] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 5){
        if(matrix[1][1] == '5'){
            matrix[1][1] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 6){
        if(matrix[1][2] == '6'){
            matrix[1][2] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 7){
        if(matrix[2][0] == '7'){
            matrix[2][0] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 8){
        if(matrix[2][1] == '8'){
            matrix[2][1] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input == 9){
        if(matrix[2][2] == '9'){
            matrix[2][2] = player;
        }
        else{
            cout<<"\n       ----*** Feild already in use try again ***----"<<endl;
            input();
        }
    }
    else if(get_input != 1,get_input != 2,get_input != 3,get_input != 4,get_input != 5,get_input != 6,get_input != 7,get_input != 8,get_input != 9){   //check input to if get wrong input show error to player to enter again number
        cout<<"\n       ----*** Wrong input try again ***----"<<endl;
        input();
    }
}

void change_player(){        

    if(player == 'X'){
        player = 'O';
    }
    else{
        player = 'X';
    }
}
void change_name_player(){         

    if(mainname == name1){
        mainname = name2;
    }
    else if(mainname == name2){
        mainname = name1;
    }
}

char how_win(){   //this function check if 3 same symbol o or x finished the game and show name of player 

	//first player in X symbol
	if(matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X'){
		return 'X';
	}
    if(matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X'){
		return 'X';
	}
	if(matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X'){
		return 'X';
	}


	if(matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X'){
		return 'X';
	}
	if(matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X'){
		return 'X';
	}
	if(matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X'){
		return 'X';
	}


	if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X'){
		return 'X';
	}
	if(matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X'){
		return 'X';

	}

	//second player in O symbol
    if(matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O'){
		return 'O';
	}
    if(matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O'){
		return 'O';
	}
	if(matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O'){
		return 'O';
	}


	if(matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O'){
		return 'O';
	}
	if(matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O'){
		return 'O';
	}
	if(matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O'){
		return 'O';
	}


	if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O'){
		return 'O';
	}
	if(matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O'){
		return 'O';
	}
    return '/';
}

void game(){
    while(1){
        counter_gameplay++;
    	input();
    	draw();
    	if (how_win() == 'X'){
            cout<<"\n\n\n ********$$$ WoW \""<<mainname<<"\" won the game"<<", congratulations $$$********"<<endl;
            break;
    	}
    	else if(how_win() == 'O'){
            cout<<"\n\n\n ********$$$ WoW \""<<mainname<<"\" won the game"<<", congratulations $$$********"<<endl;
            break;
    	}
        else if(how_win() == '/' && counter_gameplay == 9){
            cout<<"\n\n\n ----*** Unfortunately, none of you won the game, play again ***----"<<endl;
            break;
    	}
    	change_player();
    	change_name_player();

	}
}
int main()
{
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\t\t ************ Welcome to Real Time Tic_Tac_Toe 2 Player Game Project ************\n\n";
    cout<<"\t\t\t\t\t Supervisor : Mr.Ali Bazghandi\n";
    cout<<"\t\t\t\t\t Teacher Assistants : Mr.Foad Ataei - Mr.Amirhossein Kazemzadeh \n";
    cout<<"\t\t\t\t\t Course : Basics of programming \n";
    cout<<"\t\t\t\t\t Student : Yasin Rezvani \n";
	cout<<"\t\t\t\t\t Date : Spring 2023 \n";
    cout<<"\t\t\t\t\t Shahrood University of Technology \n\n";   
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    char try_load_game;
    cout<<" # Please enter the name of the first player: ";     //get name of players
    cin>>name1;
    cout<<"\n # Please enter the name of the second player: ";
    cin>>name2;
    mainname = name1;
    draw();
    counter_gameplay = 0;
    game();

    while(1){
        cout<<"\n\n # Would you like to play again? (y/n): "; //to request player if like to play again game
        cin>>try_load_game;
        if(try_load_game == 'y'){
            counter_gameplay = 0;
            matrix[0][0] = '1';matrix[0][1] = '2';matrix[0][2] = '3';matrix[1][0] = '4';matrix[1][1] = '5';matrix[1][2] = '6';matrix[2][0] = '7';matrix[2][1] = '8';matrix[2][2] = '9';
            draw();
            game();
        }
        else{
            break;
        }
    }
    return 0;
}

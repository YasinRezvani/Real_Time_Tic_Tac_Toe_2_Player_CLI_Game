#include <iostream>

using namespace std;

char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int counter_gameplay;
string name1,name2,mainname;


void draw(){
	system("cls");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" | "<<matrix[i][j]<<" | ";
        }
        cout<<endl<<" -------------------"<<endl;
    }
}

void input(){
    int get_input;
    cout<<mainname<<"Press the number of the field pleease: ";
    cin>>get_input;


    if(get_input == 1){
        if(matrix[0][0] == '1'){
            matrix[0][0] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 2){
        if(matrix[0][1] == '2'){
            matrix[0][1] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 3){
        if(matrix[0][2] == '3'){
            matrix[0][2] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
            else if(get_input == 4){
        if(matrix[1][0] == '4'){
            matrix[1][0] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 5){
        if(matrix[1][1] == '5'){
            matrix[1][1] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 6){
        if(matrix[1][2] == '6'){
            matrix[1][2] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 7){
        if(matrix[2][0] == '7'){
            matrix[2][0] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 8){
        if(matrix[2][1] == '8'){
            matrix[2][1] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input == 9){
        if(matrix[2][2] == '9'){
            matrix[2][2] = player;
        }
        else{
            cout<<"Feild already in use try again"<<endl;
            input();
        }
    }
    else if(get_input != 1,get_input != 2,get_input != 3,get_input != 4,get_input != 5,get_input != 6,get_input != 7,get_input != 8,get_input != 9){
        cout<<"wrong input try again"<<endl;
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

char how_win(){

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

	//second
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
            cout<<mainname<<" wins"<<endl;
            break;
    	}
    	else if(how_win() == 'O'){
            cout<<mainname<<" wins"<<endl;
            break;
    	}
        else if(how_win() == '/' && counter_gameplay == 9){
            cout<<"no one win"<<endl;
            break;
    	}
    	change_player();
    	change_name_player();

	}
}
int main()
{
    char try_load_game;
    cout<<"enter name 1: "<<endl;
    cin>>name1;
    cout<<"enter name 2: "<<endl;
    cin>>name2;
    mainname = name1;
    draw();
    counter_gameplay = 0;
    game();

    while(1){
        cout<<"do you like continue? (y/n?)"<<endl;
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
    //system("pause");
}

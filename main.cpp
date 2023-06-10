#include <iostream>

using namespace std;

char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int aa;


void draw(){
	system("cls");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input(){
    int get_input;
    cout<<"Press the number of the field pleease: ";
    cin>>get_input;

    if(get_input == 1){
        matrix[0][0] = player;
    }
    else if(get_input == 2){
        matrix[0][1] = player;
    }
    else if(get_input == 3){
        matrix[0][2] = player;
    }
    else if(get_input == 4){
        matrix[1][0] = player;
    }
    else if(get_input == 5){
        matrix[1][1] = player;
    }
    else if(get_input == 6){
        matrix[1][2] = player;
    }
    else if(get_input == 7){
        matrix[2][0] = player;
    }
    else if(get_input == 8){
        matrix[2][1] = player;
    }
    else if(get_input == 9){
        matrix[2][2] = player;
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

int main()
{
    draw();
    while(1){
    	input();
    	draw();
    	change_player();
	}
	
    return 0;
}

#include <iostream>
using namespace std;


int draw(int position[2], char character, char grid[5][6]){
    for (int i =0; i < 5; i ++){
		for (int j =0; j < 5; j++){
			if (i == position[0] && j == position[1])
				cout << character;
			else
				cout << grid[i][j];
			cout << " ";
		}
		cout << endl;
        return 0;
    }
}

int movement() {
    string up, down, left, right;
    up = 'w';
    down = 's';
    left = 'a';
    right = 'd';



    return 0;
}



int main(){
	char grid[5][5] = {{'0','0','0','0','0'},
	                   {'0','0','0','0','0'},
	                   {'0','0','0','0','0'},
	                   {'0','0','0','0','0'},
	                   {'0','0','0','0','0'}};
	char character = '*';

	int position[2] = {2,2};
    draw(position[2], char character, char grid[5][5]);
}


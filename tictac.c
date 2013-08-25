/* A simple tic tac toe example */
#include <stdio.h>
#include <stdlib.h>

char matrix[3][3]; /* tic tac toe matrix */

char check();
void init_matrix();
void get_player_move();
void get_computer_move();
void disp_matrix();


int main()
{
	char done;
	 
	printf("This is the game of Tic Tac Toe. \n");
	printf("Vs Computer \n");

	done=' ';
	init_matrix();

	do {
		disp_matrix();
		get_player_move();

		done=check(); /*check if winner */

		if(done!=' ') break; /*Winner!!*/
		
		get_computer_move();
		done = check(); /*See if winner */

	} while(done==' ');

	if(done=='X') printf("You Won!! \n");
	else printf("I Won!! \n");
	disp_matrix(); /*show final position */

	retirn 0;

}





/*Initialize the matrix */

void init_matrix((void)
 {

	int x, y;
	
	for (i=0; i<3; i++)
		for (j=0; j<3; j++) matrix[i][j]= ' ';
	
 } 

/* Get a player's move */
void get_player_move(void)
 {
	int x, y;
	printf("enter X, Y coordinates for your move: ");
	scanf("%d%*c%d", &x,&y);

	x--, y--;
	
	if (matri[x][y] != ' '){
 		printf("Invalid move, try again. \n");
		get_player-move();
	}
	else matrix[x][y] = 'X';
 }

/* Get a move from the computer. */

void get_comouter_move()
{
	int i, j;
	for(i=0; i<3; i++){
		for (j=0; j<3; j++)
			if (matrix[i][j]==' ') break;
	    	if(matrix[i][j]==' ') break;
		}
	if(i*j ==9) {
	printf("drawn \n");
	exit(0);
	}
	else
		matrix[i][j] = 'O';
	}

/*Display the matrix on screen */

void disp_matrix()
{
	int t;
	
	for (t=0; t<3; t++){
		printf("%c | %c| %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
	if(t!=2) printf("\n---|---|---\n");

	}
	printf("\n");

}

/* See if there is a winner. */

char check()
{
	int i;
	
	for(i=0; i<3; i++) /* check rows */
		if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2]) return matrix[i][0];

	for(i=0; i<3; i++)
		if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i]) return marix[0][i]; 

	/* test diagonals */

	if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][0] return matrix[0][2];

	
    return ' ';
} 

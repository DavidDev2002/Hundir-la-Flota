#include <stdio.h>
#include "functions.h"

void main() {

	int fil, col;
	int ROW = 10, COLS = 11;
	int i, j, tablero[ROW][COLS];
	int x = 0;
	char letter;
	int p1, p2, p3;

	printf("\n*******************************");
	printf("\n*******************************");
	printf("\n***********WELCOME*************");
	printf("\n*******************************");
	printf("\n*******************************");

	int num1,error = 0;

	do {
		printf("\n1 - EASY MODE");
		printf("\n2 - MEDIUM MODE");
		printf("\n3 - EXTREME MODE");
		printf("\n4 - EXIT\n");
		scanf("%d", &num1);
		error++;
	} while (num1 < 1 || num1 > 4 && error != 3);

	switch (num1) {

	case 1:
		printf("YOU HAVE CHOSEN THE EASY MODE\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COLS; j++) {
				tablero[i][j] = 0;
				if (j != 0) {
					printf("[%d]", tablero[i][j]);
				} else {
					printf("%d ", x);
					x = x + 1;
				}
			}
			printf("\n");
		}

		printf("Select the row you want to shoot:\n");
		scanf("%d", &p1);
		p3 = p1;
		printf("Select the column you want to shoot:\n");
		scanf("%s", &letter);

		switch (letter) {
		case 'A':
			p2 = 1;
			break;
		case 'B':
			p2 = 2;
			break;
		case 'C':
			p2 = 3;
			break;
		case 'D':
			p2 = 4;
			break;
		case 'E':
			p2 = 5;
			break;
		case 'F':
			p2 = 6;
			break;
		case 'G':
			p2 = 7;
			break;
		case 'H':
			p2 = 8;
			break;
		case 'I':
			p2 = 9;
			break;
		case 'J':
			p2 = 10;
			break;
		}
		tablero[p3][p2] = 1;
		x = 0;
		printf("\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COLS; j++) {
				if (j != 0) {
					printf("[%d]", tablero[i][j]);
				} else {
					printf("%d ", x);
					x = x + 1;
				}
			}
			printf("\n");
		}

		if (tablero[3][3] != 0 || tablero[4][3] != 0 || tablero[5][3] != 0
				|| tablero[3][5] != 0 || tablero[3][6] != 0
				|| tablero[2][9] != 0 || tablero[3][9] != 0
				|| tablero[4][9] != 0 || tablero[6][5] != 0
				|| tablero[6][6] != 0 || tablero[6][7] != 0
				|| tablero[6][8] != 0 || tablero[9][3] != 0
				|| tablero[9][4] != 0 || tablero[9][5] != 0
				|| tablero[9][6] != 0 || tablero[9][7] != 0) {
			printf("TOCADO");
		} else {
			printf("AGUA");
		}

		break;
	case 2:
		printf("YOU HAVE CHOSEN THE MEDIUM MODE\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COLS; j++) {
				tablero[i][j] = 0;
				if (j != 0) {
					printf("[%d]", tablero[i][j]);
				} else {
					printf("%d ", x);
					x = x + 1;
				}
			}
			printf("\n");
		}

		printf("Select the row you want to shoot:\n");
		scanf("%d", &p1);
		p3 = p1;
		printf("Select the column you want to shoot:\n");
		scanf("%s", &letter);

		switch (letter) {
		case 'A':
			p2 = 1;
			break;
		case 'B':
			p2 = 2;
			break;
		case 'C':
			p2 = 3;
			break;
		case 'D':
			p2 = 4;
			break;
		case 'E':
			p2 = 5;
			break;
		case 'F':
			p2 = 6;
			break;
		case 'G':
			p2 = 7;
			break;
		case 'H':
			p2 = 8;
			break;
		case 'I':
			p2 = 9;
			break;
		case 'J':
			p2 = 10;
			break;
		}
		tablero[p3][p2] = 1;
		x = 0;
		printf("\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COLS; j++) {
				if (j != 0) {
					printf("[%d]", tablero[i][j]);
				} else {
					printf("%d ", x);
					x = x + 1;
				}
			}
			printf("\n");
		}

		if (tablero[3][3] != 0 || tablero[4][3] != 0 || tablero[5][3] != 0
				|| tablero[3][5] != 0 || tablero[3][6] != 0
				|| tablero[2][9] != 0 || tablero[3][9] != 0
				|| tablero[4][9] != 0 || tablero[6][5] != 0
				|| tablero[6][6] != 0 || tablero[6][7] != 0
				|| tablero[6][8] != 0 || tablero[9][3] != 0
				|| tablero[9][4] != 0 || tablero[9][5] != 0
				|| tablero[9][6] != 0 || tablero[9][7] != 0) {
			printf("TOCADO");
		} else {
			printf("AGUA");
		}
		break;
	case 3:
		printf("YOU HAVE CHOSEN THE HARD MODE\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COLS; j++) {
				tablero[i][j] = 0;
				if (j != 0) {
					printf("[%d]", tablero[i][j]);
				} else {
					printf("%d ", x);
					x = x + 1;
				}
			}
			printf("\n");
		}

		printf("Select the row you want to shoot:\n");
		scanf("%d", &p1);
		p3 = p1;
		printf("Select the column you want to shoot:\n");
		scanf("%s", &letter);

		switch (letter) {
		case 'A':
			p2 = 1;
			break;
		case 'B':
			p2 = 2;
			break;
		case 'C':
			p2 = 3;
			break;
		case 'D':
			p2 = 4;
			break;
		case 'E':
			p2 = 5;
			break;
		case 'F':
			p2 = 6;
			break;
		case 'G':
			p2 = 7;
			break;
		case 'H':
			p2 = 8;
			break;
		case 'I':
			p2 = 9;
			break;
		case 'J':
			p2 = 10;
			break;
		}
		tablero[p3][p2] = 1;
		x = 0;
		printf("\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		for (i = 0; i < ROW; i++) {
			for (j = 0; j < COLS; j++) {
				if (j != 0) {
					printf("[%d]", tablero[i][j]);
				} else {
					printf("%d ", x);
					x = x + 1;
				}
			}
			printf("\n");
		}

		if (tablero[3][3] != 0 || tablero[4][3] != 0 || tablero[5][3] != 0
				|| tablero[3][5] != 0 || tablero[3][6] != 0
				|| tablero[2][9] != 0 || tablero[3][9] != 0
				|| tablero[4][9] != 0 || tablero[6][5] != 0
				|| tablero[6][6] != 0 || tablero[6][7] != 0
				|| tablero[6][8] != 0 || tablero[9][3] != 0
				|| tablero[9][4] != 0 || tablero[9][5] != 0
				|| tablero[9][6] != 0 || tablero[9][7] != 0) {
			printf("TOCADO");
		} else {
			printf("AGUA");
		}
		break;
	case 4:
		printf("SEE YOU NEXT TIME");

	}
}

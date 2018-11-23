#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
	
	int user1total = 0;
	int user2total = 0;
	int i;
	int t;
	int r;
	int y, a, b;
	int x;
	int w = 0;
	int rd,z;
	int zar = 1;
	srand(time(NULL));


	cout << "How many turns?" << "\n";
	cin >> rd;

	/*Who goes first*/
	do {
		a = rand() % 6 + 1;
		printf("\n User 1 \n");
		switch (a) {
		case 1: printf(" \n  _____ ");
			printf(" \n |     |");
			printf(" \n |  .  |");
			printf(" \n |     |");
			printf(" \n |_____|"); break;
		case 2: printf(" \n  _____ ");
			printf(" \n | .   |");
			printf(" \n |     |");
			printf(" \n |   . |");
			printf(" \n |_____|"); break;
		case 3: printf(" \n  _____ ");
			printf(" \n | .   |");
			printf(" \n |  .  |");
			printf(" \n |   . |");
			printf(" \n |_____|"); break;
		case 4: printf(" \n  _____ ");
			printf(" \n | . . |");
			printf(" \n |     |");
			printf(" \n | . . |");
			printf(" \n |_____|"); break;
		case 5: printf(" \n  _____ ");
			printf(" \n | . . |");
			printf(" \n |  .  |");
			printf(" \n | . . |");
			printf(" \n |_____|"); break;
		case 6: printf(" \n  _____ ");
			printf(" \n | . . |");
			printf(" \n | . . |");
			printf(" \n | . . |");
			printf(" \n |_____|"); break;
		}
		printf("\n    %d\n\n\n", a);
		system("pause");
		b = rand() % 6 + 1;
		printf("\n User 2 \n");
		switch (b) {
		case 1: printf(" \n  _____ ");
			printf(" \n |     |");
			printf(" \n |  .  |");
			printf(" \n |     |");
			printf(" \n |_____|"); break;
		case 2: printf(" \n  _____ ");
			printf(" \n | .   |");
			printf(" \n |     |");
			printf(" \n |   . |");
			printf(" \n |_____|"); break;
		case 3: printf(" \n  _____ ");
			printf(" \n | .   |");
			printf(" \n |  .  |");
			printf(" \n |   . |");
			printf(" \n |_____|"); break;
		case 4: printf(" \n  _____ ");
			printf(" \n | . . |");
			printf(" \n |     |");
			printf(" \n | . . |");
			printf(" \n |_____|"); break;
		case 5: printf(" \n  _____ ");
			printf(" \n | . . |");
			printf(" \n |  .  |");
			printf(" \n | . . |");
			printf(" \n |_____|"); break;
		case 6: printf(" \n  _____ ");
			printf(" \n | . . |");
			printf(" \n | . . |");
			printf(" \n | . . |");
			printf(" \n |_____|"); break;
		}
		printf("\n    %d\n\n", b);
		system("pause");
		system("cls");
	} while (a == b);
	system("cls");
	if (a>b) {
		printf("\n\n User 1 starts first!\n\n\n");
		i = 0;

	}
	else
	{
		printf("\n\n User 2 starts first!\n\n\n");
		i = 1;
	}
	system("pause");
	
	
	int ab;
	for (w = 0; w < rd; w++)
	{
		for (ab = 1; ab <= 2; ab++) {
			printf("Turn  %d\n\n", zar);
			r = rand() % 6 + 1;
			y = rand() % 6 + 1;
			switch (r) {
			case 1: printf(" \n  _____ ");
				printf(" \n |     |");
				printf(" \n |  .  |");
				printf(" \n |     |");
				printf(" \n |_____|"); break;
			case 2: printf(" \n  _____ ");
				printf(" \n | .   |");
				printf(" \n |     |");
				printf(" \n |   . |");
				printf(" \n |_____|"); break;
			case 3: printf(" \n  _____ ");
				printf(" \n | .   |");
				printf(" \n |  .  |");
				printf(" \n |   . |");
				printf(" \n |_____|"); break;
			case 4: printf(" \n  _____ ");
				printf(" \n | . . |");
				printf(" \n |     |");
				printf(" \n | . . |");
				printf(" \n |_____|"); break;
			case 5: printf(" \n  _____ ");
				printf(" \n | . . |");
				printf(" \n |  .  |");
				printf(" \n | . . |");
				printf(" \n |_____|"); break;
			case 6: printf(" \n  _____ ");
				printf(" \n | . . |");
				printf(" \n | . . |");
				printf(" \n | . . |");
				printf(" \n |_____|"); break;
			}

			switch (y) {
			case 1: printf(" \n  _____ ");
				printf(" \n |     |");
				printf(" \n |  .  |");
				printf(" \n |     |");
				printf(" \n |_____|"); break;
			case 2: printf(" \n  _____ ");
				printf(" \n | .   |");
				printf(" \n |     |");
				printf(" \n |   . |");
				printf(" \n |_____|"); break;
			case 3: printf(" \n  _____ ");
				printf(" \n | .   |");
				printf(" \n |  .  |");
				printf(" \n |   . |");
				printf(" \n |_____|"); break;
			case 4: printf(" \n  _____ ");
				printf(" \n | . . |");
				printf(" \n |     |");
				printf(" \n | . . |");
				printf(" \n |_____|"); break;
			case 5: printf(" \n  _____ ");
				printf(" \n | . . |");
				printf(" \n |  .  |");
				printf(" \n | . . |");
				printf(" \n |_____|"); break;
			case 6: printf(" \n  _____ ");
				printf(" \n | . . |");
				printf(" \n | . . |");
				printf(" \n | . . |");
				printf(" \n |_____|"); break;
			}


			if (i % 2 == 0) {
				if (r == y) {
					z = 4 * r;
					user1total = user1total + z;
				}
				else  user1total = user1total + (r + y);
			}
			if (i % 2 != 0) {
				if (r == y) {
					z = 4 * r;
					user2total = user2total + z;
				}
				else user2total = user2total + (r + y);
			}
			i++;
			printf("\n\n\n\n %5d%5d \n\n\n\n\n\n\n\n\n", r, y);
			printf("\n user1total = %d", user1total);
			printf("\n user2total = %d\n", user2total);
			r = y = 0;
			system("pause");
			system("cls");
		}

		ab = 1;
		zar = zar + 1;

	}
	if (user1total>user2total)
		printf("\nUser 1 is the WINNER!\n\n\n");
	if (user1total < user2total)
		printf("\nUser 2 is the WINNER!\n\n\n");
	if (user1total==user2total)
		printf("It's a DRAW!\n\n\n");

	system("pause");
	system("cls");
}


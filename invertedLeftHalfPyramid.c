#include<stdio.h>
void main(){

	int i, j, rows;

	printf("Enter the rows: ");
	scanf("%d", &rows);

	for(i = 0; i < rows; i++){
	
		for(j = 0; j < 2 * i; j++)

			printf(" ");

		for(j = 0; j < rows - i; j++)

			printf("* ");

		printf("\n");
	
	}

}

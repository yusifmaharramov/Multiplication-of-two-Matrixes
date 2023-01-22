/* This program is used to multiply two matrixes, for instance, A x B = R. 
 Here A is 1st matrix, B is 2nd matrix, R is the resultant matrix. 
The number of rows and columns, also every element of the matrix A and B are entered by the user. The elements of the resultant matrix will be printed on the screen*/ 

#include<stdio.h>
#include<stdlib.h>
#define MAX 50 
int main()
{


	int A_rows, A_columns, B_rows, B_columns;
	int A[MAX][MAX], B[MAX][MAX], R[MAX][MAX];
	int sum = 0, i, j, k;

	

//<<<< Getting the number of rows, columns, and their elements of the matrix A >>>>>>
	printf("Enter the number of rows and columns of the matrix A respectively : ");
	scanf_s("%d %d", &A_rows, &A_columns);

	printf("Enter the elements of the matrix A :\n");
	for (i = 0; i < A_rows; i++)
	{
		for (j = 0; j < A_columns; j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}

	//<<<< Ending of the Matrix A >>>>>>





	//<<<<<<<< Getting the number rows, columns, and their values in the matrix B >>>>>>>
	printf("Enter the number of rows and columns of the matrix B respectively :\n");
	scanf_s("%d %d", &B_rows, &B_columns);

	if (A_columns != B_rows) // Here we check that the number of columns of the matrix A is equal or not to the number of rows of the matrix B
	{
		printf("OOOPS!!! You cannot multiply these 2 matrixes, because the number of columns of the matrix A is not equal to the number of rows of the matrix B.\n");
	}

	// If  columns of matrix A== rows of matrix B we continue :





	// Getting the elements of the matrix B
	else
	{
		printf("Enter the elements of the matrix B : \n");
		for (i = 0; i < B_rows; i++)
		{
			for (j = 0; j < B_columns; j++)
			{
				scanf_s("%d", &B[i][j]);
			}
		}


		printf("\n"); // This is a new line, coz we'll print the elements of the resultant matrix in the new line




		// This is the most important part of the program. Actually, this is the code that multiply two matrices.
		for (i = 0; i < A_rows; i++)
		{
			for (j = 0; j < B_columns; j++)
			{
				for (k = 0; k < A_columns; k++)
				{
					sum += A[i][k] * B[k][j];
				}



				R[i][j] = sum;
				sum = 0;
			}
		}
		// Ending of the multiplication part.


		
	// We are going to print the elements of the resultant matrix R : 
		printf("Resultant matrix R :\n");

		for (i = 0; i < A_rows; i++)
		{
			for (j = 0; j < B_columns; j++)
			{
				printf("%d ", R[i][j]);
			}

			printf("\n");
		}
	}

	// End

	

	return 0;


}






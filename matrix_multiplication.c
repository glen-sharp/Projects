#include <stdio.h>

int main(void)
{
	int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k;

	//setting all values of matrix 3 to zero//
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			mat3[j][i] = 0;

	//inputting data for matrix 1//
	for(i=0; i<3; i++)
		for (j = 0; j < 3; j++)
		{
			printf("value (%d,%d) = ", j + 1, i + 1);
			scanf("%d", &mat1[j][i]);
		}

	//inputting data for matrix 2//
	for (i = 0; i<3; i++)
		for (j = 0; j < 3; j++)
		{
			printf("value (%d,%d) = ", j + 1, i + 1);
			scanf("%d", &mat2[j][i]);
		}

	//values of matrix 3//
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			for (k = 0; k < 3; k++)
				mat3[j][i] += mat1[k][i] * mat2[j][k];

	//printing results//
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			printf("%d ", mat3[j][i]);
	}
	
	printf("\n");
	return 0;
}
#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

void vector_addition(double array1[], double array2[])
{
	int i;
	double array3[3];
	for (i = 0; i < 3; i++)
	{
		array3[i] = array1[i] + array2[i];
		printf("| %.2lf |\n", array3[i]);
	}
}

double vector_dot(double array1[], double array2[])
{
	int i;
	double dot = 0;
	for (i = 0; i < 3; i++)
		dot += array1[i] * array2[i];
	return dot;
}

double vector_mag(double array1[])
{
	int i;
	double mag1 = 0, mag2;
	for (i = 0; i < 3; i++)
		mag1 += array1[i] * array1[i];
	mag2 = sqrt(mag1);
	return mag2;
}


double vector_angle(double array1[], double array2[])
{
	double theta;
	theta = (acos(vector_dot(array1, array2) / (vector_mag(array1)*vector_mag(array2))))*(360/(2*PI));
	return theta;
}

int main(void)
{
	int i, menu;
	double a[3], b[3], dot, mag1, mag2, ang;
	printf("Welcome to the vector manipulation program\n");
	for (i = 0; i < 3; i++)
	{
		printf("type in value %d of vector A: ", i + 1);
		scanf("%lf", &a[i]);
	}
	for (i = 0; i < 3; i++)
	{
		printf("type in value %d of vector B: ", i + 1);
		scanf("%lf", &b[i]);
	}
	printf("1 - vector addition\n");
	printf("2 - dot product\n");
	printf("3 - magnitude of vector A\n");
	printf("4 - magnitude of vector B\n");
	printf("5 - angle between the vectors\n");
	printf("6 - exit program\n");
	do
	{
		printf("enter command: ");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1: printf("vector A + vector B =\n");
			vector_addition(a, b);
			break;
		case 2: dot = vector_dot(a, b);
			printf("the dot product of vector A and vector B = %.2lf\n", dot);
			break;
		case 3: printf("the magnitude of vector A = %.2lf\n", vector_mag(a));
			break;
		case 4: printf("the magnitude of vector B = %.2lf\n", vector_mag(b));
			break;
		case 5: printf("angle = %.2lf degrees\n", vector_angle(a, b));
			break;
		case 6: break;
		default: printf("invalid operator\n");
			break;
		}
	} while (menu != 6);
	printf("exit\n");
	return 0;
}
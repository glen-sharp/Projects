#include <stdio.h>
#include <math.h>

void den_bin(int int1)
{
	int a, b, c[8], d = 0, i, j;
	for (i = 0; i < 8; i++)
		c[i] = 0;
	do
	{
		c[d] = int1 % 2;
		int1 = int1 / 2;
		d++;
	} while (d <= 7);
	printf("your denery number in binary form = ");
	for (j = 7; j >= 0; j--)
		printf("%d", c[j]);
	printf("\n");
}

void bin_den(int array1[])
{
	int i, a[8], den = 0;
	
	for (i = 0; i < 8; i++)
		den += array1[i] * pow(2, i);
	printf("your binary number in denery form = %d\n", den);
	return 0;
}

int main(void)
{
	int menu, den, bin[8], i;
	printf("Welcome to the binary denery number converter\n");
	printf("1 - convert denery to binary\n");
	printf("2 - convert binary to denery\n");
	printf("3 - exit program\n");

	do
	{
		printf("enter command: ");
		scanf("%d", &menu);
		switch (menu)
		{
		case 1: printf("enter the denery number: ");
			scanf("%d", &den);
			den_bin(den);
			break;
		case 2: printf("enter each digit of the 8 bit binary number seperately: \n");
			for (i = 7; i >= 0; i--)
				scanf("%d", &bin[i]);
			bin_den(bin);
			break;
		case 3:
			break;
		default: printf("invalid number\n");
			break;
		}
	} while (menu != 3);
	printf("exit\n");
}
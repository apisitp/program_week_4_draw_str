#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main() 
{
	char str[100];
	printf("Input : ");
	scanf("%s", &str);
	printf("Output : ");
	for (int x = strlen(str); x > 0; x--)
	{
		
		for (int y = 0; y < x; y++)
		{
			printf("%c", str[y]);
		}
		printf("\n");
		printf("         ");
	}
}

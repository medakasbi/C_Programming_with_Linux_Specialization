#include <stdio.h>

int main(){

	int howmany = 0;
	int sum = 0; 
	int numberRead = 0;

	for (int i = 0; i < howmany; i++)
	{
		printf("How many items do you want to add?\n");
		scanf("%d", &numberRead);
		printf("I have read %d from the input terminal \n", numberRead );
		sum += numberRead;
		printf("sum equals %d\n", sum);

	}
	return 0;
	
}
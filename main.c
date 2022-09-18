#include <stdio.h>

int main(){

	char character;
	scanf("%c",&character);
	printf("++++%c++++\n", character);
	printf("+++%c%c%c+++\n", character,character,character);
	printf("++%c%c%c%c%c++\n", character,character,character,character,character);
	printf("+%c%c%c%c%c%c%c+\n", character,character,character,character,character,character,character);
	printf("%c%c%c%c%c%c%c%c%c\n", character,character,character,character,character,character,character,character,character);
	
	return 0;


}
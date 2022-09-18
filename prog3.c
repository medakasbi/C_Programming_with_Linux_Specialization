#include <stdio.h>

int main(){

	int how_many_robots = 0;
	int hight = 0;
	int weight = 0 ;
	int enginePower = 0;
	int resistance = 0;
	int power = 0;
	//int sum = 0;
	int i = 0 ;

	//printf("How many robots do we have so far?\n");
	scanf("%d", &how_many_robots);
	for ( i = 0; i < how_many_robots; i++)
	{
		//printf("enter the hight of the robot number %d\n", i);
		scanf("%d", &hight);
		//printf("enter the weight of the robot number %d\n", i);
		scanf("%d", &weight);
		//printf("enter the engine power of the robot number %d\n", i);
		scanf("%d", &enginePower);
		//printf("enter the resistance of the robot number %d\n", i);
		scanf("%d", &resistance);
		power += (enginePower + resistance) * (weight - hight);
	}
	printf("%d",power );
	return 0;
}
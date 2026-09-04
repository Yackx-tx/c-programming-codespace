#include <stdio.h>
#include <stdlib.h>
//4.Write a C program to input angles of a triangle and check whether triangle is valid or not.
int main(int argc, char *argv[]) {
	int angle1, angle2, angle3, total_angles;
	printf("enter the first angle: \n");
	scanf("%d", &angle1);
	printf("enter the second angle: \n");
	scanf("%d", &angle2);
	printf("enter the third angle: \n");
	scanf("%d", &angle3);
	total_angles = angle1 + angle2 + angle3;
	
	if(total_angles == 180){
		printf("The triangle is valid");
	}
	else{
		printf("The triangle is invalid");
	}
	return 0;
}

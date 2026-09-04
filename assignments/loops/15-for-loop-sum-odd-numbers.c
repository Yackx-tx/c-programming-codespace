#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, num, i, sum = 0;
	printf("Please enter the numbers limit: \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("Enter the [%d] : ", i+1);
		scanf("%d", &num);
		if(num % 2 != 0){
			sum += num;
		}
	}
	printf("The sum of Odd numbers is %d", sum);

}

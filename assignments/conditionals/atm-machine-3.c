#include <stdio.h>
#include <stdlib.h>

/* ATM Machine Simulation Using if–else if Ladder */

int main(int argc, char *argv[]) {
	int choice, balance, amount;
	balance = 100000;
	printf("\n--> Welcome to ATM Machine <--\n");
	printf("Select Option:\n");
	printf("1. Check Balance.\n");
	printf("2. Deposit Money.\n");
	printf("3. Withdraw Money.\n");
	printf("4. Exit.\n");
	printf("\n----------------------\n");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	if(choice == 1){
		printf("\nWelcome to ATM Machine.\nYour balance is %d Rwf", balance);
	} else if(choice == 2){
		printf("\nWelcome to ATM Banking.\nEnter the amount to deposit: ");
		scanf("%d", &amount);
		balance += amount;
		printf("Your new balance is %d Rwf", balance);
	} else if(choice == 3){
		printf("\nWelcome to ATM Withdraw.\nEnter the amount to withdraw: ");
		scanf("%d", &amount);
		if(amount <= balance){
			balance -= amount;
			printf("Your new balance is %d Rwf", balance);
		} else {
			printf("Insufficient funds in you account");
		}
	} else if(choice == 4){
		printf("\nThank you for your business in ATM Banking.");
	} else {
		printf("Invalid choice");
	}
	return 0;
}

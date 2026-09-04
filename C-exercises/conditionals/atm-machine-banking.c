#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input, pin, choice, balance = 100000, amount;
	printf("\nDial 182 to access MTN Mobile Money: ");
	scanf("%d", &input);
	if(input == 182){
		printf("\nWelcome to ATM Banking.\nPlease enter your 4-digit pin to access MoMo: ");
		scanf("%d", &pin);
		if(pin == 2345){
			printf("\n========Welcome to the ATM Banking.========\n");
			printf("1.Check Balance\n");
			printf("2.Deposit Money\n");
			printf("3.Withdraw Money\n");
			printf("4.Exit\n");
			printf("\n===========================================\n");
			printf("Enter the choice: ");
			scanf("%d", &choice);
			if(choice == 1){
				printf("%d", balance);
			} else if(choice == 2){
				printf("Enter the amout to deposit: ");
				scanf("%d", &amount);
				balance += amount;
				printf("Your new balance is RWF %d", balance);
			} else if(choice == 3){
				printf("Enter the amout to withdraw: ");
				scanf("%d", &amount);
				if(amount <= balance){
					balance -= amount;
				    printf("Your new balance is RWF %d", balance);
				} else {
					printf("Insufficient funds");
				}
				
			} else if(choice == 4){
				printf("Thank you for your business");
			} 
		} else{
			printf("Invalid PIN.");
		}
	} else{
		printf("Invalid USSD code");
	}
	return 0;
}

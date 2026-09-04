#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int input, pin, option, balance;
	balance = 25000;
	printf("\nDial 182 to access MTN Mobile Money\n");
	scanf("%d", &input);
	if(input == 182){
		printf("\nEnter your 4-digit MoMo PIN: ");
		scanf("%d", &pin);
		if(pin == 2345){
			printf("\n<========== Welcome To MoMo ===========>\n");
			printf("\n|      1. Send Money.                  |\n");
			printf("\n|      2. Buy Airtime.                 |\n");
			printf("\n|      3. Check Balance.               |\n");
			printf("\n|      4. Pay Bill.                    |\n");
			printf("\n|      5. Exit.                        |\n");
			printf("\n<======================================>\n");
			printf("\nEnter your choice: ");
			scanf("%d", &option);
			switch(option){
				case 1:
					printf("\nSend Money:\n");
					printf("1. To MoMo User.\n");
					printf("2. To Other Networks.\n");
					break;
				case 2:
					printf("\nBuy Airtime:\n");
					printf("1. For Self.\n");
					printf("2. For Others.\n");
					break;
				case 3:
					printf("\nCheck Balance:\n");
					printf("Your MoMo Balance is RWF %d.", balance);
					break;
				case 4:
					printf("\nPay Bill:\n");
					printf("1. Electricity.\n");
					printf("2. Water.\n");
					printf("3. TV Subscriptions.\n");
					break;
				case 5:
					printf("\nThank you for using MTN Mobile Money.");
					break;
				default:
					printf("Invalid choice, Please try again.");
			}
			
		} else{
			printf("Invalid PIN");
		}
		
	} else {
		printf("Invalid USSD code");
	}
	
	return 0;
}

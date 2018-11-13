
#include <stdio.h>

main() {

	int count= 0;  // count how mach number i get.
	int sum= 0; // sum all the nums.
	int num = 0; // the numer from the user


	double average= 0;
	int pure = 0;   

	printf("Welcome, please enter the weights of each ingredient:\n");
	scanf("%d", &num); // scaning the first num.
	sum=+num; // sum the first num.

	while (num > -1){ // while the user didnt push -(num) count++ and sum the num.
		scanf("%d", &num);
		count++;
		sum=sum+num;
	}
	if (num <-1){ // if he put a negative number i remove heis value from the sum.
		sum= sum - num;
	}
	if (count <3){ // if there is low then 3 nums.
		printf("Not enough ingredients.\n");
		return 0;
	}
	if (count >10){ // if there is more them 10 nums.
		printf("Too many ingredients.\n");
		return 0;
	}

	average= (double)sum/count; //calculate the average of the numbers.
	pure= count*10; // claculate the prercent of the pure.

	printf("The final product weighs %.3f pounds and is %d percent pure.\n",average , pure);

	return 0;
}  



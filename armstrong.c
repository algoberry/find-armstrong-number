#include <stdio.h>
int main() {
	//Entry Point
	int number, temp, count = 0, total = 0;
	printf("Enter the integer number: ");
	scanf("%d", &number);
	
	//Find the number of digits
	temp = number;
	while(temp > 0) {
		count = count + 1;
		temp = temp/10;
	}
	
	temp = number;
	while(temp > 0) {
		total = total + power(temp%10,count);
        temp = temp/10;
	}
		
	if(number == total) {
		printf("%d is an Armstrong number.\n", number);
	}
	else
	{
		printf("%d is not an Armstrong number.\n", number);
	}
	return 0;
}

//User Defined Pow Function
int power(int base,int exponent) {
	int sum = 1;
	while(exponent > 0) {
		sum = sum * base;
		exponent = exponent - 1;
	}
	return sum;
}

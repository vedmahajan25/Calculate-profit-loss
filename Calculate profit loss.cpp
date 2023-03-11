#include<stdio.h>
int main ()
{
	int cost, sell, amount;
	printf("Enter cost price -> ");
	scanf("%d",&cost);
	printf("Enter selling price -> ");
	scanf("%d",&sell);
	
	if (sell>cost)
	{
		amount = sell-cost;
		printf("\nPROFIT = %d",amount);
	}
	else if (cost>sell)
	{
		amount = cost-sell;
		printf("\nLOSS = %d",amount);
	}
	else
	{
		printf("\nNo Profit No Loss...");
	}
	return 0;
}



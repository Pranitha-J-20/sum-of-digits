#include<stdio.h>
int sumofdigits(int num);
 main()
{
	int num,sum;
	scanf("%d",&num);
	sum=sumofdigits(num);
	printf("sum of digits: %d",sum);
}
int sumofdigits(int num)
{
	if (num==0)
	return 0;
	
	return(num%10+sumofdigits(num/10));
}

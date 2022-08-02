
#include<stdio.h>
void myPattern()
{
	int i,j,a=10;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=a;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	printf("\n Star Pattern ");
}
int main()
{
	myPattern();
}

/*
#include<stdio.h>
void myPattern(int i,int j,int a)
{
	printf("\n Star Pattern ");
}	
int main()
{
	int a=10,i,j;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=a;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		a--;
	}
	myPattern(i,j,a);
}


         *
        * *
       * * *
      * * * *
     * * * * *
*/
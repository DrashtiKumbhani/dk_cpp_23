#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	int n;
	
	printf("\n Enter String :");
	gets(str1);
	
	/*	strlen()	*/
	n=strlen(str1);
	printf("\n String length : %d",n);
	
	/*	strrev()	*/
	printf("\n str1 : %s",str1);
	strrev(str1);
	printf("\n String Reverse : %s",str1);

	/*	strupr()	*/
	printf("\n str1 : %s",str1);
	strupr(str1);
	printf("\n String upper case : %s",str1);

	/*	strlwr()	*/
	printf("\n str1 : %s",str1);
	strlwr(str1);
	printf("\n String lower case : %s",str1);

	/*	strnset()	*/
	
	strnset(str1,'*',5);
	printf("\n String strnset : %s",str1);
	
}
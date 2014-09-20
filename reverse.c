#include<stdio.h>

int reverse(char s[])
{
	int i,j;
	char ch;
	for (i=0;s[i] != '\0';i++)
	{
	}
	--i;
	printf("value of i is : %d\n",i);
	for(j=0;j<i;j++)
	{
		ch = s[j];
		s[j] = s[i];
		s[i] = ch;
		--i;
	}
	return 0;
}

int main(void)
{

	char s[] = " My name is harihar";
	printf("The string is : %s \n",s);
	reverse(s);
	printf("After reversal\n");
	printf("%s\n",s);
	return 0;

}

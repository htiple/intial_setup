#include<stdio.h>
// master code
void swap(char **s1, char **s2){
	
	printf("Value of s1 is : %s\n",s1);
	printf("Value of s2 is : %s\n",s2);
	char *tmp;
	*tmp = *s1;
	*s1 = *s2;
	*s2 = *tmp;
	printf("Value of s1 is : %s\n",s1);
	printf("Value of s2 is : %s\n",s2);
}
/*
Feature 1 

implemented

*/
int main(){

char *p1,*p2;

p1="My name is harihar";
p2="My name is tiple";

swap(&p1,&p2);
	printf("Value of s1 is : %s\n",p1);
	printf("Value of s2 is : %s\n",p2);
return 0;

}

#include<stdio.h>
// This code will go int the testing branch
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
int main(){

char *p1,*p2;

p1="My name is harihar";
p2="My name is tiple";

swap(&p1,&p2);
	printf("Value of s1 is : %s\n",p1);
	printf("Value of s2 is : %s\n",p2);
return 0;

}

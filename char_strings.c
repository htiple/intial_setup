#include <stdio.h>
void my_strcpy(char *dest, const char *src);
char strA[80] = "A string to be used for demonstration purposes";
char strB[80] = "123456789123456789123456789123456789123456789123456789123456789123456789123456789123456789";
int main(void)
{
	char *pA;		/* a pointer to type character */
	char *pB;		/* another pointer to type character */
	puts(strA);		/* show string A */
	pA = strA;		/* point pA at string A */
	puts(pA);		/* show what pA is pointing to */
	pB = strB;		/* point pB at string B */
	putchar('\n');		/* move down one line on the screen */
	my_strcpy(pB,pA);
	puts(strB);		/* show strB on screen */
	return 0;
}
void my_strcpy(char *dest, const char *src){
	
//	*src = 'x';
	while(*src != '\0')		/* line A (see text) */
	{
		*dest = *src;		/* line B (see text) */
		dest = dest + 1;
		src = src + 1;
	}
	*dest = '\0';			/* line C (see text) */
}

#include<stdio.h>
#include<limits.h>

int main(void)
{
printf("Size of character in this machine is %d bytes\n",sizeof(char));
printf("maximum size of char %d\n",CHAR_MAX);
printf("minimum size of char %d\n",CHAR_MIN);
printf("maximum size of unsigned char %d\n",UCHAR_MAX);
printf("Size of float in this machine is %d bytes\n",sizeof(float));
printf("Size of integer in this machine is %d bytes\n",sizeof(int));
printf("maximum size of int %d\n",INT_MAX);
printf("minimum size of int %d\n",INT_MIN);
printf("maximum size of short int %d\n",SHRT_MAX);
printf("minimum size of short int %d\n",SHRT_MIN);

printf("maximum size of unsigned int %u\n",UINT_MAX);
return 0;
}

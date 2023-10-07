#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a;
	int b;
	b=60;
	
	printf("input seconds:");
	scanf("%i", &a);
	
	printf("the time is %i:%i \n", a/b, a%b);
	
	
	system("PAUSE");
	return 0;
}

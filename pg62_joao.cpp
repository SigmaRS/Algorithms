#include <stdio.h>
#include <conio.h>

int main()
{
	char str[5] = "Joao";
	printf("String: %s", str);
	printf("\nSegunda letra: %c", str[1]);
	
	str[1] = 'U';
	printf("\nString: %s", str);
	printf("\nSegunda letra: %c", str[1]);
	
	getch();
}

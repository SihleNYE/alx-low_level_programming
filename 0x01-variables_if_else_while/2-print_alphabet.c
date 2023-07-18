#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entry point
 * Description:'Print lowercase alphabets with ASCII'
 * Retutn Always (0)
 */

int main()

{
	int i;
       	i=97;	
	while (i<=122){
		putchar(i);
		i ++;
	}
	putchar('\n');
 	return (0);
}

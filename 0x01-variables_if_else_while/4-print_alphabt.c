#include <stdio.h>
/**
* main - Entry poin
*
* Return: Always 0 (Success/correct)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n');
return (0);
}

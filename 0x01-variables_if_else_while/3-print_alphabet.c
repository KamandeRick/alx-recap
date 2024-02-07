#include <stdio.h>

/*Main -Entry point
 * Return: Always 0
 */

int main(void)
{
        char ch, CH;
        for (ch = 97; ch < 123; ch++)
        {
                putchar(ch);
        }
	for (CH = 65; CH < 91; CH++)
        {
                putchar(CH);
        }
        putchar('\n');
        return(0);
}

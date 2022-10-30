#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints all minutes in a day
 *
 * Return: Always 0.
 */
int jack_bauer(void)

{
	int a;
	int b;
	int c;
	int d;
	int e = 50;
	int f;
	int g;
	int h;

	for (a = 48; a <= 49; a++)
	{
		for (b = 48; b <= 57; b++)
        	{
            		for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
                		{
                    			putchar(a);
                    			putchar(b);
                    			putchar(':');
                    			putchar(c);
                    			putchar(d);
                    			putchar('\n');
					if (a == '1' && b == '9' && c == '5' && d == '9')
                    			{
                        			for (f = 48; f <= 51; f++)
                        			{
                            				for (g = 48; g <= 53; g++)
                            				{
                                				for (h = 48; h <= 57; h++)
                                				{
                                    					putchar(e);
                                    					putchar(f);
                                    					putchar(':');
                                    					putchar(g);
                                    					putchar(h);
                                    					putchar('\n');
								}
							}
						}
					}
				}
			}
		}
	}
	return (0);
}

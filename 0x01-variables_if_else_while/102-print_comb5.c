#include <stdio.h>                                                                                                                      

/* more headers goes there */                                                                                                           

                                                                                                                                        

/* betty style doc for function main goes there */                                                                                      

/**                                                                                                                                     
 *
 *  * main -Entry point                                                                                                                    
 *
 *   *                                                                                                                                      
 *
 *    * Return: Always 0 (Success)                                                                                                           
 *
 *     */                                                                                                                     

int main(void)                                                                                                                          

{                                                                                                                                       

	int a;                                                                                                                                  

	int b;                                                                                                                                  

	int c;                                                                                                                                  

	int d;                                                                                                                                

	                                                                                                                                        

	for (a = 48; a <= 57; a++)                                                                                                              

	{                                                                                                                                     

		        for (b = 48; b <= 57; b++)                                                                                                     

				        {                                                                                                                              

						                for (c =48; c <= 57; c++)                                                                                              

									                {                                                                                                                     

												                        for (d = 49; d <= 57; d++)

																                        {             



																				                                if (((d * 1000) + (c * 100) + (b * 10) + (a * 1)) > ((a * 1000) + (b * 100) + (c * 10) + (d * 1)))

																									                                {                                                                                                 

																														                                        putchar(a);                                                                                     

																																			                                        putchar(b);                                                                                     

																																								                                        putchar(32);                                                                                   

																																													                                        putchar(c);                                                                                     

																																																		                                        putchar(d);                                                                

																																																							                                        if ((a + b + c + d) != (57 + 56 + 57 + 57))

																																																													                                        { putchar(44);                                                                                    

																																																																			                                        putchar(32); }

																																																												                                }                                                                               

																								                        }                                                                                                                                                                                                            

															                }                                                                                                                     

								        }                                                                                                                              

	}                                                                                                                                   

	putchar('\n');                                                                                                                       

	return (0);                                                                                                                            

}

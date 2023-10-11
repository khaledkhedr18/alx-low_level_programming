#include <stdio.h>

int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_h1, f2_h1, f2_h2;
	unsigned long h1, h2;

	putchar(f1 + '0'); /* Prints the first number */
	putchar(','); /* Prints a comma */
	putchar(' '); /* Prints a space */
	putchar(f2 + '0'); /* Prints the second number */
	for (count = 0; count < 90; count++) /* Prints the next 90 numbers */
	{
		sum = f1 + f2;
		putchar(','); /* Prints a comma */
		putchar(' '); /* Prints a space */
		if (sum > 9) /* Checks if the number has more than one digit */
		{
			putchar(sum / 10 + '0'); /* Prints the first digit */
			putchar(sum % 10 + '0'); /* Prints the second digit */
		}
		else
		{
			putchar(sum + '0'); /* Prints the single digit */
		}
		f1 = f2;
		f2 = sum;
	}
	f1_h1 = f1 / 10000000000; /* Splits the 91st number into two halves */
	f2_h1 = f2 / 10000000000; /* Splits the 92nd number into two halves */
	f1_h2 = f1 % 10000000000;
	f2_h2 = f2 % 10000000000;
	for (count = 91; count < 98; count++) /* Prints the last six numbers */
	{
		h1 = f1_h1 + f2_h1; /* Adds the first halves */
		h2 = f1_h2 + f2_h2; /* Adds the second halves */
		if (h2 > 9999999999) /* Checks for overflow */
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		putchar(','); /* Prints a comma */
		putchar(' '); /* Prints a space */
		if (h1 > 9) /* Checks if the first half has more than one digit */
		{
			putchar(h1 / 10 + '0'); /* Prints the first digit of the first half */
			putchar(h1 % 10 + '0'); /* Prints the second digit of the first half */
		}
		else
		{
			putchar(h1 + '0'); /* Prints the single digit of the first half */
		}
		
                if (h2 > 999999999) /* Checks if the second half has ten digits */
                {
                        putchar(h2 / 1000000000 + '0'); /* Prints the first digit of the second half */
                        h2 %= 1000000000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 99999999) /* Checks if the second half has nine digits */ 
                {
                        putchar(h2 / 100000000 + '0'); /* Prints the second digit of the second half */ 
                        h2 %= 100000000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 9999999) /* Checks if the second half has eight digits */ 
                {
                        putchar(h2 / 10000000 + '0'); /* Prints the third digit of the second half */ 
                        h2 %= 10000000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 999999) /* Checks if the second half has seven digits */ 
                {
                        putchar(h2 / 1000000 + '0'); /* Prints the fourth digit of the second half */ 
                        h2 %= 1000000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 99999) /* Checks if the second half has six digits */ 
                {
                        putchar(h2 / 100000 + '0'); /* Prints the fifth digit of the second half */ 
                        h2 %= 100000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 9999) /* Checks if the second half has five digits */ 
                {
                        putchar(h2 / 10000 + '0'); /* Prints the sixth digit of the second half */ 
                        h2 %= 10000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 999) /* Checks if the second half has four digits */ 
                {
                        putchar(h2 / 1000 + '0'); /* Prints the seventh digit of the second half */ 
                        h2 %= 1000; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 99) /* Checks if the second half has three digits */ 
                {
                        putchar(h2 / 100 + '0'); /* Prints the eighth digit of the second half */ 
                        h2 %= 100; 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                }
                
                if (h2 > 9) /* Checks if the second half has two digits */ 
                {
                        putchar(h2 / 10 + '0'); /* Prints the ninth digit of the second half */ 
                        putchar(h2 % 10 + '0'); /* Prints the tenth digit of the second half */ 
                }
                else
                {
                        putchar('0'); /* Pads a zero for missing digit */ 
                        putchar(h2 + '0'); /* Prints the single digit of the second half */
                }
		f1_h1 = f2_h1; /* Updates the previous halves */
		f1_h2 = f2_h2;
		f2_h1 = h1; /* Updates the current halves */
		f2_h2 = h2;
	}
	putchar('\n');
	return (0);
}

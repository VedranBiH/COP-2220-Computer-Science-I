/* Program Name: COP 2220- Project 2-
	Author: Vedran Pehlivanovic
	Description: This program calculates a specific formula, the sum of the numbers, and the average of the numbers
	Input: Four numbers in the format nnn nnn nnn.nn nnn.nn
	Output: The answer to the formula, the sum of the numbers, and the average of the numbers that were input.
*/

#include <stdio.h>

int main(void)
{
int a;
int b;
float c;
float d;
float sum;
float avg;
float result;

printf("COP 2220 Project 2- Vedran Pehlivanovic.\n\n");
printf("Enter four numbers in the format nnn nnn nnn.nn nnn.nn<enter>:\n");
scanf("%d %d %f %f", &a, &b, &c, &d);

result=((a-d)/(float)c)*b;
sum= a + b+c+d;
avg= sum/4;

printf("The result of the calculation (( %d - %0.2f) / %0.2f) * %d is %0.2f\n\n", a, d, c, b, result);
printf("The sum of the input numbers is: %0.2f\n", sum);
printf("The average of the input numbers is: %0.2f\n\n", avg);

printf("Thank you for your time. Have a awesome day!\n");
return 0;
}

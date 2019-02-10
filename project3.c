/* Program Name: COP 2220-83196 Project3-Functions 
	Written by:Vedran Pehlivanovic
	Date:October 14,2013
	Description:This program converts Celsius to Fahrenheit and vice-versa
	Input: C or F, and the degrees
	Output: print lines telling the user what the program does and what to type in and the conversion to Celsius or Fahrenheit degrees.
*/

#include <stdio.h>
#include <stdlib.h>


//Function Declarations
int fahcel();
int celfah();


int main(void)
{
//Local Declarations
int fah;
int cel;
char choice=' ';

//Statements
printf("This program converts celsius temperature to Fahrenheit degrees and Fahrenheit temperature to Celsius degree.\n");
printf("If you want to convert Celsius to Fahrenheit, please enter C.\n");

printf("if you want to convert Fahrenheit to Celsius, please enter F.\n");
scanf("%c",&choice);


if (choice == 'C')
{

//Local declarations for if decision
int cel=0;
fah=celfah ();
//statement
printf("Your tempature in Fahrenheit degrees is %d\n",fah);
}

if (choice == 'F')
{
//Local declarations for if decision
int fah=0;
cel=fahcel ();
//statement
printf("Your temparture in Celsius is %d\n",cel);
 
}

printf("Thank you for your time have a good day!");

return 0;
}
//main

/*========celfah===========
Convert Celsius to Fahrenheit
Pre none
Post Returns fah which is Fahrenheit
*/

int celfah ()
{
//Local Declarations
int cel=0;
int fah = 0;

//Statements
printf("Please enter temperature in Celsius degrees.\n"); 
   scanf("%d",&cel);              
    fah = ((((cel)*((9.0)/(5)))+(32)));

    return fah;
}
//celfah

/*================fahcel=============
Converts Fahrenheit to Celsius
Pre none
Post returns cel which is Celsius
*/

int fahcel ()
{
//Local Declarations
int fah=0;
int cel=0;

//statements
printf("Please enter temperture in Fahrenheit degrees.\n");
scanf("%d",&fah);
cel=((5.0/9)*(fah-32));

return cel;
}//fahcel  
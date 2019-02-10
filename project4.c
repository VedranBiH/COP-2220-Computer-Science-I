#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Program Name: COP 2220-83196 Project4- Quadratic Functions 
	Written by:Vedran Pehlivanovic
	Date:November 6th,2013
	Description:This program uses three functions to produce different sets of roots depending on the user input
	Input: Three numbers in the format A,B, and C where A cannot be less than 0
	Output: print lines telling the user what his/her root of the equation will be
*/

//Global declarations
float negsqr();
float possqr(float a, float b, float c, float d);
float zersqr(float a,float b);

int main(void)
{
    
    //local declarations
    float a;
    float b;
    float c;
    float d;
//statements
  printf ("enter three numbers a,b, and c. where a cannot equal 0.");
  scanf("%f%f%f",&a, &b, &c);
  d=((pow(b,2))-(4.0*(a)*(c)));
  
  
  
  if (d > 0)
  {
// local declarations and statements
        float factor=0;
        
        factor=possqr(a,b,c,d);
        
   }
   if (d<0)
{
// local declarations and statements
      float factor =0;
      factor= negsqr();
      
      }
      if (d==0)
      {
// local declarations and statements
            int factor=0;
            factor= zersqr(b,a);
            
            }
	
  return 0;
}
float possqr (float a, float b, float c, float d)
{
      //local declarations
    float x=0;
    float y=0;
    
    //statements
         x=(-b+(sqrt(d)))/(2.0*a);
        y=(-b-(sqrt(d)))/(2.0*a);
        printf("the first real root is %0.2f\n",x);
        printf("the second real root is %0.2f\n",y);
        return 0;
        }
        
        float negsqr()
        {
              //statements
            printf("There are two distinct (non-real) complex roots \n");
            return 0;
            }
            
            float zersqr(float b,float a)
            {
                  //local declarations and statements
                float x=0;
                x= -b/(2.0*a);
                printf("There is only one root %0.2f\n",x);
                return 0;
                }

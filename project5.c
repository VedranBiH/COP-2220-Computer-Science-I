/*Written by:Vedran Pehlivanovic
Date: 11-27-13
Description:ers. This program inserts 'x'at the appropriate place of the array
so that the resulting array is sorted in nondecreasing orde
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
//local declarations

 int  x[10];
 int  i, j, n, m, temp, key, pos;

float clrscr();

//statements
 printf("Enter how many elements\n");
 scanf("%d", &n);


 printf("Enter the elements\n");
 for(i=0; i<n; i++)
 {
  scanf("%d", &x[i]);
 }

 printf("Input array elements are\n");
 for(i=0; i<n; i++)
 {
  printf("%d\n", x[i]);
 }
//for statement
 for(i=0; i< n; i++)
 {
  for(j=i+1; j<n; j++)
  {
   if (x[i] > x[j])
{
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
}
}
}
//statements
 printf("Sorted list is\n");
 for(i=0; i<n; i++)
 {
  printf("%d\n", x[i]);
 }
//statement
 printf("Enter the element to be inserted\n");
 scanf("%d",&key);

//for statement
 for(i=0; i<=n; i++)
 {
//if statement

  if ( key <= x[i] )
  {
   pos = i;
   break;
  }
 }

 m = n - pos + 1 ;

 for(i=0; i<= m ; i++)
 {
  x[n-i+2] = x[n-i+1] ;
 }

 x[pos] = key;

//statements

 printf("Final list is\n");
 for(i=0; i<=n; i++)
 {
  printf("%d\n", x[i]);
 }
}

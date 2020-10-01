//header file
#include <stdio.h>

//main function starts
int main() 
{
     int n, copy, dig, rev = 0;
  
     printf("Enter a number : ");         //Guiding user to enter a number
     scanf("%d", &n);                     //saving a number entered by user on console to "n" integer

     copy = n;                            //taking backup of original integer

     while (n != 0)                       //performing given operation till number becomes 0
     {
          dig = n % 10;                   //feachinf the last digit of a number in "dig" variable
          rev = rev * 10 + dig;           //creating space for the degit and adding in the "rev" variable
          n /= 10;                        //removing the last digit from main variable
     }//while ends

    // if backup number is equal to reverse number it will print "palindrome number" on console else "not palindrome"
     if (rev == copy)
         printf("\nEntered number is palindrome");
     else
         printf("\nEnteredNumber is not palindrome!");

     return 0;
}//main ends
//main function ends

  1 #include <stdio.h>
  2 
  3 /**
  4  * main - A program that prints the size of various types on the computer
  5  * Return: 0 (Success)
  6  */
  7 int main(void)
  8 {
  9 char p;
 10 int b;
 11 long int c;
 12 long long int d;
 13 float f;
 14 printf("Size of a char: %lu byte(s)\n", sizeof(p));
 15 printf("Size of an int: %lu byte(s)\n", sizeof(b));
 16 printf("Size of a long int: %lu byte(s)\n", sizeof(c));
 17 printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
 18 printf("Size of a float: %lu byte(s)\n", sizeof(f));
 19 return (0);
 20 }
 21 
~     

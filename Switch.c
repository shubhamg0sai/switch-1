#include <stdio.h> 
#include <math.h>
int main() 
       {           
    printf("enter '1' for converting temperature Fahrenheit to Celsius\n");
 
printf("\n");
  
  printf("enter '2' for swapping two numbers without using third variable\n");
 
printf("\n");
 
  printf("enter '3' for swapping two numbers using third variable\n");

printf("\n");

  printf("enter '4' for find then sum and percentage of five subjects\n");

printf("\n");

  printf("enter '5' for find smallest number from three different numbers\n");

printf("\n");

  printf("enter '6' for find largest number from three different numbers\n");

printf("\n");

  printf("enter '7' for find area of triangle\n");

printf("\n");

  printf("enter '8' for 1 to 1000 tables\n");

printf("\n");

  printf("enter '9' for find a number is even or odd\n");

printf("\n");

  printf("enter '0' for converting a decimal number in Hexadecimal and octal\n");

printf("\n");

  float fah, cel;
  int x,y; int temp;
  float num1, num2, num3, num4, num5;           float sum, per; 
  double n1, n2, n3;
  float a,b,c,s,area;
  int num;
  int n;
 
  char Shubhamg0sain;
    
       scanf("%c", & Shubhamg0sain);
       switch (Shubhamg0sain) 
       { 
        
       case '1':
       printf(" enter temperature in Fahrenheit\n" );
       scanf("%f", &fah);
       cel = (5.0/9) * (fah - 32);       
       printf(" temperature of %.2f°F is %.2f°C in celsius\n", fah ,cel);
       break;
    
    
       case '2':
       printf("enter two different numbers\n");
       scanf ("%d%d", &x ,&y); 
       printf("before swapping x=%d, y=%d\n", x, y); 
   //Swapping logic
       x = x+y;
       y = x-y;
       x = x-y;
       printf("After swapping x=%d, y=%d\n", x, y);
       break;
       
         
       case '3':
       printf("enter two different numbers\n");
       scanf ("%d%d", &x ,&y); 
       printf("before swapping x=%d, y=%d\n", x, y); 
       temp = x;// temp = 10
       x = y;// a = 20 
       y = temp;
       printf("After swapping x=%d, y=%d\n", x, y);
       break;
       
        
       case '4':
       printf("Enter your five subjects marks\n"); 
       scanf("%f%f%f%f%f",&num1, &num2, &num3, &num4, &num5);
       sum = num1+num2+num3+num4+num5;
       per = sum/500*100;
       printf("sum is %.2f\n", sum);
       printf("percentage is %.2f\n", per);
       break;
       
            
       case '5':       
       printf("Enter three different numbers\n "); 
       scanf("%lf%lf%lf", &n1, &n2, &n3);   
       if (n1 < n2 && n1 < n3)
       {
       printf("%.1f is the smallest number\n", n1);
       }     
       if (n2 < n1 && n2 < n3) 
       {
       printf("%.1f is the smallest number\n", n2); 
       }  
       if (n3 < n1 && n3 < n2)
       {
       printf("%.1f is the smallest number\n", n3); 
       }
       break;
       
              
       case '6':
       printf("Enter three different numbers\n "); 
       scanf("%lf%lf%lf", &n1, &n2, &n3);   
       if (n1 > n2 && n1 > n3)
       {
       printf("%.1f is the largest number\n", n1);
       }     
       if (n2 > n1 && n2 > n3) 
       {
       printf("%.1f is the largest number\n", n2); 
       }  
       if (n3 > n1 && n3 > n2)
       {
       printf("%.1f is the largest number\n", n3); 
       }
       break;
     

       case '7':       
       printf("three side of triangle\n");
       scanf("%f%f%f", &a, &b, &c);
       s = (a+b+c)/2;
       area = sqrt(s*(s-a)*(s-b)*(s-c)); 
       printf("%4f\n", area);
       break;
       
             
       case '8':
       for(x=1;x<=100;x++)
       {
       for(y=1;y<=10;y++)
       printf("%d×%d=%d\n",x,y,x*y);
       printf("\n\n");
       }
       break;
    
       
       case '9':
       printf("Enter an integer\n ");
       scanf("%d", &num);
       if(num % 2 == 0) 
       printf("%d is even\n", num); 
       else 
       printf("%d is odd\n", num);
       break;
    
                
       case '0':
       printf("Enter a decimal number\n ");
       scanf("%d", &n);
       printf("Octal equivalent of %d is = %o\n", n, n);
       printf("Hexadecimal equivalent of %d is = %x\n", n, n);
       break;
                        
  default:
  printf("YOU ENTER WORNG OPTION PLEASE ENTER CORRECT OPTION");
       }
    
    return 0;
     }

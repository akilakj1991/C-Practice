#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char name1[10], name2[10];
char country1[10]; 
char original_country1[10];
char university1[80];
char uni_add[80];
int age;
char temp1[10], temp2[10], temp3[10], temp4[10];

int add(int num1, int num2);
int sub(int num1, int num2);
float dvd(int num1, int num2);
int mpl(int num1, int num2);

int main() {
   printf("Hello, my Name is Akila Jayawardena and I am from Sri Lanka and 28 years old. I am currently live in New Zealand.\n");
   printf("Please enter your first name and family name?\n");
   scanf("%s %s", name1, name2);
   printf("Hello!! %s.\n", name1);
   printf("How old are you?\n");
   scanf("%d", &age);
   printf("Wow I cannot believe you are %d.\nWhere are you from?\n", age);
   fflush(stdin);
   scanf("%[^\n]s", country1);
   printf("Wow, %s is a beautiful country.\nWhere were you born?\n", country1);
   fflush(stdin);
   scanf("%[^\n]s", original_country1);
   printf("Wow, %s is a beautiful country too.\nWhich universty did you study?\n", original_country1);
   fflush(stdin);
   scanf("%[^\n]s", university1);
   printf("Where is %s located at?\n", university1);
   fflush(stdin);
   scanf("%[^\n]s", uni_add);
   printf("Wow that area is nice too.\nGive me two numbers.\n");
   fflush(stdin);
   int number1, number2, number3;
   float number4;
   scanf("%d", &number1);
   scanf("%d", &number2);
   printf("Do you want to add[+]/substract[-]/divide[/]/multiply[X] those numbers:\n");
   scanf("%s", temp1);
   if(temp1 == "add")
   {
      number3 = add(number1, number2);
      printf("The value is %d", number3);
   } 
   else if(temp1 == "substract")
   {
      number3 = sub(number1, number2);
      printf("The value is %d", number3);
   }
   else if(temp1 == "divide")
   {
      number4 = dvd(number1, number2);
      printf("The value is %f", number4);
   }
   else if(temp1 == "multiply")
   {
      number3 = mpl(number1, number2);
      printf("The value is %d", number3);
   }
   return 0;
}

int add(int num1, int num2){
   int result;
   result = num1+num2;
   return result;
}
int sub(int num1, int num2)
{
   int result;
   result = num1-num2;
   return result;
}
float dvd(int num1, int num2)
{
   float result;
   result = num1 / num2;
   return result;
}

int mpl(int num1, int num2)
{
   int result;
   result = num1 * num2;
   return result;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char name1[10], name2[10];
char country1[], country2[10];
char original_country1[], original_country2[10];
char university1[10], university2[10];
char uni_add[80];
int age;
char temp1, temp2, temp3, temp4;

//int calc(int num1, int num2);

int main() {
   printf("Hello, my Name is Akila Jayawardena and I am from Sri Lanka and 28 years old. I am currently live in New Zealand.\n");
   printf("Please enter your first name and family name?\n");
   scanf("%[^\n]s", name1);
   printf("Hello!! %s.\n", name1);
   printf("How old are you?\n");
   scanf("%d", &age);
   printf("Wow I cannot believe you are %d.\nWhere are you from?\n", age);
   //scanf("%[^\n]", country1);
   /*scanf("%s", country2);
   if(strlen(country2) == 0)
   {
      printf("Wow, %s is a beautiful country.\nWhere were you born?\n", country1);
   }
   else
   {
      printf("Wow, %s %s is a beautiful country.\nWhere were you born?\n", country1, country2);
   }*/
   printf("Wow, %s is a beautiful country.\nWhere were you born?\n", country1);
   //scanf("%[^\n]", original_country1);
   /*scanf("%s", original_country2);
   if(strlen(original_country2) == 0)
   {
      printf("Wow, %s is a beautiful country too.\nWhich universty did you study?\n", original_country1);
   }
   else
   {
      printf("Wow, %s %s is a beautiful country too.\nWhich university did you study?\n", original_country1, original_country2);
   }*/
   printf("Wow, %s is a beautiful country too.\nWhich universty did you study?\n", original_country1);
   scanf("%s %s", university1, university2);
   printf("Where is %s %s located at?\n", university1, university2);
   scanf("%s", uni_add);
   printf("Wow that area is nice too.\n");
   return 0;
}

/*int clac(int num1, int num2){
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char name1[10], name2[10];
char country1[10], country2[10];
char original_country1[80], original_country2[10];
char university1[10], university2[10];
char uni_add[80];
int age;
int main() {
   printf("Hello, World!\n");
   printf("My Name is Akila Jayawardena.\n");
   printf("From Sri Lanka and 28 years old.\n");
   printf("I am currently live in New Zealand.\n");
   printf("Please say your name?\n");
   scanf("%s %s", name1, name2);
   printf("Hello %s.\n", name1);
   printf("How old are you?\n");
   scanf("%d", &age);
   printf("Wow I cannot believe you are %d.\nWhere are you from?\n", age);
   scanf("%s", country1, country2);
   if(strlen(country2) == 0)
   {
      printf("Wow, %s is a beautiful country.\nWhere were you born?\n", country1);
   }
   else
   {
      printf("Wow, %s %s is a beautiful country.\nWhere were you born?\n", country1, country2);
   }
   scanf("%s", original_country1, original_country2);
   if(strlen(original_country2) == 0)
   {
      printf("Wow, %s is a beautiful country.\nWhich universty did you study?\n", original_country1);
   }
   else
   {
      printf("Wow, %s %s is a beautiful country.\nWhich university did you study?\n", original_country1, original_country2);
   }
   scanf("%s %s", university1, university2);
   printf("Where is %s %s located at?\n", university1, university2);
   scanf("%s", uni_add);
   printf("Wow that area is nice too.\n");
   return 0;
}

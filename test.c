#include <stdio.h>
char name[80];
char country[80];
char original_country[80];
char university[80];
char uni_add[80];
int age;
int main() {
   printf("Hello, World!\n");
   printf("My Name is Akila Jayawardena\n");
   printf("From Sri Lanka and 28 years old\n");
   printf("I am currently live in New Zealand\n");
   printf("Please say your name?\n");
   scanf("%s", name);
   printf("Hello %s.\n", name);
   printf("How old are you?\n");
   scanf("%d", &age);
   printf("Wow I cannot believe you are %d\nWhere are you from?\n", age);
   scanf("%s", country);
   printf("Wow, %s is a beautiful country\n Where were you born?\n", country);
   scanf("%s", original_country);
   printf("Wow, %s is also a beautiful country\nWhere did you study?\n ", original_country);
   scanf("%s", university);
   printf("Where is %s located at?\n", university);
   scanf("%s", uni_add);
   printf("Wow that area is nice too\n");
   return 0;
}

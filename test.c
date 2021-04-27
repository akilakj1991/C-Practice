#include <stdio.h>
char name[80];
int i;
int main() {
   printf("Hello, World!\n");
   printf("My Name is Akila Jayawardena\n");
   printf("From Sri Lanka and 28 years old\n");
   printf("I am currently live in New Zealand\n");
   printf("Please say your name?\n");
   scanf("%s", name);
   printf("Your name is %s.", name);
   printf("How old are you?\n");
   return 0;
}

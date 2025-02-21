#include <stdio.h>
#include <stdlib.h>
int main() {
printf("Welcome to FischingC!\n");
printf("The aim of this game is to catch every fish in the C!\n");
printf("But to do that, you need a fisching rod.\n");
printf("You can buy one in the shop.\n");
printf("Since you are a beginner, you can only afford the cheapest one.\n");
printf("You can buy 'Wooden Fisching Rod' for 10 Cents.\n");
printf("Do you want to buy it? (y/n)\n");
char answer;
scanf(" %c", &answer);
if (answer == 'y') {
printf("YOU BOUGHT 'WOODEN FISCHING ROD'!\n");
printf("Now you can start fisching!\n");
} else if (answer == 'n') {
printf("You didn't buy 'Wooden Fisching Rod'!\n");
} else {
printf("%c is an invalid input!\n", answer);
return 0;
}
return 0;
}

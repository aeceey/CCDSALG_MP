#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    // Reads a line of text from the standard input
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    // Reads an integer from the standard input
    scanf("%d", &age);

    // Prints the user's name and age
    printf("I am %sI am %d years old.\n", name, age);

    return 0;
}

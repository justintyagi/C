#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age. Please enter a positive number.\n");
    } else if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age > 13 && age < 18) {
        printf("You are a youngster.\n");
    } else {
        printf("You are a child.\n");
    }

    return 0;
}


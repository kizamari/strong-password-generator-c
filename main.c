#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// function to generate a random password
void generate_password(char* password) {
    // arrays of characters
    const char uppercase_characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char lowercase_characters[] = "abcdefghijklmnopqrstuvwxyz";
    const char numbers[] = "0123456789";
    const char symbols[] = "!@#$%^&*()_-+=<>?";

    // seed the random number generator with the current time
    srand(time(NULL));  // Ensures different random numbers on each execution

    // loop through the password and randomly select characters
    for (int i = 0; i < 12; i++) {  // Fixed password length of 12 characters
        // randomly select a character type (uppercase, lowercase, number, or symbol)
        int type = rand() % 4;

        if (type == 0) {
            password[i] = uppercase_characters[rand() % strlen(uppercase_characters)];
        } else if (type == 1) {
            password[i] = lowercase_characters[rand() % strlen(lowercase_characters)];
        } else if (type == 2) {
            password[i] = numbers[rand() % strlen(numbers)];
        } else {
            password[i] = symbols[rand() % strlen(symbols)];
        }
    }

    // add a null terminator at the end of the string
    password[12] = '\0';  // Null-terminate the password string
}

int main() {
    // declare a character array to store the generated password
    char password[13];  // 12 characters + 1 for the null terminator

    // generate the password
    generate_password(password);

    printf("Generated password: %s\n", password);

    return 0;
}

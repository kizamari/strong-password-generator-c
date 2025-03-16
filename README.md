# strong-password-generator-c
This is a random password generator in C that uses uppercase letters, lowercase letters, numbers, and symbols to create a secure and random password.
The code uses the rand() function seeded with the current time via srand(time(1)), ensuring the random number sequence changes with each execution. The password length is defined by the user, and the strlen() function is used to calculate the desired password length.

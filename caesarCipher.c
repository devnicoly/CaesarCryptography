#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT 1000

void show_introduction() {
    printf("============================================================\n");
    printf("           CAESAR CIPHER\n");
    printf("============================================================\n");
    printf("\n");
    printf("The Caesar Cipher is one of the oldest and most well-known\n");
    printf("encryption techniques. It was used by the Roman emperor\n");
    printf("Julius Caesar to send secret messages to his generals.\n");
    printf("\n");
    printf("How it works:\n");
    printf("- Each letter in the text is shifted a fixed number of positions\n");
    printf("  in the alphabet. This number is called the KEY.\n");
    printf("\n");
    printf("Example with key 3:\n");
    printf("  A becomes D\n");
    printf("  B becomes E\n");
    printf("  C becomes F\n");
    printf("  ...\n");
    printf("  Z wraps back to C\n");
    printf("\n");
    printf("Uppercase and lowercase letters are preserved, and\n");
    printf("characters such as numbers, spaces, and punctuation do not change.\n");
    printf("\n");
    printf("============================================================\n");
}

int menu() {
    char option[10];

    printf("\n");
    printf("[1] Got it, I want to encrypt a text\n");
    printf("[2] Exit\n");
    printf("\n");

    printf("Enter the desired option: ");
    fgets(option, sizeof(option), stdin);
    option[strcspn(option, "\n")] = '\0';

    return atoi(option);
}

int is_valid_key(const char *key) {
    if (*key == '\0') return 0;

    for (int i = 0; key[i] != '\0'; i++) {
        if (!isdigit((unsigned char)key[i])) {
            return 0;
        }
    }
    return 1;
}

void get_plain_text(char *plain_text, int size) {
    printf("Enter the text to be encrypted: ");
    fgets(plain_text, size, stdin);
    plain_text[strcspn(plain_text, "\n")] = '\0';
}

void encrypt_text(const char *plain_text, int key, char *ciphertext) {
    int i;
    for (i = 0; plain_text[i] != '\0'; i++) {
        char c = plain_text[i];

        if (isalpha((unsigned char)c)) {
            char base = isupper((unsigned char)c) ? 'A' : 'a';
            ciphertext[i] = (char)(((c - base + key) % 26 + 26) % 26 + base);
        } else {
            ciphertext[i] = c;
        }
    }
    ciphertext[i] = '\0';
}

int main() {
    char key_str[20];
    char plain_text[MAX_TEXT];
    char ciphertext[MAX_TEXT];
    int k;

    /* Displays the introduction about the Caesar Cipher */
    show_introduction();

    /* Displays the menu of options */
    int option = menu();

    if (option == 1) {
        /* continues to encryption */
    } else if (option == 2) {
        printf("See you soon!\n");
        return 0;
    } else {
        printf("Invalid option. Exiting the program.\n");
        return 1;
    }

    /* Asks the user for the key */
    printf("Enter the key (an integer): ");
    fgets(key_str, sizeof(key_str), stdin);
    key_str[strcspn(key_str, "\n")] = '\0';

    if (!is_valid_key(key_str)) {
        printf("The key must contain only digits!!!\n");
        return 1;
    }

    k = atoi(key_str);

    get_plain_text(plain_text, MAX_TEXT);
    encrypt_text(plain_text, k, ciphertext);
    printf("Encrypted text: %s\n", ciphertext);

    return 0;
}

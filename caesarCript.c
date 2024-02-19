#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Protótipos das funções
int is_valid_key(char *key);
char *get_plain_text(void);
void encrypt_text(char *plain_text, int key);

int main(int argc, char *argv[])
{
    // Verificar se o número de argumentos é válido
    if (argc != 2)
    {
        printf("Use: ./caesar key\n");
        return 1;
    }

    // Verificar se a chave contém apenas dígitos
    char *key = argv[1];
    if (!is_valid_key(key))
    {
        printf("Use: ./caesar key\n");
        return 1;
    }

    // Converter a chave para um número inteiro
    int k = atoi(key);

    // Solicitar ao usuário o texto simples
    char *plain_text = get_plain_text();

    // Criptografar o texto
    printf("ciphertext: ");
    encrypt_text(plain_text, k);
    printf("\n");

    // Liberar a memória alocada para o texto simples
    free(plain_text);

    // Retornar 0 para indicar sucesso
    return 0;
}

// Função para verificar se a chave contém apenas dígitos
int is_valid_key(char *key)
{
    for (int i = 0, n = strlen(key); i < n; i++)
    {
        if (!isdigit(key[i]))
        {
            return 0;
        }
    }
    return 1;
}

// Função para obter o texto simples do usuário
char *get_plain_text(void)
{
    char *plain_text = malloc(1000 * sizeof(char));
    if (plain_text == NULL)
    {
        return NULL;
    }

    printf("plaintext: ");
    fgets(plain_text, 1000, stdin);

    // Remover o caractere de nova linha, se presente
    size_t len = strlen(plain_text);
    if (plain_text[len - 1] == '\n')
    {
        plain_text[len - 1] = '\0';
    }

    return plain_text;
}

// Função para criptografar o texto
void encrypt_text(char *plain_text, int key)
{
    for (int i = 0, n = strlen(plain_text); i < n; i++)
    {
        char c = plain_text[i];

        if (isalpha(c))
        {
            char base = isupper(c) ? 'A' : 'a';
            printf("%c", (c - base + key) % 26 + base);
        }
        else
        {
            printf("%c", c);
        }
    }
}

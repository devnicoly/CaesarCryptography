# Caesar Cipher

[ Português ](#português) | [ English ](#english)

---

<a name="português"></a>
## Português

Projeto pessoal desenvolvido em linguagem C que implementa a **Cifra de César**, um dos métodos de criptografia mais antigos e conhecidos. O programa recebe uma chave numérica e um texto fornecido pelo usuário, e retorna o texto criptografado.

---

### O que é a Cifra de César?

A Cifra de César é uma técnica de criptografia por substituição, na qual cada letra do texto original é deslocada um número fixo de posições no alfabeto. Esse número é chamado de **chave**.

Por exemplo, com uma chave de valor 3:

- A letra `A` se torna `D`
- A letra `B` se torna `E`
- A letra `Z` volta para `C` (o alfabeto "dá a volta")

Letras maiúsculas e minúsculas são preservadas, e caracteres que não são letras (números, espaços, pontuação) permanecem inalterados.

---

### Estrutura do projeto

O projeto é composto por dois arquivos:

- **caesarCript.c**: Código-fonte do programa, escrito em linguagem C.
- **caesarCript.exe**: Executável compilado (Windows), pronto para rodar sem precisar compilar.

---

### Como funciona

1. O programa recebe uma **chave** (número inteiro) como argumento na linha de comando.
2. O usuário digita o **texto simples** (plaintext) que deseja criptografar.
3. O programa percorre cada caractere do texto:
   - Se for uma letra, aplica o deslocamento da chave.
   - Se não for letra, mantém o caractere original.
4. O resultado é exibido como **ciphertext** (texto cifrado).

---

### Como compilar e executar

#### Pré-requisitos

- Ter um compilador de C instalado (GCC, Clang ou equivalente).
- No Windows, pode-se usar o GCC via MinGW, ou o próprio executável já incluído (`caesarCript.exe`).

#### Compilar

No terminal, dentro da pasta do projeto:

```bash
gcc caesarCript.c -o caesarCript
```

Isso gera um executável chamado `caesarCript` (ou `caesarCript.exe` no Windows).

#### Executar

```bash
./caesarCript 3
```

O `3` é a chave da cifra. Você pode substituir por qualquer número inteiro positivo.

---

### Exemplo de uso

Entrada:

```
./caesarCript 3
plaintext: Hello, World!
```

Saída:

```
ciphertext: Khoor, Zruog!
```

Outro exemplo com chave 1:

```
./caesarCript 1
plaintext: abc XYZ
ciphertext: bcd YZA
```

---

### Explicação do código

O código está organizado em quatro funções principais:

- **`main`**: Verifica os argumentos, valida a chave, chama as funções de leitura e criptografia, e libera a memória.
- **`is_valid_key`**: Verifica se a chave contém apenas dígitos (nenhum caractere não numérico).
- **`get_plain_text`**: Lê o texto digitado pelo usuário, remove a quebra de linha e retorna a string.
- **`encrypt_text`**: Percorre o texto e aplica o deslocamento da Cifra de César, preservando maiúsculas, minúsculas e caracteres especiais.

---

### Tecnologias utilizadas

- Linguagem C
- Bibliotecas padrão: `stdio.h`, `stdlib.h`, `ctype.h`, `string.h`

---

### Autora

Desenvolvido por Nicoly Alves dos Santos.

LinkedIn: https://www.linkedin.com/in/devnicoly  
GitHub: https://github.com/devnicoly

---

### Licença

Este projeto está sob a licença MIT. Sinta-se livre para usar, estudar e modificar.

---

<a name="english"></a>
## English

Personal project developed in C that implements the **Caesar Cipher**, one of the oldest and most well-known encryption methods. The program takes a numeric key and a text provided by the user, and returns the encrypted text.

---

### What is the Caesar Cipher?

The Caesar Cipher is a substitution encryption technique in which each letter of the original text is shifted by a fixed number of positions in the alphabet. This number is called the **key**.

For example, with a key of 3:

- The letter `A` becomes `D`
- The letter `B` becomes `E`
- The letter `Z` wraps around to `C`

Uppercase and lowercase letters are preserved, and non-letter characters (numbers, spaces, punctuation) remain unchanged.

---

### Project structure

The project consists of two files:

- **caesarCript.c**: Source code of the program, written in C.
- **caesarCript.exe**: Compiled executable (Windows), ready to run without compiling.

---

### How it works

1. The program receives a **key** (integer) as a command-line argument.
2. The user types the **plaintext** to be encrypted.
3. The program goes through each character of the text:
   - If it is a letter, it applies the key shift.
   - If it is not a letter, it keeps the original character.
4. The result is displayed as **ciphertext**.

---

### How to compile and run

#### Requirements

- A C compiler installed (GCC, Clang, or equivalent).
- On Windows, you can use GCC via MinGW, or the included executable (`caesarCript.exe`).

#### Compile

In the terminal, inside the project folder:

```bash
gcc caesarCript.c -o caesarCript
```

This generates an executable named `caesarCript` (or `caesarCript.exe` on Windows).

#### Run

```bash
./caesarCript 3
```

The `3` is the cipher key. You can replace it with any positive integer.

---

### Usage example

Input:

```
./caesarCript 3
plaintext: Hello, World!
```

Output:

```
ciphertext: Khoor, Zruog!
```

Another example with key 1:

```
./caesarCript 1
plaintext: abc XYZ
ciphertext: bcd YZA
```

---

### Code explanation

The code is organized into four main functions:

- **`main`**: Checks the arguments, validates the key, calls the reading and encryption functions, and frees memory.
- **`is_valid_key`**: Checks whether the key contains only digits (no non-numeric characters).
- **`get_plain_text`**: Reads the text typed by the user, removes the newline, and returns the string.
- **`encrypt_text`**: Goes through the text and applies the Caesar Cipher shift, preserving uppercase, lowercase, and special characters.

---

### Technologies used

- C language
- Standard libraries: `stdio.h`, `stdlib.h`, `ctype.h`, `string.h`

---

### Author

Developed by Nicoly Alves dos Santos.

LinkedIn: https://www.linkedin.com/in/devnicoly  
GitHub: https://github.com/devnicoly

---

### License

This project is licensed under the MIT License. Feel free to use, study, and modify it.

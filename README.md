# Caesar Cryptography

[ Português ](#português) | [ English ](#english)

---

<a name="português"></a>
## Português

Projeto pessoal desenvolvido em linguagem C que implementa a **Cifra de César**, um dos métodos de criptografia mais antigos e conhecidos. O programa exibe uma introdução explicativa, apresenta um menu interativo e, em seguida, solicita ao usuário uma chave numérica e um texto, retornando o texto criptografado.

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

- **caesarCipher.c**: Código-fonte do programa, escrito em linguagem C.
- **caesarCipher.exe**: Executável compilado (Windows), pronto para rodar sem precisar compilar.

---

### Como funciona

1. O programa exibe uma **introdução** explicando o que é a Cifra de César e como ela funciona.
2. Em seguida, mostra um **menu** com duas opções:
   - `[1] Entendi, quero criptografar um texto`
   - `[2] Sair`
3. Se o usuário escolher a opção 1, o programa:
   - Solicita uma **chave** (número inteiro).
   - Valida se a chave contém apenas dígitos.
   - Solicita o **texto** a ser criptografado.
   - Percorre cada caractere do texto:
     - Se for uma letra, aplica o deslocamento da chave.
     - Se não for letra, mantém o caractere original.
   - Exibe o resultado como **texto criptografado**.
4. Se o usuário escolher a opção 2, o programa encerra.
5. Qualquer outra opção exibe uma mensagem de erro e encerra o programa.

---

### Como compilar e executar

#### Pré-requisitos

- Ter um compilador de C instalado (GCC, Clang ou equivalente).
- No Windows, pode-se usar o GCC via MinGW, ou o próprio executável já incluído (`caesarCipher.exe`).

#### Compilar

No terminal, dentro da pasta do projeto:

```bash
gcc caesarCipher.c -o caesarCipher
```

Isso gera um executável chamado `caesarCipher` (ou `caesarCipher.exe` no Windows).

#### Executar

```bash
./caesarCipher
```

No Windows:

```bash
caesarCipher.exe
```

---

### Exemplo de uso

Ao rodar o programa, a saída será algo como:

```
============================================================
           CAESAR CIPHER
============================================================

The Caesar Cipher is one of the oldest and most well-known
encryption techniques. It was used by the Roman emperor
Julius Caesar to send secret messages to his generals.

How it works:
- Each letter in the text is shifted a fixed number of positions
  in the alphabet. This number is called the KEY.

Example with key 3:
  A becomes D
  B becomes E
  C becomes F
  ...
  Z wraps back to C

Uppercase and lowercase letters are preserved, and
characters such as numbers, spaces, and punctuation do not change.

============================================================

[1] Got it, I want to encrypt a text
[2] Exit

Enter the desired option: 1
Enter the key (an integer): 3
Enter the text to be encrypted: Hello, World!
Encrypted text: Khoor, Zruog!
```

---

### Explicação do código

O código está organizado em cinco funções principais:

- **`show_introduction`**: Exibe a introdução explicando o que é a Cifra de César.
- **`menu`**: Exibe o menu de opções e retorna a escolha do usuário.
- **`is_valid_key`**: Verifica se a chave contém apenas dígitos (nenhum caractere não numérico).
- **`get_plain_text`**: Lê o texto digitado pelo usuário e remove a quebra de linha.
- **`encrypt_text`**: Percorre o texto e aplica o deslocamento da Cifra de César, preservando maiúsculas, minúsculas e caracteres especiais.
- **`main`**: Coordena tudo — exibe a introdução, mostra o menu, pede a chave, pede o texto, chama a criptografia e exibe o resultado.

---

### Tecnologias utilizadas

- Linguagem C
- Bibliotecas padrão: `stdio.h`, `stdlib.h`, `string.h`, `ctype.h`

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

Personal project developed in C that implements the **Caesar Cipher**, one of the oldest and most well-known encryption methods. The program displays an explanatory introduction, presents an interactive menu, and then asks the user for a numeric key and a text, returning the encrypted text.

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

- **caesarCipher.c**: Source code of the program, written in C.
- **caesarCipher.exe**: Compiled executable (Windows), ready to run without compiling.

---

### How it works

1. The program displays an **introduction** explaining what the Caesar Cipher is and how it works.
2. Then it shows a **menu** with two options:
   - `[1] Got it, I want to encrypt a text`
   - `[2] Exit`
3. If the user chooses option 1, the program:
   - Asks for a **key** (integer).
   - Validates that the key contains only digits.
   - Asks for the **text** to be encrypted.
   - Goes through each character of the text:
     - If it is a letter, applies the key shift.
     - If it is not a letter, keeps the original character.
   - Displays the result as **encrypted text**.
4. If the user chooses option 2, the program exits.
5. Any other option displays an error message and exits the program.

---

### How to compile and run

#### Requirements

- A C compiler installed (GCC, Clang, or equivalent).
- On Windows, you can use GCC via MinGW, or the included executable (`caesarCipher.exe`).

#### Compile

In the terminal, inside the project folder:

```bash
gcc caesarCipher.c -o caesarCipher
```

This generates an executable named `caesarCipher` (or `caesarCipher.exe` on Windows).

#### Run

```bash
./caesarCipher
```

On Windows:

```bash
caesarCipher.exe
```

---

### Usage example

When running the program, the output will be something like:

```
============================================================
           CAESAR CIPHER
============================================================

The Caesar Cipher is one of the oldest and most well-known
encryption techniques. It was used by the Roman emperor
Julius Caesar to send secret messages to his generals.

How it works:
- Each letter in the text is shifted a fixed number of positions
  in the alphabet. This number is called the KEY.

Example with key 3:
  A becomes D
  B becomes E
  C becomes F
  ...
  Z wraps back to C

Uppercase and lowercase letters are preserved, and
characters such as numbers, spaces, and punctuation do not change.

============================================================

[1] Got it, I want to encrypt a text
[2] Exit

Enter the desired option: 1
Enter the key (an integer): 3
Enter the text to be encrypted: Hello, World!
Encrypted text: Khoor, Zruog!
```

---

### Code explanation

The code is organized into five main functions:

- **`show_introduction`**: Displays the introduction explaining what the Caesar Cipher is.
- **`menu`**: Displays the options menu and returns the user's choice.
- **`is_valid_key`**: Checks whether the key contains only digits (no non-numeric characters).
- **`get_plain_text`**: Reads the text typed by the user and removes the newline.
- **`encrypt_text`**: Goes through the text and applies the Caesar Cipher shift, preserving uppercase, lowercase, and special characters.
- **`main`**: Coordinates everything — displays the introduction, shows the menu, asks for the key, asks for the text, calls the encryption, and displays the result.

---

### Technologies used

- C language
- Standard libraries: `stdio.h`, `stdlib.h`, `string.h`, `ctype.h`

---

### Author

Developed by Nicoly Alves dos Santos.

LinkedIn: https://www.linkedin.com/in/devnicoly  
GitHub: https://github.com/devnicoly

---

### License

This project is licensed under the MIT License. Feel free to use, study, and modify it.

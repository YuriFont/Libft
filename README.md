# Libft

## Descrição
O projeto Libft é uma biblioteca em C que contém funções que simulam as funcionalidades da biblioteca `ctype.h` e algumas outras. Ela foi desenvolvida como parte do currículo da escola 42 para fornecer implementações próprias das funções padrão da linguagem C.

## Funções Implementadas

- **isalpha**: Verifica se um caractere é uma letra do alfabeto.
- **isdigit**: Verifica se um caractere é um dígito numérico.
- **isalnum**: Verifica se um caractere é alfanumérico.
- **isascii**: Verifica se um caractere pertence à tabela ASCII.
- **isprint**: Verifica se um caractere é imprimível.
- **strlen**: Calcula o comprimento de uma string.
- **memset**: Preenche uma região de memória com um byte específico.
- **bzero**: Define os primeiros bytes de uma região de memória como 0.
- **memcpy**: Copia uma região de memória de uma localização para outra.
- **memmove**: Copia uma região de memória para outra, mesmo se as regiões se sobrepuserem.
- **strlcpy**: Copia uma string para um buffer limitado.
- **strlcat**: Concatena uma string para um buffer limitado.
- **toupper**: Converte um caractere para maiúsculas.
- **tolower**: Converte um caractere para minúsculas.
- **strchr**: Localiza a primeira ocorrência de um caractere em uma string.
- **strrchr**: Localiza a última ocorrência de um caractere em uma string.
- **strncmp**: Compara os primeiros n caracteres de duas strings.
- **memchr**: Localiza a primeira ocorrência de um byte em uma região de memória.
- **memcmp**: Compara duas regiões de memória.
- **strnstr**: Localiza a primeira ocorrência de uma substring em uma string, até um tamanho máximo especificado.
- **atoi**: Converte uma string em um inteiro.
- **calloc**: Aloca e inicializa uma região de memória.
- **strdup**: Duplica uma string.
- **ft_substr**: Cria uma nova substring a partir de uma string existente.
- **ft_strjoin**: Une duas strings em uma nova string.
- **ft_strtrim**: Remove os caracteres especificados do início e do fim de uma string.
- **ft_split**: Divide uma string em substrings com base em um caractere delimitador.
- **ft_itoa**: Converte um inteiro em uma string.
- **ft_strmapi**: Aplica uma função a cada caractere de uma string.
- **ft_striteri**: Aplica uma função a cada caractere de uma string, passando seu índice como argumento.
- **ft_putchar_fd**: Escreve um caractere em um descritor de arquivo.
- **ft_putstr_fd**: Escreve uma string em um descritor de arquivo.
- **ft_putendl_fd**: Escreve uma string seguida por uma nova linha em um descritor de arquivo.
- **ft_putnbr_fd**: Escreve um número em um descritor de arquivo.

## Como Usar

Para usar a biblioteca Libft em seu próprio projeto, basta incluir o arquivo `libft.h` no seu código e compilar junto com os arquivos fonte da biblioteca.

Exemplo de compilação:
gcc seu_arquivo.c libft.a -o seu_programa

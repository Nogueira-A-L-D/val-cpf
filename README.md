# Exercício 023 - `cpf`

## Algoritmo de validação do CPF

O Cadastro de Pessoas Físicas da Receita Federal do Brasil foi projetado para reduzir as chances de que números inválidos (por erros de digitação, por exemplo) possam ser usados. Ele é composto de 2 partes: 9 dígitos que compõem o número propriamente e 2 dígitos de validação, no final. (Uma curiosidade: o nono dígito é determinado pelo estado ou região do País; em SP, vale 8).

Passo 1: multiplicar o primeiro número por 10, o segundo por 9, o terceiro por 8, e assim sucessivamente até o nono número, que é multiplicado por 2. Os nove valores obtidos devem ser somados.

Passo 2: Tomar a soma assim obtida e calcular o resto da sua divisão por 11. Se o resto da divisão assim obtido for menor que 2, então o primeiro dígito de validação do CPF é 0.
Se o resto da divisão por maior ou igual a 2, o primeiro dígito de validação do CPF é obtido da subtração de 11 pelo resto.

Passo 3: Repetir o passo 1, mas, desta vez, com 10 números: os 9 dígitos e o primeiro dígito de validação. Os fatores começam de 11 até 2.

Passo 4: Repetir o passo 2 com a soma obtida no passo 3.

Exemplos: 
- 641.080.136/03
- 203.912.218/41

Passo 1:
|6  |4  |1  |0  |8  |0  |1  |3  |6  |
|10 |9  |8  |7  |6  |5  |4  |3  |2  |
|60 |36 |8  |0  |48 |0  |4  |9  |12 |

Soma = 60 + 36 + 8 + 48 + 4 + 9 + 12 = 177

Passo 2:
177 % 11 = 1 => DV1 = 0

Passo 3:
|6  |4  |1  |0  |8  |0  |1  |3  |6  |0 |
|11 |10 |9  |8  |7  |6  |5  |4  |3  |2 |
|66 |40 |9  |0  |56 |0  |5  |12 |18 |0 |

Soma = 66 + 40 + 9 + 56 + 5 + 12 + 18 = 206

Passo 4:
206 % 11 = 8 => DV2 = 11 - 8 = 3

Passo 1:
|2  |0  |3   |9   |1 |2   |2  |1  |8  |
|10 |9  |8   |7   |6 |5   |4  |3  |2  |
|20 |0  |24  |63  |6 |10  |8  |3  |16 |

Soma = 20 + 24 + 63 + 6 + 10 + 8 + 3 + 16 = 150

Passo 2:
143 % 11 = 7 => DV1 = 11 - 7 = 4

Passo 3:
|2  |0  |3  |9  |1 |2  |2  |1  |8  |4 |
|11 |10 |9  |8  |7 |6  |5  |4  |3  |2 |
|22 |0  |27 |72 |7 |12 |10 |4  |24 |8 |

Soma = 22 + 27 + 72 + 7 + 12 + 10 + 4 + 24 + 8 = 186

Passo 4:
186 % 11 = 10 => DV2 = 11 - 10 = 1

## Exercício

Faça um programa que recebe os 11 dígitos do CPF, um de cada vez, sem mensagens, e imprime:
- A soma obtida no Passo 1 acima;
- O primeiro dígito de validação;
- A soma obtida no Passo 3 acima;
- O segundo dígito de validação;
- O caracter `'S'` se o CPF é válido, `'N'`, caso contrário.

Evite mostrar mensagens para receber dados ou mostrar resultados.

## Dicas

- Observe que o formato do resultado favorece um desenvolvimento incremental: primeiro faça o programa realizar a soma do Passo 1, depois o cálculo do primeiro dígito, então a soma do Passo 3 e, por fim, o segundo dígito de validação juntamente com a decisão.
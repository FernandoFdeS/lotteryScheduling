# Executar o arquivo teste
Para rodar o arquivo de teste execute os seguintes comandos:

``make qemu``

``test``

O arquivo de teste gera 3 processos, com 25, 50 e 75 tickets respectivamente, o esperado como resultado é que o a ordem de termino dos processos seja, na maioria das vezes, a seguinte:
- Processo 3
- Processo 2
- Processo 1


## Principais Alterações

As principais alterações feitas foram nos arquivos:
- proc.h
> Adicionado a variavel ``tickets`` na estrutura dos processos

- proc.c
> Adicionado a funcao responsavel por gerar um numero pseudo-aleatorio (a mesma funcao rand() presente no arquivo ``usertests.c``

> Atribuido um numero de tickets para o processo de inicializacao de usuario (na funcao userinit())

> Implementacao da logica de loteria na funcao scheduler()

- sysproc.c
> Implementacao da passagem de tickets como argumento da funcao e definicao de numeros maximos e minimos de tickets.
>  > Minimo: 10
>  > 
>  > Maximo: 200




# Executar o arquivo teste
Para rodar o arquivo de teste execute os seguintes comandos:
``make qemu``
``test``

O arquivo de teste gera 3 processos, com 25, 50 e 75 tickets respectivamente, o esperado como resultado é que o a ordem de termino dos processos seja, na maioria das vezes, a seguinte:
- Processo 3
- Processo 2
- Processo 1


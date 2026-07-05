# include <stdio.h>
 
int main () {

// Declarando a variavel
    int i = 1;
    i ++;
// Mover Bispo 5 casas acima e a direita
// Mover Rainha 8 casas para a esquerda
// Mover Torre 5 casas para direita

printf ("Movimentando o Bispo\n");

do
{
    printf ("Direita para cima\n", i),
    
} while (i <= 5);

printf ("Movimento da Rainha\n");

for (int i = 1; i <= 8)
{
    printf ("Esquerda\n", i);
}

printf ("Movimento da Torre\n");

while (i <= 5)
{
    printf ("Direita\n", i);
    
}

    return 0;
}
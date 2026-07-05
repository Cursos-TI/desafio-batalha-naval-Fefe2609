# include <stdio.h>

//Recursividade para Torre e Rainha
//Mover a Torre 5 casas para direita
//void recursivo (int t){
//    if (t < 5){
//        printf ("Direita\n", t);
//        recursivo (t ++);
//    }
//}
int main () {

// Declarando a variavel
    int r, t, b = 0;
    int i, cavalo = 1;
    
// Mover Torre 5 casas para direita

//    int torre = 1;
//    printf ("Direita\n");
//    recursividade (torre);

printf ("Movimento da Torre:\n");

while (t < 5)
{
    printf ("Direita\n", t, t ++);
   
}

// Mover Bispo 5 casas acima e a direita
printf ("Movimentando o Bispo:\n");

do
{
    printf ("Direita para cima\n", b),
    b ++;

} while (b < 5);

// Mover Rainha 8 casas para a esquerda
printf ("Movimento da Rainha:\n");

for (int r = 1; r <= 8; r ++)
{
    printf ("Esquerda\n", r);
}

// Em L 2 casas para baixo e 1 para esquerda 
printf ("Movimento do Cavalo:\n");

while (cavalo --)
{
    for (int i = 0; i < 2; i ++) {
        printf ("Para Baixo\n");
    }
    printf ("Esquerda\n");
}


    return 0;
}
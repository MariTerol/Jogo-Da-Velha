#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(void){

    char jogo[3][3];
    int i,j, linha, coluna, jogador, venceu, jogadas, op;

    do{
        venceu=0;
        jogadas=0;
        jogador=1;

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                jogo[i][j] = ' ';
            }
        }

        do{
            printf("\n\n\t0    1    2\n\n");    
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(j==0)
                        printf("\t");
                    printf(" %c ", jogo[i][j]);
                    if(j<2)
                        printf("|");
                    if(j == 2)
                        printf("  %d", i);
                    
                }
                if(i<2)
                    printf("\n\t-----------");
                printf("\n");
            }


            do{
                printf("\nJOGADOR %d: Informe a linha e a coluna que deseja jogar: ", jogador);
                scanf("%d%d", &linha,&coluna);
            }while(linha<0 || linha>2 || coluna<0 || coluna>2 || jogo[linha][coluna] != ' ');
                
            if(jogador==1){
                jogo[linha][coluna] ='O';
                jogador++;
            }else{
                jogo[linha][coluna] ='X';
                jogador=1;
            }
            jogadas++;

            if (jogo[0][0]=='O' && jogo[0][1]=='O' && jogo[0][2]=='O' || 
                jogo[1][0]=='O' && jogo[1][1]=='O' && jogo[1][2]=='O' ||
                jogo[2][0]=='O' && jogo[2][1]=='O' && jogo[2][2]=='O'){
                printf("\nO jogador 1 venceu! Parabens!\n");
                venceu=1;
            }

            if (jogo[0][0]=='X' && jogo[0][1]=='X' && jogo[0][2]=='X' || 
                jogo[1][0]=='X' && jogo[1][1]=='X' && jogo[1][2]=='X' ||
                jogo[2][0]=='X' && jogo[2][1]=='X' && jogo[2][2]=='X'){
                printf("\nO jogador 2 venceu! Parabens!\n");
                venceu=1;
            }




            if (jogo[0][0]=='O' && jogo[1][0]=='O' && jogo[2][0]=='O' || 
                jogo[0][1]=='O' && jogo[1][1]=='O' && jogo[2][1]=='O' ||
                jogo[0][2]=='O' && jogo[1][2]=='O' && jogo[2][2]=='O'){
                printf("\nO jogador 1 venceu! Parabens!\n");
                venceu=1;
            }

            if (jogo[0][0]=='X' && jogo[1][0]=='X' && jogo[2][0]=='X' || 
                jogo[0][1]=='X' && jogo[1][1]=='X' && jogo[2][1]=='X' ||
                jogo[0][2]=='X' && jogo[1][2]=='X' && jogo[2][2]=='X'){
                printf("\nO jogador 2 venceu! Parabens!\n");
                venceu=1;
            }




            if (jogo[0][0]=='O' && jogo[1][1]=='O' && jogo[2][2]=='O'){
                printf("\nO jogador 1 venceu! Parabens!\n");
                venceu=1;
            }

            if (jogo[0][0]=='X' && jogo[1][1]=='X' && jogo[2][2]=='X'){
                printf("\nO jogador 2 venceu! Parabens!\n");
                venceu=1;
            }




            if (jogo[0][2]=='O' && jogo[1][1]=='0' && jogo[2][0]=='O'){
                printf("\nO jogador 1 venceu! Parabens!\n");
                venceu=1;
                }

            if (jogo[0][2]=='X' && jogo[1][1]=='X' && jogo[2][0]=='X'){
                printf("\nO jogador 2 venceu! Parabens!\n");
                venceu=1;
            }
        
        }while(venceu==0 && jogadas<9);
    
        if(venceu==0)
            printf("\nO jogo nao teve vencedores! Deu velha!\n");

        printf("\nDeseja jogar novamente? (1)sim (2)nao \n");
        scanf("%d", &op);
    }while (op==1);

 return 0;
}

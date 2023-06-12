#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int nulo;
int candidato1;
int candidato2;
int candidato3;


int votar() {

int candidato, confirmador;



printf("Para Voto NULO ou BRANCO, digite 111 no candidato ou digite o numero do seu candidato na sua colinha.\n\nDigite o numero do candidato:");
scanf("%d",&candidato);

switch(candidato)
{

    case 111:

        
        printf("Seu voto é: NULO OU BRANCO \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // nulo++;
           nulo = nulo +1;
            
            printf("Voto confirmado, obrigado por votar! \n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }

        votar();

        break;


    case 0:

        //apuracao(c1, c2, c3, );
printf("-----------------------------------------\n");
printf("ELEICOES Cecilia-2022\n");
printf("-----------------------------------------\n");

printf("\n Antonio: %d VOTOS\n",candidato1);
printf("\n jose %d VOTOS\n",candidato2);
printf("\n Maria: %d VOTOS\n",candidato3);
printf("\nBRANCOS OU NULOS: %d VOTOS\n",nulo);


if((candidato1>candidato2)&&(candidato1>candidato3)){
	printf("antonio venceu!!!Z\n");
}

sleep (60);

    break;

    case 22:

        
        printf("Seu candidato é: Antonio \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c1++;
           candidato1 = candidato1 +1;
            
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
            
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }

        votar();

        break;

    case 13:

       
        printf("Seu candidato é: jose \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c2++;
           candidato2 = candidato2 +1;
            
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
           
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
        votar();
        break;

    case 12:

        
        printf("Seu candidato é: Maria \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");
        scanf("%d",&confirmador);

        if(confirmador==1)
        {
           // c3++;
           candidato3 = candidato3 +1;
            system("clear");
            printf("Voto confirmado, obrigado por votar!\n\n\n");
            sleep (5);

        }
        if(confirmador==2)
        {
            votar();
        }
        if((confirmador!=1)&&(confirmador!=2))
        {
           
            printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
        }
        votar();
        break;

    

    default:

       
        printf("Candidato invalido, digite o numero do partido. \n\n");
        sleep(5);

        }

votar();

}

int apuracao(int candidato1, int candidato2, int candidato3, int nulo) {

printf("-----------------------------------------\n");
printf("ELEICOES Cecilia-2022\n");
printf("-----------------------------------------\n");

printf("\nAntonio: %d VOTOS\n",candidato1);
printf("\njose %d VOTOS\n",candidato2);
printf("\nMaria: %d VOTOS\n",candidato3);
printf("\nBRANCOS OU NULOS: %d VOTOS\n",nulo);


return 0;

}

int main() {


nulo = 0;
candidato1 = 0;
candidato2 = 0;
candidato3 = 0;
printf("-----------------------------------------\n");
printf("ELEICOES Cecilia-2022\n");
printf("-----------------------------------------\n");

printf(".\nBem vindo a Eleicoes cecilia 2022-para comecar digite qualquer tecla para saber o resultado  0 Antonio 22 jose 13 Maria 12 nulo e branco 111).\n\n");
getchar();

votar();

return 0;

}

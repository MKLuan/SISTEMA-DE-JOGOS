#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int menu;
	int pergunta1, pergunta2, pergunta3, pergunta4, pergunta5;
	char jogardnv;
	int caixabotao, caixacobra, caixaescolhida, jogoativo, jogadoratual, jogador1, jogador2;
	char *nomes[7] = {"Joao", "Casseb", "Issac", "Girotto", "Luan", "Isabela", "Juliana"};
	srand(time(NULL));
	int jogador1_g1 = 1, jogador1_g2 = 1, jogador2_g1 = 1, jogador2_g2 = 1;
	int escolha, ataque, alvo, total, furia;
	
	
	do{
	printf("O JOGO MAXIMU MASTER INCRIVELMENTE JOGAVEL COM MUITAS COISA E GAMER\n");
	printf("______________________________________________________________________\n");
	printf("|--------------------------------------------------------------------|\n");
	printf("|--------------------------ESCOLHA!----------------------------------|\n");
	printf("|~~~~~~~~~~~~~~~~~~~~~~1: PERGUNTA E RESPOSTAS!~~~~~~~~~~~~~~~~~~~~~~|\n");
	printf("|~~~~~~~~~~~~~~~~~~~~~~2: COBRA NA CAIXA!~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");	
	printf("|~~~~~~~~~~~~~~~~~~~~~~3: GOUSMAR WAR!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");		
	printf("|~~~~~~~~~~~~~~~~~~~~~~4: SAIR!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");	
	printf("|--------------------------------------------------------------------|\n");
	printf("|--------------------------------------------------------------------|\n");
	printf("|____________________________________________________________________|\n");
	scanf("%d", &menu);
	system("cls");

	if(menu == 1){
	do{
	
		printf("______!!!PERGUNTAS E RESPOSTAS!!!________\n");
		printf("----------Primeira pergunta!(1/5)--------\n");
		printf("------QUAL O MAIOR MAMIFERO DO MUNDO-----\n");	
		printf("----1 = A Girafa-------------------------\n");
		printf("----2 = O Elefante-----------------------\n");	
		printf("----3 = O Crocodilo de agua salgada------\n");	
		printf("----4 = A Baleia azul--------------------\n");	
		scanf("%d", &pergunta1);	
		if(pergunta1 >= 1 && pergunta1 <=3){ 			        //PERGUNTA1	
			printf("  RESPOSTA ERRADA!!!\n");
			printf("A resposta certa eh = 4: A Baleia Azul\n ");
		}else if(pergunta1 == 4){
			printf("  RESPOSTA CERTAAA!!!\n");
			printf("-----------------------\n");
			printf("  PROXIMA PERGUNTA>>>>>>>>>>>>> \n");
			printf("-----------------------\n");
		}else{
			printf("RESPOTA INVALIDA");	
			printf("A resposta certa eh = 4: A Baleia Azul\n ");
	
		}	
		
		printf("\n");
		system("pause");
		system("cls");
		
		printf("-------- PERGUNTA 2 DE 5 ---------------------\n");
		printf("------QUAL O PLANETA MAIS PROXIMO DO SOL?-----\n");	
		printf("----1 = Venus---------------------------------\n");
		printf("----2 = Terra---------------------------------\n");	
		printf("----3 = Mercurio------------------------------\n");	
		printf("----4 = Vero-peso-----------------------------\n");			
		scanf("%d", &pergunta2);	
		if(pergunta2 == 3){										 //PERGUNTA2
			printf("  RESPOSTA CERTAAA!!!\n");
			printf("-----------------------\n");
			printf("  PROXIMA PERGUNTA>>>>>>>>>>>>> \n");
			printf("-----------------------\n");	
		
		}else if(pergunta2 >= 1 && pergunta2 <= 4 && pergunta2 != 3){
			printf("  RESPOSTA ERRADA!!!\n");
			printf("A resposta certa eh = 3: Mercurio\n ");	
		}else{
			printf("RESPOTA INVALIDA");	
			printf("A resposta certa eh = 3: A Mercurio \n ");	
		}
	
		printf("\n");
        system("pause");
        system("cls");
		
		printf("-------- PERGUNTA 3 DE 5 --------------------------------\n");
		printf("------De quem é a famosa frase 'Penso, logo existo'??-----\n");	
		printf("----1 = Socrates--------------------------------------------\n");
		printf("----2 = Descartes--------------------------------------------\n");	
		printf("----3 = Casseb-----------------------------------------\n");	
		printf("----4 = Francis Bacon----------------------------------------\n");	
		scanf("%d", &pergunta3);	
		if(pergunta3 == 2){									//PERGUNTA3
			printf("  RESPOSTA CERTAAA!!!\n");
			printf("-----------------------\n");
			printf("  PROXIMA PERGUNTA>>>>>>>>>>>>> \n");
			printf("-----------------------\n");										
		}else if(pergunta3 >=1 && pergunta3 <=4 && pergunta3 != 2){
			printf("  RESPOSTA ERRADA!!!\n");
			printf("A resposta certa eh = 2: Descartes \n ");				
		}else{
			printf("RESPOTA INVALIDA");	
			printf("A resposta certa eh = 2: Descartes \n ");				
		}
						
		printf("\n");        
		system("pause");
        system("cls");						
						
	
		printf("-------------------- PERGUNTA 4 DE 5 ---------------------\n");
		printf("------Quem foi a primeira pessoa a viajar no Espaço??-----\n");	
		printf("----1 = Yuri Gagarin---------------------------------\n");
		printf("----2 = A cadela Laika---------------------------------\n");	
		printf("----3 = Neymar------------------------------\n");	
		printf("----4 = Neil Armstrong-----------------------------\n");			
		scanf("%d", &pergunta4);						//PERGUNTA4
		if(pergunta4 >= 2 && pergunta4 <=4){
			printf("  RESPOSTA ERRADA!!!\n");
			printf("A resposta certa eh = 1: Yuri Gagarin \n ");				
		}else if(pergunta4 == 1){
			printf("  RESPOSTA CERTAAA!!!\n");
			printf("-----------------------\n");
			printf("  PROXIMA PERGUNTA>>>>>>>>>>>>> \n");
			printf("-----------------------\n");		
		}else{
			printf("RESPOTA INVALIDA");	
			printf("A resposta certa eh = 1: Yuri Gagarin \n ");			
		}
		
				
	printf("\n");        
	system("pause");
    system("cls");		
		
		printf("-------------------- PERGUNTA 5 DE 5 --------------------------------\n");
		printf("-----O que se comemora no feriado do dia 21 de abril no Brasil??-----\n");	
		printf("----1 = Finados------------------------------------------------------\n");
		printf("----2 = Dia da mentira-----------------------------------------------\n");	
		printf("----3 = Nossa Senhora Aparecida--------------------------------------\n");	
		printf("----4 = Tiradentes---------------------------------------------------\n");		
		scanf("%d", &pergunta5);							//PERGUNTA5
		if(pergunta5 == 4){
			printf("  RESPOSTA CERTAAA!!!\n");
			printf("-----------------------\n");
			printf("  PROXIMA PERGUNTA>>>>>>>>>>>>> \n");
			printf("-----------------------\n");		
		}else if(pergunta5 >= 1 && pergunta5 <=3){
			printf("  RESPOSTA ERRADA!!!\n");
			printf("A resposta certa eh = 4: Tiradentes \n ");			
		}else{
			printf("RESPOTA INVALIDA");	
			printf("A resposta certa eh = 4: Tiradentes \n ");			
		}
	
	printf("\n");        
	system("pause");
    system("cls");		
	do{	
	printf("\nDeseja jogar novamente?\n");
    printf("S = Sim\n");
    printf("N = Voltar ao menu\n");
	scanf(" %c", &jogardnv);
	system("cls");		
        if(jogardnv != 'S' && jogardnv != 's' && jogardnv != 'N' && jogardnv != 'n'){
            printf("\n Opcao invalida! Digite apenas S ou N.\n");
    }

    	}while(jogardnv != 'S' && jogardnv != 's' && jogardnv != 'N' && jogardnv != 'n');
			
	}while(jogardnv == 'S' || jogardnv == 's');



	
	}else if(menu == 2){												//JOGO 2
	do{
				
	printf("---------COBRA NA CAIXA---------\n");
	do{
	
	printf("----Jogador1 Escolha seu Personagem:-----\n");
	
	for(int i =0; i<7;i++){
		printf("%d - %s\n", i+1, nomes[i]);
	}
		scanf("%d", &jogador1);		
	system("cls");
	if(jogador1 < 1 || jogador1 > 7){
	system("cls");
	printf("INVALIDO, TENTE DENOVO\n");
	}
	}while(jogador1 >7 || jogador1 <1);
	do{	
	printf("----Jogador2 Escolha seu Personagem:-----\n");
	for(int i =0; i<7;i++){
		printf("%d - %s\n", i+1, nomes[i]);
	}	
	scanf("%d", &jogador2);
	system("cls");
		if(jogador2 == jogador1){
			printf("\n\nEsse personagem ja foi escolhido, escolha outro\n");
		}else if(jogador2 <1 || jogador2 >7){
			printf("\nNumero invalido!!!\n");
		}
	system("pause");
	system("cls");			
	}while(jogador2 == jogador1 || jogador2 >7 || jogador2 <1);
		
		jogadoratual = rand()%2;	
		printf("\nE o Jogador sorteado que vai comecar Eh!!\n");
	
        if(jogadoratual == 0){
            printf(" = %s Que vai comecar!!!\n", nomes[jogador1-1]);
        }else{
            printf(" = %s Que vai comecar!!!\n", nomes[jogador2-1]);
        }		
		system("pause");
		system("cls");

		caixacobra = rand()%5+1;
		
		do{
			caixabotao = rand()%5+1;
			
		}while(caixabotao == caixacobra);
		
		jogoativo = 1;
		
		while(jogoativo){
			
			if(jogadoratual == 0){
				printf("\nTURNO DE %s!!\n", nomes[jogador1-1]);
			}else{
				printf("\nTURNO DE %s!!\n", nomes[jogador2-1]);				
			}
		printf("\n[1] [2] [3] [4] [5]\n");
		printf("Escolha uma das caixa\n");
		scanf("%d", &caixaescolhida);
		system("cls");		
			if(caixaescolhida == caixacobra){
				if(jogadoratual == 0){
					printf("\n %s Encontrou a COBRA!!, voce PERDEU! HAHA \n", nomes[jogador1-1]);
				}else{
					printf("\n %s Encontrou a COBRA!!, voce PERDEU! HAHA \n", nomes[jogador2-1]);				
				}	
			jogoativo = 0;
			}
			else if(caixaescolhida == caixabotao){
				if(jogadoratual == 0){
					printf("\n %s Encontrou o BOTAO!!, voce VENCEU! YEEEEE \n", nomes[jogador1-1]);
				}else{
					printf("\n %s Encontrou o BOTAO!!, voce VENCEU! YEEEEE \n", nomes[jogador2-1]);				
				}	
				jogoativo = 0;
			}else if(caixaescolhida <1 || caixaescolhida >5){
			printf("OPA OPCAO INVALIDA, TENTE NOVAMENTE (DE 1 A 5) \n\n");
				system("pause");
				system("cls");	
			}else{
				
				printf("CAIXA VAZIA, F \n");
				jogadoratual = (jogadoratual+1)%2;
			}
		system("pause");
		system("cls");		
			
		}
        
		do{
            printf("\nDeseja jogar novamente?\n");
            printf("S = Sim\n");
            printf("N = Voltar ao menu\n");

            scanf(" %c", &jogardnv);
            system("cls");

            if(jogardnv != 'S' && jogardnv != 's' && jogardnv != 'N' && jogardnv != 'n'){
                printf("\nOpcao invalida! Digite apenas S ou N.\n");
            }

        }while(jogardnv != 'S' && jogardnv != 's' && jogardnv != 'N' && jogardnv != 'n');
	}while(jogardnv == 'S' || jogardnv == 's');
		
		
	}else if(menu == 3){									   		   //JOGO 3	
		do{
		printf("=====================================\n");
		printf("_________!!!GOUSMAR WAR!!!_________\n");
		printf("______JOGADOR1 VS JOGADOR2_________\n");
		printf("\n---Vamos sortear quem vai comecar------\n\n");
		system("pause");
		system("cls");
		
		jogadoratual = rand()%2;	
		printf("\nE o Jogador sorteado que vai comecar Eh!!\n\n");
		system("pause");
        if(jogadoratual == 0){
            printf("\n = O Jogador1 Que vai comecar!!!\n\n");
        }else{
            printf("\n = O Jogador2 Que vai comecar!!!\n\n");
        }		
		system("pause");
		system("cls");
		jogador1_g1 = 1, jogador1_g2 = 1, jogador2_g1 = 1, jogador2_g2 = 1;	
		jogoativo = 1;
		while(jogoativo){
			
		printf("\n----Estatus das Gousmas:----\n");
		printf("\n--Jogador1\n");
		printf("Gousmas1 = %d\n", jogador1_g1);
		printf("Gousmas2 = %d\n", jogador1_g2);

		printf("\n--Jogador2\n");
		printf("Gousmas1 = %d\n", jogador2_g1);
		printf("Gousmas2 = %d\n", jogador2_g2);
		
		system("pause");
		system("cls");

		if(jogadoratual == 0){
    		printf("\nTurno do Jogador 1\n");
		}else{
    		printf("\nTurno do Jogador 2\n");
		}
	
		printf("Escolha sua acao: \n");
		printf("1 - Atacar: \n");
		printf("2 - dividir gousmas: \n");
		scanf("%d", &escolha);

		if(escolha == 1){
			printf("\nQual das gousmas vai atacar, 1 ou 2?\n");
			scanf("%d", &ataque);

			if(ataque !=1 && ataque != 2){
				printf("alternativa invalida, proximo turno.\n");
			}else{
			
			


				if(jogadoratual == 0){
					if(ataque == 1 && jogador1_g1 == 0){
						printf("Essa gousmas ja esta morta, seu turno sera passado\n");						
					}else if(ataque == 2 && jogador1_g2 == 0){
						printf("Essa gousmas ja esta morta, seu turno sera passado\n");						
					}else{
						printf("Qual gousma do inimigo atacar, 1 ou 2?\n");
						scanf("%d", &alvo);
						if(alvo != 1 && alvo != 2){
							printf("alternativa invalida, proximo turno.\n");
						}else if(alvo == 1 && jogador2_g1 == 0){
							printf("Inimigo morto, proximo turno.\n");
						}else if(alvo == 2 && jogador2_g2 == 0){
							printf("Inimigo morto, proximo turno.\n");
						}else{					
							if(ataque == 1 && alvo == 1){
								jogador2_g1 += jogador1_g1;
							}else if(ataque == 1 && alvo == 2){
								jogador2_g2 += jogador1_g1;
							}else if(ataque == 2 && alvo == 1){
								jogador2_g1 += jogador1_g2;
							}else if(ataque == 2 && alvo == 2){
								jogador2_g2 += jogador1_g2;
							}
						}
					}	
				}else{
					if(ataque == 1 && jogador2_g1 == 0){
						printf("Essa gousmas ja esta morta, seu turno sera passado\n");						
					}else if(ataque == 2 && jogador2_g2 == 0){
						printf("Essa gousmas ja esta morta, seu turno sera passado\n");						
					}else{
						printf("Qual gousma do inimigo atacar, 1 ou 2?\n");
						scanf("%d", &alvo);
						if(alvo != 1 && alvo != 2){
							printf("alternativa invalida, proximo turno.\n");
						}else if(alvo == 1 && jogador1_g1 == 0){
							printf("Inimigo morto, proximo turno.\n");
						}else if(alvo == 2 && jogador1_g2 == 0){
							printf("Inimigo morto, proximo turno.\n");
						}else{				
							if(ataque == 1 && alvo == 1){
								jogador1_g1 += jogador2_g1;
							}else if(ataque == 1 && alvo == 2){
								jogador1_g2 += jogador2_g1;
							}else if(ataque == 2 && alvo == 1){
								jogador1_g1 += jogador2_g2;
							}else if(ataque == 2 && alvo == 2){
								jogador1_g2 += jogador2_g2;
							}
						}
					}					
				}
			}
			
		}else if(escolha == 2){
			if(jogadoratual == 0){
				total = jogador1_g1 + jogador1_g2;
				printf("Voce tem %d de furia no total\n", total);
				printf("Quanto de furia voce quer passar para o G1?\n");
				scanf("%d", &furia);
				if(furia <= total && furia >=0){
					jogador1_g1 = furia;
					jogador1_g2 = total - jogador1_g1;
				}else{
					printf("Divisao invalida, seu turno sera passado\n");
				}
			}else{
				total = jogador2_g1 + jogador2_g2;
				printf("Voce tem %d de furia no total\n", total);
				printf("Quanto de furia voce quer passar para o G1?\n");
				scanf("%d", &furia);
				if(furia <= total && furia >=0){
					jogador2_g1 = furia;
					jogador2_g2 = total - jogador2_g1;
				}else{
					printf("Divisao invalida, seu turno sera passado\n");
				}				
			}	
		}else{
			printf("Alternativa invalida, proximo turno\n");
		}
		
		
		if(jogador1_g1 > 5){ 
		jogador1_g1 = 0;
    	}
		if(jogador1_g2 > 5){
		jogador1_g2 = 0;
		}
        if(jogador2_g1 > 5){
		jogador2_g1 = 0;
    	}
		if(jogador2_g2 > 5){
		jogador2_g2 = 0;
		}
        if(jogador1_g1 == 0 && jogador1_g2 == 0){
            printf("\nJOGADOR 2 VENCEU!!!!\n");
            break;
        }

        if(jogador2_g1 == 0 && jogador2_g2 == 0){
            printf("\nJOGADOR 1 VENCEU!!!!\n");
            break;
        }
		jogadoratual = (jogadoratual + 1) % 2;
	}
		do{
            printf("\nDeseja jogar novamente?\n");
            printf("S = Sim\n");
            printf("N = Voltar ao menu\n");

            scanf(" %c", &jogardnv);
            system("cls");

            if(jogardnv != 'S' && jogardnv != 's' && jogardnv != 'N' && jogardnv != 'n'){
                printf("\nOpcao invalida! Digite apenas S ou N.\n");
            }

        }while(jogardnv != 'S' && jogardnv != 's' && jogardnv != 'N' && jogardnv != 'n');		
	}while(jogardnv == 'S' || jogardnv == 's');
	}else{
		
	}
	
	
	
	
	}while(menu != 4);
	return 0;
}

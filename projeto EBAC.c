#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () 
{
	
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	    system("cls");
	    
	    setlocale(LC_ALL,"portuguese");
	
	    printf ("\t| Cartório da EBAC |\n\n");
	    printf("\tEscolha a opcão desejada:\n\n");
	    printf("\t\t1 - Registrar usuário\n");
	    printf("\t\t2 - Consultar usuário\n");
	    printf("\t\t3 - Deletar usuário\n\n");
	
        printf("\t\tJesus Cristo seja louvado\n");
    
        printf("opção: ");
    
        scanf ("%d", &opcao);
    
        system("cls");
        
        switch(opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
		    break;
			
			default:
			printf("esta opção não existe.\n");
	    	system("pause");
			break;	
		}
        
	
    }
}

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("\t |preencha os dados abaixo para o seu cadastro|\n\n");
	printf("digite seu CPF: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;
	file = fopen(arquivo, "w");
	fprintf(file, " > ");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " - ");
	fclose(file);
	
	printf("digite seu nome: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " - ");
	fclose(file);
	
	printf("Digite seu sobrenome: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " - ");
	fclose(file);
	
	printf("Digite seu cargo: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, " - ");
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL,"portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Qual CPF deseja consultar? :");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("\nEsse cpf não está cadastrado!");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEsses são os dados do usuário: \n\n\n");
		printf("%s", conteudo);	
		printf("\n\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não existe\n");
		system("pause"); 
		
		return 0;
    }
    
    fclose(file);
    
    printf("Realmente deseja deletar o usuário? ");
    printf("%s", cpf);
    printf("\nDigite (s) para deletar e (n) para cancelar a operação.\n\n");
    
    getchar();
    
    char opcao;
    opcao = getchar();
    
    switch(opcao)
    {
    	case 's':
    		if(remove(cpf) == 0);
    		printf("O usuário foi deletado com sucesso!\n\n");
    		system("pause");
    		break;
    		
    	    case 'S':
    		if(remove(cpf) == 0);
    		printf("O usuário foi deletado com sucesso!\n\n");
    		system("pause");
    		break;
    	    
    	case 'n':
    		printf("volte para o menu principal.\n\n");
    		system("pause");
    		break;
    		
    		case 'N':
    		printf("volte para o menu principal.\n\n");
    		system("pause");
    		break;
    		
    	default:
    		printf("opção invalida...\n\n");
    		system("pause");
    		break;
	}
    
    
    
	
}


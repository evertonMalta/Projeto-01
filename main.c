#include <stdio.h>
#include <stdlib.h>
#define limpatela system("cls")
/*** Estrutura de Cadastro de Clientes ***/
struct CadClientes{
	int codigo, rg, cpf, cnh;
	char nome[50], end[50], nasc[20];	
}Cli;
/*** Estrutura de Cadastro de automóveis ***/
struct CadAutomovel{
	int codigo, ano, Cla_codigo;
	char marca[30], modelo[30];	
}Aut;
/*** Estrutura de Cadastro de classificação de automóveis ***/
struct CadClassificacao{
	int codigo, descricao;
	float valorLocacao;
}Cla;
/*** Estrutura de Movimentação de locação ***/
struct MovLocacao{
	int codigo, dias;
	float valorTotal;
	char cliente[50], automovel[30];
}Mov;
int main(){
	/*************************** Menu de Opcoes **************************/
	int menu, i=0;
	Cla.descricao=0;
	Cli.codigo=1, Aut.codigo=1, Cla.codigo=1, Mov.codigo=1, Aut.Cla_codigo=1;
	while(menu<5){
		printf("****************( Menu de Opcoes )****************\n"  );
		printf("--------------------------------------------------"    );
		printf("\n 1 - Cadastro de Clientes                        *"  );
		printf("\n 2 - Cadastro de Automoveis                      *"  );
		printf("\n 3 - Cadastro de classificacao                   *"  );
		printf("\n 4 - Movimentacao de Locacao                     *"  );
		printf("\n 5 - Sair                                        *"  );
		printf("\n==================================================\n");
		printf("Opcao.: ");
		scanf("%d",&menu);
		limpatela;
	
		switch(menu){
		/************************ Cadastro de Clientes ************************/
		case 1: 
			printf("*********** Cadastro de Clientes ***********\n");
			printf("--------------------------------------------\n");
			printf("Codigo:00%d\n",Cli.codigo);
			printf("Nome:");
			scanf("%s",Cli.nome);
			printf("Nasc.:");
			scanf("%s",Cli.nasc);		
			printf("RG:");
			scanf("%d",&Cli.rg);		
			printf("CPF:");
			scanf("%d",&Cli.cpf);
			printf("CNH:");
			scanf("%d",&Cli.cnh);
			printf("End.:");
			scanf("%s",Cli.end); 
			printf("\n\n");
			limpatela;
			printf("*********** Cadastro do Cliente ***********\n");
			printf("Codigo.....................:00%d\n",Cli.codigo);
			printf("Nome.......................:%s\n",Cli.nome    );
			printf("Data Nascimento............:%s\n",Cli.nasc    );
			printf("RG.........................:%d\n",Cli.rg      );
			printf("CPF........................:%d\n",Cli.cpf     );
			printf("CNH........................:%d\n",Cli.cnh     );
			printf("Endereco...................:%s\n",Cli.end     );
			printf("==========================================\n" );	
			Cli.codigo++;			
			break;
		/*********************** Cadastro de automóveis ***********************/
		while(i==1){	
		case 2: 
			printf("********** Cadastro de Automoveis *********\n");
			printf("-------------------------------------------\n");
			printf("Codigo:00%d\n",Aut.codigo);
			printf("Ano/modelo:");
			scanf("%d",&Aut.ano);
			printf("Codigo de classificacao:00%d\n",Aut.Cla_codigo);				
			printf("Marca:");
			scanf("%s",Aut.marca);		
			printf("Modelo:");
			scanf("%s",Aut.modelo); 
			printf("\n\n");
			limpatela;
			printf("*********** Cadastro do Automovel ***********\n" );
			printf("Codigo....................:00%d\n",Aut.codigo    );
			printf("Ano/modelo................:%d\n",Aut.ano         );
			printf("Codigo de classificacao...:00%d\n",Aut.Cla_codigo);
			printf("Marca.....................:%s\n",Aut.marca       );
			printf("Modelo....................:%s\n",Aut.modelo      );
			printf("=============================================\n" );
			printf("\nDeseja cadastrar outro veiculo? [1-sim 2-nao]" );
			scanf("%d",&i);
			Aut.codigo++;
			Aut.Cla_codigo++;
		}	
			break;
		/*************** Cadastro de classificação de automóveis **************/
		case 3: 
			printf("*** Cadastro de Classificacao de Automoveis ***\n");
			printf("-----------------------------------------------\n");
			printf("Codigo:00%d\n",Cla.codigo);
			printf("\n");		
			printf("     Escolha a descricao            ");
			printf("\n1-Basico.............: R$80.00:   ");
			printf("\n2-Intermediario......: R$150.00:  ");
			printf("\n3-Executivo..........: R$300.00:\n");
			printf("Descricao.: ");
			scanf("%d",&Cla.descricao);
			if(Cla.descricao == 1){
				Cla.valorLocacao = 80.00;
				limpatela;
			}
			else
			if(Cla.descricao == 2){
				Cla.valorLocacao = 150.00;
				limpatela;
			}
			else
			if(Cla.descricao == 3){
				Cla.valorLocacao = 300.00;
				limpatela;
			}	
			else
				limpatela;
				printf("Numero incorreto");										
				limpatela;
			printf("\n");
			printf("*** Cadastro de Classificacao de Automoveis ***\n");
			printf("Codigo.................:00%d\n",Cla.codigo        );
			printf("Descricao..............:%d\n",Cla.descricao       );
			printf("Valor de Locacao.......:R$%.2f\n",Cla.valorLocacao);
			printf("\n");
			Cla.codigo++;
			break;
		/*********************** Movimentação de locação **********************/
		case 4: 
			printf("*********** Movimentacao de Locacao ***********\n");
			printf("-----------------------------------------------\n");
			printf("Codigo:00%d\n",Mov.codigo);
			printf("Cliente:");
			scanf("%s",Mov.cliente);
			printf("Automovel:");
			scanf("%s",Mov.automovel);
			printf("Digite a quantidade de dias:");
			scanf("%d",&Mov.dias);						
			printf("Valor Total:R$%.2f",Mov.valorTotal = Cla.valorLocacao*Mov.dias);		
			printf("\n\n");
			limpatela;
			printf("*********** Movimentacao de Locacao ***********\n"    );
			printf("Codigo.........................:00%d\n",Mov.codigo    );
			printf("Cliente........................:%s\n",Mov.cliente     );
			printf("Automovel......................:%s\n",Mov.automovel   );
			printf("Diaria.........................:%d\n",Mov.dias        );
			printf("Valor Total....................:%.2f\n",Mov.valorTotal);
			printf("===============================================\n"    ); 
			Mov.codigo++;
			break;
		/*************************** Sair do Programa *************************/
		case 5: system("exit");
				limpatela;
				break;
		default: printf("????????Erro! escolha de [1 a 5] ????????\n");
		}
	}
	/**************************** Fim do Programa *****************************/
	system("pause");
	return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define MAX 30
#define MIN 5

int main();

// Variáveis globais, para que elas sejam válidas enquanto está fora do escopo das funções
int qntAlunos = 0;
float notas[30][3]; // MAX = numero maximo de alunos enquanto o 3 é o numero de notas para cada aluno que for cadastrado
float medias[MAX];
// Código lido de cima para baixo, portanto as funções devem ser declaradas ou escritas sempre antes da int main()

void cadastrarNotas() {
	do {
		system("cls");
		printf(" Digite o número de alunos a serem cadastrados: ");
		scanf("%d", &qntAlunos);

		// Recusa no input o número abaixo do minimo e superior ao maximo, obrigando o usuario a digitar de novo e com um aviso na tela
		if (qntAlunos < MIN || qntAlunos > MAX) {
			printf(" Quantidade inválida, (%d até %d)\n\n", MIN, MAX);
			system("pause");
		}
	} while (qntAlunos < MIN || qntAlunos > MAX);

	// Percorre o array notas para ir preenchendo cada qual com sua nota 1, 2 e 3, adicionando as 3 notas para cada aluno
	for (int i = 0; i < qntAlunos; i++) {
		float soma = 0;
		printf("\n Aluno %d (código: %d)\n", i + 1, i + 1);
		
		for (int j = 0; j < 3; j++) {
			printf(" Digite a nota %d: ", j + 1);
			scanf("%f", &notas[i][j]);
			// Ao pegar todas as notas, vai atualizar a soma de cada aluno "i" e cada conjunto de notas "j"
			soma += notas[i][j];
		}

		// Calcula a média de cada aluno "i" pois já pegará as notas "j" que estão indexadas em cada aluno na matriz
		medias[i] = soma / 3;
		printf(" Média do aluno %d = %.1f\n", i + 1, medias[i]);
	}
	system("pause");
}
void ExibeMaiorMenor(){
	float maior = notas[0][0];
	float menor = notas[0][0];
	int AMaior = 0, NMaior = 0; //2 variaveis, uma para aluno outra para nota
	int AMenor = 0, NMenor = 0;
	for (int i=0; i<qntAlunos; i++){
		for (int j=0; j<3; j++){
			float x = notas[i][j];
			if (x>maior){
				maior = x; AMaior = i; NMaior = j;
				
			}
			if (x < menor){
				menor = x; AMenor = i; NMenor =j;
				
			}
		}
	}
	
	printf("Melhores/Piores Notas:\n\n");
	printf("    Maior nota: %.1f (Aluno %d, Nota %d)\n",maior, AMaior+1,NMaior+1);
	printf("    Menor nota: %.1f (Aluno %d, Nota %d)\n",menor, AMenor+1,NMenor+1);
}
void MediaGlobal(){
	float MediaTurma;
	float soma = 0;
	int AcimaMedia = 0;
	for(int i=0; i<qntAlunos;i++){
		soma += medias[i];
	}
	MediaTurma = soma/qntAlunos;
	for(int i=0; i<qntAlunos;i++){
		if (medias[i]>=MediaTurma){
			AcimaMedia++;
		}
	}
	printf("----------------------------------------------------\n");
	printf("Alunos em relação à média:\n\n");
	printf("    O número de alunos acima ou igual da média global é : %d\n",AcimaMedia);
	printf("    O número de alunos abaixo da média global é: %d\n", (qntAlunos - AcimaMedia));
}
void exibirRelatorio() {
	system("cls");
	printf("        Relatório de Alunos\n\n");
	if (qntAlunos == 0) {
		printf("Não há alunos cadastrados!\n\n");
		system("pause");
	} else {
		// junta os resultados de todos os alunos por linha, cada qual mostrando suas notas e suas médias, no fim, mostra a média da turma toda
		float somaMedias = 0;

		for (int i = 0; i < qntAlunos; i++) {
			printf("Aluno %d -> Notas: %.1f, %.1f, %.1f    | Média = %.1f\n",
			       i + 1, notas[i][0], notas[i][1], notas[i][2], medias[i]);

			somaMedias += medias[i];
		}

		float mediaTurma = somaMedias / qntAlunos;
		printf("\n    Média da turma = %.1f", mediaTurma);
		printf("\n----------------------------------------------------\n");
		ExibeMaiorMenor();
		MediaGlobal();
		
		printf("\n");
		system("pause");
	}
}
void pesquisarNota() {
	system("cls");
	if (qntAlunos == 0) {                      // Caso não tenha sido cadastrado nenhum aluno ainda, será realizado isto.
		printf("\tPesquisar Notas\n\n");
		printf("Não há alunos cadastrados!\n\n");
		system("pause");
	} else {                                   // Caso já tenha sido cadastrado algum aluno, será realizado isto.
		int escolhaAluno;
		while (1) {                            // Loop no caso de escolha certa, errada ou escolha = 0;
			printf("\tPesquisar Notas\n\n");
			printf("De qual aluno deseja ver as notas [0 para voltar]? ");
			scanf("%d", &escolhaAluno);

			if (escolhaAluno > 0 && escolhaAluno <= qntAlunos) {
				printf("\n----------------------------------------------------\n");
				printf(" --> Aluno %d\n", escolhaAluno);
				printf("\tNota 1: %.1f\n", notas[escolhaAluno - 1][0]);
				printf("\tNota 2: %.1f\n", notas[escolhaAluno - 1][1]);
				printf("\tNota 3: %.1f\n", notas[escolhaAluno - 1][2]);
				printf("\t Média: %.1f\n\n", medias[escolhaAluno - 1]);
				system("pause");
				break;
			} else if (escolhaAluno == 0) {
				break;
			} else {
				printf("\nEscolha inválida!\n\n");
				system("pause");
				system("cls");
			}
		}
	}

}

// Menu interativo que se repete até que seja digitado "0" no console, switch case redireciona a depender do input para a função descrita

// cls = limpa a tela (ou "clear" se for usar no Linux), chcp 65001 troca para UTF-8 para mostrar caracteres que usamos no ptbr, title troca o título da janela do console
// mode con muda por comando o tamanho da janela do console lendo em colunas e linhas, color troca a cor do console, o primeiro numero é o fundo e o segundo é a fonte
// set locale para Porguese muda o idioma para ptbr e faz aparecer alguns acentos, mas não é completo
int main() {

	system("title Gerenciador de Notas");
	system("mode con: cols=62 lines=30");
	system("color 0E");
	setlocale(LC_ALL,"pt_BR.UTF-8");
	system("chcp 65001>nul");


	int opcao;

	do {
		system("cls");
		printf("        Gerenciador de Notas e Estatísticas de Alunos\n\n");
		printf("  1 - Cadastrar notas\n");
		printf("  2 - Exibir relatório\n");
		printf("  3 - Pesquisar nota\n");
		printf("  0 - Sair\n\n\n");
		printf(" Escolha uma opção: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1:
				cadastrarNotas();
				break;
			case 2:
				exibirRelatorio();
				break;
			case 3:
				pesquisarNota();
				break;
			case 0:
				break;
			default:
				printf("\nOpção inválida\n\n");
				system("pause");
		}
	} while (opcao != 0);
}
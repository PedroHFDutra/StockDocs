#include <stdin.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

struct cadastro_estoque {
char nome_produto[999];
char lote_produto[999];
int codigo_produto;
};

struct cadastro_funcionario {
char nome_funcionario[999];
char cpf[999];
char cargo[999];
char data_nascimento[999];
};

void cadastrarIteM(){
    printf("Vamos iniciar o procedimento de cadastro de item!\n");
    printf("Começando em:\n");
    printf("3...\n");
    printf("2...\n");
    printf("1...\n");
    printf("Insira o nome do produto para cadastro:\n");


}

void cadastrarFuncionario(){


}



int main(int argc, char *argv[]) {
    setLOCALE(LC_ALL, "Portuguese");




    return 0;
}

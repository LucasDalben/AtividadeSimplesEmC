#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tam 5

typedef struct registros {
 char nome[40], endereco[60], telefone[15];
 int cod;
}cadastro;

int main(int argc, char *argv[]) {
 setlocale(LC_ALL,"Potuguese");
 int contador, escolha, i, cont;
 cadastro dados[tam];

 escolha = 3;
 i = 0;
 while(escolha != 0){
  printf("\tMENU");
  printf("\n[1]Adicionar um cadastro:\n[2]Mostrar contatos:\n[0]Fechar agenda:\n");
  scanf("\n%d", &escolha);
  fflush(stdin);
     system("cls");

  if (escolha == 1){
      if(i <= 4){
        contador= i+1;
        dados[i].cod = contador;
        printf("Codigo %d\n", contador);

        printf("Nome: ");
        gets(dados[i].nome);
        printf("Telefone: ");
        gets(dados[i].telefone);
        printf("Endereco: ");
        gets(dados[i].endereco);

        printf("\nCadastro realizado com sucesso!\n");
        system("pause");
        system("cls");
    i++;
     }
   else{
    printf("A agenda esta lotada!\n");
    system("pause");
    system("cls");
   }
   }
   else {
    if(escolha == 2){
         if(i==0){
             printf("Agenda vazia!\n");
             system("pause");
             system("cls");
         }else{
             for(cont = 0; cont < contador;cont++){
             printf("Cod %d\n", dados[cont].cod);
             printf("NOME: %s\n", dados[cont].nome);
             printf("TEL: %s\n", dados[cont].telefone );
             printf("ENDERECO: %s\n", dados[cont].endereco );
             system("pause");
             system("cls");
             }
         }
    }
   }
  if (escolha > 2 || escolha < 0){
      printf("Escolha invalida!\n");
      system("pause");
   system("cls");
  }
 }
 return 0;
}

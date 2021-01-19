#include <stdio.h>
#include <stdlib.h>

//Cadastro nome,rua e idade.

struct cadastro{

   char nome[20], rua[20];
   int idade;

 };

int main(){

  FILE *f;
  f = fopen("arquivo.txt","rb");

  if(f==NULL){
    printf("\nErro na abertura!!!\n");
    system("pause");
    exit(1);

  }

  struct cadastro c;
  fseek(f,2*sizeof(struct cadastro),SEEK_SET);
  fread(&c,sizeof(struct cadastro),1,f);
  printf("%s\n%s\n%d\n",c.nome,c.rua,c.idade);


  fclose(f);
  system("pause");

return 0;

}

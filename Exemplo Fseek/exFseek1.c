/*  Exemplo FSEEK

   Em geral , o acesso a um arquivo é quase sempre
   feito de modo sequencial. Porém, a linguagem C
   permite realizar operações de leitura e escrita
   rondômica usando a função fseek()

   Forma geral:


      int fseek(FILE *fp, long numbytes,int origem)

      Parâmetros :

      - fp : o ponteiro para o arquivo.
      - numbytes : é o total de bytes a ser pulado a
      partir de "origem".
      - origem : a partir de onde os "numbytes" se-
      rão contados.


    Retorno : ZERO em caso de sucesso.

    system("pause");

    return 0;

    -----------------------------------------------

    Os valores possíveis para o parâmetro "ORIGEM"
    são definidos por constante na biblioteca stdio.h
    e são :

    |-----------|-------|-------------------|
    | CONSTANTE | VALOR |  SIGNIFICADO      |
    |-----------|-------|-------------------|
    | SEEK_SET  |  0    | INÍCIO DO ARQUIVO |
    |-----------|-------|-------------------|
    | SEEK_CUR  |  1    | PONTO ATUAL NO ARQ|
    |-----------|-------|-------------------|
    | SEEK_END  |  2    | FIM DO ARQUIVO    |
    |-----------|-------|-------------------|


    fclose(f);
    system("pause");

    return 0;

   */

#include <stdio.h>
#include <stdlib.h>

struct cadastro{

    char nome[20], rua[20];
    int idade;

     };

int main(){

    FILE *f = fopen("arquivo.txt","wb");

    if( f == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    struct cadastro cad[4] = { "Ricardo","Rua 1" ,31,
                               "Carlos" ,"Rua 2" ,28,
                               "Ana"    ,"Rua 3" ,45,
                               "Bianca" ,"Rua 4" ,32
    };

    fwrite(cad,sizeof(struct cadastro),4,f);
    fclose(f);

    system("pause");

    return 0;

}

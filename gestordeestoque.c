#include <stdio.h>
typedef struct {
    char nome [50];
    int quantidade; 
    float preco; 
    int estoque_minimo;
} Produto;

; int main (){ 
     Produto p1 ;
    float valor_total;
    int opcao;

    do
    {
        printf("\n---GESTOR DE ESTOQUE INTELIGENTE---\n");
        printf("1.lancar chegada de produto\n");
        printf("2.ver relatorio de estoque\n");
        printf("3.sair do sistema\n");
        printf("escolha uma opcao:");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
                 printf("\nNome do produto:");
                 scanf ("%s", p1. nome);

                  printf("\nquantidade:");
                 scanf ("%d",&p1. quantidade );
 

                  printf("preco:");
                 scanf ("%f",&p1.preco );

                   printf("\n minimo :");
                 scanf ("%d",&p1.estoque_minimo );

            break;
            case 2:
            valor_total = p1.quantidade * p1.preco;
                      printf("\nProduto: %S|total :%d un\n",p1.nome,p1.quantidade);
                      printf("valor investido: R$ %.2f\n",valor_total);
                      if (p1.quantidade<p1.estoque_minimo){
                        printf("AVISO Comprar mas urgente!\n");
      
                      }
        break;
        case 3:
        printf("Saindo do sistema...Ate logo!\n");
        break;
        default:
        printf("opcao invalida tente novamente.\n");
        break;
 } 

} while (opcao != 3);

return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome_companhia[50];
  char area_atuacao[50];
  double valor_atual;
  double valor_anterior;
  double variacao;
} BolsaDeValores;

void preencherBolsa(BolsaDeValores *bolsa) {
  printf("Nome da companhia: ");
  scanf("%s", bolsa->nome_companhia);
  printf("Área de atuação: ");
  scanf("%s", bolsa->area_atuacao);
  printf("Valor atual da ação: ");
  scanf("%lf", &bolsa->valor_atual);
  printf("Valor anterior da ação: ");
  scanf("%lf", &bolsa->valor_anterior);
  bolsa->variacao = (bolsa->valor_atual - bolsa->valor_anterior) / bolsa->valor_anterior * 100.0;
}

void imprimirBolsa(BolsaDeValores *bolsa) {
  printf("Nome da companhia: %s\n", bolsa->nome_companhia);
  printf("Área de atuação: %s\n", bolsa->area_atuacao);
  printf("Valor atual da ação: %.2lf\n", bolsa->valor_atual);
  printf("Valor anterior da ação: %.2lf\n", bolsa->valor_anterior);
  printf("Variação da ação em porcentagem: %.2lf%%\n", bolsa->variacao);
}

int main() {
  BolsaDeValores b1;
  preencherBolsa(&b1);
  imprimirBolsa(&b1);

  BolsaDeValores bolsas[3];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Preenchendo informações da bolsa %d:\n", i + 1);
    preencherBolsa(&bolsas[i]);
    printf("\n");
  }

  printf("Informações das bolsas preenchidas:\n");
  for (i = 0; i < 3; i++) {
    imprimirBolsa(&bolsas[i]);
    printf("\n");
  }

  return 0;
}

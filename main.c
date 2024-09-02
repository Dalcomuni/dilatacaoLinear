#include <stdio.h>

int main(void) {
  printf("##################\n");
  printf("#dilatacao linear#\n");
  printf("##################\n");

  
  printf("identifique o coeficiente da dilatacão linear em c:\n");
  float coeficienteLinear;
  scanf("%f", &coeficienteLinear);

  
  printf("identifique a tempetaruta inicial em c°:\n");
  float temperaturaInicial;
  scanf("%f", &temperaturaInicial);


  printf("identifique a temperatura final:\n");
  float temperaturaFinal;
  scanf("%f", &temperaturaFinal);

  float variaçãodeTemperatura = temperaturaFinal - temperaturaInicial;

  printf("Indique o comprimento inicial do material:\n");
  float comprimentoInicial;
  scanf("%f" ,&comprimentoInicial);

  float VariacaodeComprimento = comprimentoInicial * variaçãodeTemperatura;
  printf("a variacão de comprimento é:");
  printf("%f" ,VariacaodeComprimento);

  return 0;
}
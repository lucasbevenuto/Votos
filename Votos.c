#include <stdio.h>
#include <stdio.h>

int main()
{
  int votosA, votosB, votosC, votosD, votosBrancos, votosNulos, total, totalValidos;
  
  printf("============ELEIÇÕES 2022============\n");
   
  printf("INFORME A QUANTIDADE DE VOTOS DO CANDIDATO A: ");
  scanf("%d", &votosA);
  printf("INFORME A QUANTIDADE DE VOTOS DO CANDIDATO B: ");
  scanf("%d", &votosB);
  printf("INFORME A QUANTIDADE DE VOTOS DO CANDIDATO C: ");
  scanf("%d", &votosC);
  printf("INFORME A QUANTIDADE DE VOTOS DO CANDIDATO D: ");
  scanf("%d", &votosD);
  printf("INFORME A QUANTIDADE DE VOTOS BRANCOS: ");
  scanf("%d", &votosBrancos);
  printf("INFORME A QUANTIDADE DE VOTOS NULOS: ");
  scanf("%d", &votosNulos);
    
  total = votosA + votosB + votosC + votosD + votosBrancos + votosNulos;
  totalValidos = votosA + votosB + votosC + votosD;
    
  printf("\n======== RESULTADOS===========");
  printf("\n TOTAL DE VOTOS: %d", total);
  printf("\n TOTAL DE VOTOS VALIDOS: %d", totalValidos);
    
  printf("\nPERCENTUAL DE VOTOS VALIDOS: %.2f %c", totalValidos*100.0/total, "%");
  
  printf("\nPERCENTUAL DE VOTOS DO CANDIDATO A: %.2f %c", votosA*100.0/total, "%");
  
  printf("\nPERCENTUAL DE VOTOS DO CANDIDATO B: %.2f %c", votosB*100.0/total, "%");
  
  printf("\nPERCENTUAL DE VOTOS DO CANDIDATO C: %.2f %c", votosC*100.0/total, "%");

  printf("\nPERCENTUAL DE VOTOS DO CANDIDATO D: %.2f %c", votosC*100.0/total, "%");
  
  printf("\nPERCENTUAL DE VOTOS EM BRANCOS: %.2f %c", votosBrancos*100.0/total, "%");
  
  printf("\nPERCENTUAL DE VOTOS NULOS: %.2f %c", votosNulos*100.0/total, "%");
    printf("\n===========================");
  
    return 0;
  }

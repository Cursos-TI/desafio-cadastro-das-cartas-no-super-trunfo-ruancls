#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da carta 1
    char estado1;          // Ler o estado, uma letra de "A" a "H" (representando os 8 estados), tipo: char.
    char codcarta1[20];    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string).
    char nomecidade1[20];  // O nome da cidade. Tipo: char[] (string).
    int populacao1;        // O número de habitantes da cidade. Tipo: int.
    float area1;           // A área da cidade em quilômetros quadrados. Tipo: float.
    float PIB1;            // O Produto Interno Bruto da cidade. Tipo: float.
    int pturisticos1;      // A quantidade de pontos turísticos na cidade. Tipo: int.

    // Variáveis da carta 2
    char estado2;          
    char codcarta2[20];     
    char nomecidade2[20];  
    int populacao2;        
    float area2;           
    float PIB2;            
    int pturisticos2;      

    // Carta 1 - Coleta de dados
    printf("Dados da carta 1\n");                     

    printf("Preencha o estado da carta (A a H): ");  
    scanf("%c", &estado1);                                 // Coleta o input preenchido em estado1.  
    getchar();                                             // Consome a quebra de linha gerada pelo enter.
    
    printf("Preencha o codigo da carta (01 a 04): ");      
    fgets(codcarta1, sizeof(codcarta1), stdin);            // Coleta o input preenchido em codcarta1.
    codcarta1[strcspn(codcarta1, "\n")] = 0;               // Finaliza a string.

    printf("Informe o nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);        // Coleta o input preenchido em nomecidade1.
    nomecidade1[strcspn(nomecidade1, "\n")] = 0;           // Finaliza a string.

    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao1);                              // Coleta o input preenchido em populacao1.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    printf("Informe a area da cidade: ");                 
    scanf("%f", &area1);                                   // Coleta o input preenchido em area1.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    printf("Informe o PIB da cidade: "); 
    scanf("%f", &PIB1);                                    // Coleta o input preenchido em PIB1.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    printf("Informe a quantidade de pontos turisticos: "); 
    scanf("%d", &pturisticos1);                            // Coleta o input preenchido em pturisticos1.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    // Carta 2 - Coleta de dados
    printf("\n");  
    printf("Dados da carta 2\n");                     

    printf("Preencha o estado da carta (A a H): ");  
    scanf("%c", &estado2);                                 // Coleta o input preenchido em estado2.  
    getchar();                                             // Consome a quebra de linha gerada pelo enter.
    
    printf("Preencha o codigo da carta (01 a 04): ");      
    fgets(codcarta2, sizeof(codcarta2), stdin);            // Coleta o input preenchido em codcarta2.
    codcarta2[strcspn(codcarta2, "\n")] = 0;               // Finaliza a string.

    printf("Informe o nome da cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);        // Coleta o input preenchido em nomecidade2.
    nomecidade2[strcspn(nomecidade2, "\n")] = 0;           // Finaliza a string.

    printf("Informe a populacao da cidade: ");
    scanf("%d", &populacao2);                              // Coleta o input preenchido em populacao2.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    printf("Informe a area da cidade: ");                 
    scanf("%f", &area2);                                   // Coleta o input preenchido em area2.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    printf("Informe o PIB da cidade: "); 
    scanf("%f", &PIB2);                                    // Coleta o input preenchido em PIB2.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.

    printf("Informe a quantidade de pontos turisticos: "); 
    scanf("%d", &pturisticos2);                            // Coleta o input preenchido em pturisticos2.
    getchar();                                             // Consome a quebra de linha gerada pelo enter.
    

    // Printando carta 1
    printf("\n");                                          // Quebra de linha para separar visualmente o print completo da carta 1.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);                       
    printf("Codigo: %c%s\n", estado1, codcarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB1);
    printf("Numeros de Pontos Turisticos: %d\n", pturisticos1);

    // Printando carta 2
    printf("\n");                                          // Quebra de linha para separar visualmente o print completo da carta 1.
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);                       
    printf("Codigo: %c%s\n", estado2, codcarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", PIB2);
    printf("Numeros de Pontos Turisticos: %d\n", pturisticos2);
    
    printf("\n"); 
    printf("Pressione ENTER para sair...");
    getchar();
    return 0;

}
    /*
    Apos o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informacões cadastradas, de forma organizada e legível. 
    Para cada carta, imprima cada informação em uma linha separada, com uma descricao clara. Por exemplo:
    Carta 1:
    Estado: A
    Codigo: A01
    Nome da Cidade: Sao Paulo
    População: 12325000
    Area: 1521.11 km²
    PIB: 699.28 bilhoes de reais
    Numero de Pontos Turisticos: 50
    */
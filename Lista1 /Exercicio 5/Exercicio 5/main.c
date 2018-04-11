//
//  main.c
//  Exercicio 5
//
//  Created by Pedro Henrique on 3/8/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, nota;
    int i = 0;
    int max, min;
    
    max = 0;
    min = 10;
    
    printf("Numero de alunos: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Quantidade de alunos invalida, inserir outro numero: ");
    }
    
    while (i < n) {
        
        printf("Insira a nota: ");
        scanf("%d",&nota);
        
        i ++;
        
        if (nota < min) {
            min = nota;
        }
        if (nota > max) {
            max = nota;
        }
    
    }
    
    printf("Maior nota = %d, Menor nota = %d\n", max, min);
    
    
    
    return 0;
}

//
//  main.c
//  Lista1 - Exercicio 1
//
//  Created by Pedro Henrique on 3/6/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int quantidade, n, dobro;
    
    printf("Insira a quantidade de numeros: ");
    scanf("%d",&quantidade);
    
    for (int i = 0; i < quantidade; i++) {
        
        printf("Insira um numero: ");
        scanf("%d",&n);
        
        dobro = n * n;
        
        printf("Dobro:%i\n", dobro);
        
    }
    
    return 0;
}


//
//  main.c
//  Exercicio 6
//
//  Created by Pedro Henrique on 3/8/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, par, soma;
    int i;
    
    i = 0;
    par = 0;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    printf("Numeros pares: ");
    while (i<n) {
        
        par = par + 2;
        i ++;
        
        printf("%d\n",par);
        
        soma = soma + n;
        soma++;
        
    }
    soma = soma -1;
    printf("Soma: ", soma);
    
    
    return 0;
}

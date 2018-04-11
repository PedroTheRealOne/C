//
//  main.c
//  Exercicio 2
//
//  Created by Pedro Henrique on 3/6/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, soma = 0;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    for(int i = 1; i < n ; i++){
        
        soma = soma + i;
    }
    
    printf("Soma: %i\n", soma);
    
    
    return 0;
}

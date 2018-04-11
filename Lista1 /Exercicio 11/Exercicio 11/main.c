//
//  main.c
//  Exercicio 11
//
//  Created by Pedro Henrique on 3/12/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    int soma = 0;
    int div;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    for(div = 1; div < n; div++){
        
        if (n % div) {
            soma = soma + div;
        }
        
    }
    
    if(n == soma){
        printf("O numero e perfeito.");
    }else{
        printf("O numero nao e perfeito");
    }
    
    return 0;
}

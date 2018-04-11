//
//  main.c
//  Exercicio 9
//
//  Created by Pedro Henrique on 3/12/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    int i;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    for (i = 1; i * (i+1)*(i+2) < n; i++)
        ;
    
    if(i*(i+1)*(i+2) == n){
        printf("produto de: %i\n", i, i+1, i+2);
    }else{
        printf("Não é triangulo: %i\n", n);
    }
    
    
    return 0;
}

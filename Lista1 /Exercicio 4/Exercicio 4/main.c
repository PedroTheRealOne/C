//
//  main.c
//  Exercicio 4
//
//  Created by Pedro Henrique on 3/8/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, n, calc, i;
    
    calc = 1;
    i = 0;
    
    printf("Insira o numero: ");
    scanf("%d",&x);
    
    do {
        printf("Insira o expoente: ");
        scanf("%d",&n);
    } while (n < 0);
    
    
    while (i != n) {
        
        calc = calc * x;
        i++;
        
    }
    
    printf("%i\n", calc);
    
    
    
    return 0;
}

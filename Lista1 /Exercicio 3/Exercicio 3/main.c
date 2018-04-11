//
//  main.c
//  Exercicio 3
//
//  Created by Pedro Henrique on 3/6/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int n, x;
    
    x = 1;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    printf("Numeros: ");
    for (int i = 0; i < n; i++) {
        
        printf("%d\n", x);
        
        x = x + 2;
        
    }
    
    
    return 0;
}

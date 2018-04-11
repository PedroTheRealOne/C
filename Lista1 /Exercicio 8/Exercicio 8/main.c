//
//  main.c
//  Exercicio 8
//
//  Created by Pedro Henrique on 3/12/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i, j, n;
    int cont;
    int mult;
    
    printf("Insira um numero n: ");
    scanf("%d",&n);
    
    printf("Insira um numero i: ");
    scanf("%d",&i);
    
    printf("Insira um numero j: ");
    scanf("%d", &j);
    
    mult = 0;
    cont = 0;
    
    while (cont < n) {
        
        if(mult%i == 0 || mult%j == 0){
            
            printf("%d\n", mult);
            cont ++;
        }
        mult ++;
    }
    return 0;
}

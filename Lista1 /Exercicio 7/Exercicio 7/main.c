//
//  main.c
//  Exercicio 7
//
//  Created by Pedro Henrique on 3/12/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, cont;
    cont = 1;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    if (n < 0) {
        printf("Insira um numero maior que 0: ");
        scanf("%d",&n);
    }else{
        
        for(int i = n; i != 0; i--){
            
            cont = cont * i;
            
        }
        printf("Fatorial: %i\n",cont);
        
    }
    
    return 0;
}

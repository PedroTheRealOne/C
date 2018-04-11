//
//  main.c
//  Formula de Recorrencia
//
//  Created by Pedro Henrique on 3/13/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    float somak = 0, ai;
    int i, x, k, bi;
    
    
    printf("Insira os valores de X e K: ");
    scanf("%d, %d", &x, &k);
    
    i = 0;
    ai = x;
    bi = k;
    
    do{
        
        somak += ai / bi;
        ai *= x;
        bi --;
        i++;
        
    }while (i <= k);
    
    printf("Valor =%f", somak);
    
    return 0;
}

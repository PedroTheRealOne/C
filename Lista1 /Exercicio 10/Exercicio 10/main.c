//
//  main.c
//  Exercicio 10
//
//  Created by Pedro Henrique on 3/12/18.
//  Copyright © 2018 Pedro Henrique. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int n;
    int i = 0;
    int div;
    
    printf("Insira um numero: ");
    scanf("%d",&n);
    
    for(div = 1; div <= n; div ++){
        
        if (n % div == 0)
            i++;
        
    }
    
    if (i == 2){
        printf("%d e primo\n", n);
    }else{
        printf("%d nao e primo\n", n);
    }
    
    
    return 0;
}

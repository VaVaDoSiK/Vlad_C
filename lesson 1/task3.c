#include <stdio.h>

int main(){
    char n;
    printf("Введите символ: \n");
    scanf("%s", &n);
    
    if (n >= 'A' && n <= 'Z'){
        printf("Символ %s подходит \n", &n);
        }

    else{
        printf("Символ не подходит");
    }
    return 0;
}
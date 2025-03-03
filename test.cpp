#include <stdio.h>

int main(){
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);

    if (num % 2 != 0){
        printf("NO");
    }
    else if (num == 2){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}
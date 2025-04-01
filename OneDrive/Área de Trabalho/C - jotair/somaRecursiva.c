#include <stdio.h>

int somaRec(int);
int somaRec(int num) {
    //printf("%d", num)
    if(num <= 5)
        return (num+somaRec(num+1));
    else
        return 0;
}
int main()
{
    int i = 1;
    printf("%d", somaRec(i));
    return 0;
}

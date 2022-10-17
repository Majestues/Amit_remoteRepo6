#include <stdio.h>
#include <stdlib.h>

int main()
{
    int terms;

    printf("Please enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

    printf("0 , 1 ");
    fibo(terms - 2);

    return 0;
}

void fibo(int terms){
    static int first_number = 0;
    static int second_number = 1;
    static int next_num;

    if(terms > 0){

        next_num = first_number + second_number;
        first_number = second_number;
        second_number = next_num;

        printf(", %d ",next_num);
        fibo(terms -1);
    }

}


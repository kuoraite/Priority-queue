//Simona Kuoraitė 2110586

#include <stdio.h>
#include <stdlib.h>
#include "priorityQueue.h"

int main(){

    Queue *pq = malloc(sizeof(Queue));
    create(pq);

    int b = 3;
    enqueue(pq, &b, 4);
    int c = 13;
    enqueue(pq, &c, 3);
    int d = 26;
    enqueue(pq, &d, 6);
    int e = 60;
    enqueue(pq, &e, 2);
    int f = 25;
    enqueue(pq, &f, 15);

    print(pq);

    printf("---------------------------\n");

    int *p = peek(pq);
    printf("Peek: %d \n", *p);

    printf("---------------------------\n");

    dequeue(pq);

    p = peek(pq);
    printf("Peek: %d \n", *p);

    printf("---------------------------\n");

    int g = 100;
    enqueue(pq, &g, 1);

    p = peek(pq);
    printf("Peek: %d \n", *p);

    printf("---------------------------\n");

    clear(pq);

    printf("---------------------------\n");   

    print(pq);

    return 0;
}
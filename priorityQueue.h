#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

struct QueueNode{
    void *data;
    int priority;
    struct QueueNode *next;
};

typedef struct QueueNode QueueNode;

struct Queue{
    QueueNode *front;
    QueueNode *end;
};

typedef struct Queue Queue;

void create(Queue *q);
int isEmpty(Queue *q);
void *enqueue(Queue *q, void *d, int p);
void print(Queue *queue);
void *dequeue(Queue *q);
void *peek(Queue *q);
void clear(Queue *q);

#endif
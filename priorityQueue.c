#include <stdio.h>
#include <stdlib.h>
#include "priorityQueue.h"

void create(Queue *q){
    q->front = NULL;
    q->end = NULL;
}

QueueNode *newnode(void *d, int p){
    QueueNode *temp = malloc(sizeof(QueueNode));

    temp->data = d;
    temp->priority = p;
    temp->next = NULL;

    return temp;
}

int isEmpty(Queue *q){

    if(q->front == NULL && q->end == NULL){
        return 0;
    }
    else{
        return 1;
    }
}

void *enqueue(Queue *q, void *d, int p){
    QueueNode *queue = q->front;
    QueueNode *temp = newnode(d, p);

    if(queue == NULL){
        temp->next = queue;
        q->front = temp;
        return q->front;
    }
    if(queue->priority > temp->priority){
        temp->next = q->front;
        q->front = temp;
    }
    else{         

        while(queue->next != NULL && (queue->next)->priority < temp->priority){
            queue = queue->next;
        }
        temp->next = queue->next;
        queue->next = temp;
    }    
}

void print(Queue *queue){

    if(isEmpty(queue) == 0){
        printf("Priority queue is empty \n");
        return;
    }

    QueueNode *q = queue->front;
    int *value;
    
    while(q != NULL){
        value = q->data;
        printf("value: %d, priority: %d\n", *value, q->priority);
        q = q->next;
    }
}

void *dequeue(Queue *q){

    QueueNode *temp = q->front;

    if(isEmpty != 0){
      if(temp->next == NULL){
        int *value;
        value = temp->data;
        printf("LAST element %d, priority %d was deleted\n", *value, temp->priority);
        free(temp);
        q->front = q->end = NULL;
        }
        else{
        int *value = temp->data;
        q->front = q->front->next;
        printf("Element %d, priority %d was deleted\n", *value, temp->priority);
        free(temp);  
        }  
    }  
    else{
        "Cannot delete an element. Priority queue is empty \n";
    } 
}

void *peek(Queue *queue){
    return(queue->front->data);
}

void clear(Queue *q){
    if(isEmpty(q) == 0){
        printf("Cannot clear priority queue. Priority queue is empty \n");
        return;
    }
    else{
    while(isEmpty(q) != 0)
        {
            dequeue(q);
        }
        printf("Priority queue cleared successfully \n");
    }
    
}
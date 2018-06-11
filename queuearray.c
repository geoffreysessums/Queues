#include <stdio.h>

// max size of ring-buffered queue array
#define MAX_SIZE 10
#define QUEUE_ARRAY_SIZE (MAX_SIZE + 1)

// declare a character array of size 10
char queue[QUEUE_ARRAY_SIZE];

// initialize head of queue
int head = 0;

// initialize tail of queue 
int tail = 0;

// Queue Functions
void Enqueue(char element)
{
    if (isFull()) 
    {
        printf("Error: Could NOT insert element, the queue is FULL\n\n");
    } else {
        queue[tail] = element;
        tail++;
    }
} // end of Enqueue

char Dequeue()
{
    char element;

    if (isEmpty())
    {
        printf("Error: Could NOT remove element, the queue is EMPTY\n\n");
    } else {
        element = queue[head];
        return element;
    }
} // end of Dequeue

int isFull()
{
    if (head == tail)
    {

    }
} // end of isFull

int isEmpty()
{

} // end of is Empty

void main(void) 
{

} // end of main
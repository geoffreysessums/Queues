#include <stdio.h>

// max size of ring-buffered queue array
#define MAX_SIZE 9 
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
    if (IsFull()) 
    {
        printf("Error: Could NOT insert element, the queue is FULL\n\n");
    } else {
        queue[tail] = element;
        tail = (tail + 1) % QUEUE_ARRAY_SIZE;
    }
} // end of Enqueue

char Dequeue()
{
    char element;

    if (IsEmpty())
    {
        printf("Error: Could NOT remove element, the queue is EMPTY\n\n");
    } else {
        element = queue[head];
        head = (head + 1) % QUEUE_ARRAY_SIZE;
        return element;
    }
} // end of Dequeue

int IsFull()
{
    if (head == (tail + 1) % QUEUE_ARRAY_SIZE)
    {
        return 1;
    }
    return 0;
} // end of isFull

int IsEmpty()
{
    if (head == tail)
    {
        return 1;
    }
    return 0;
} // end of is Empty

int main(void) 
{
    char element;

    // Brief program description
    printf("\n%s\n\n%s\n%s\n\n"
        , "Program: queuearray.c by Geoffrey Sessums"
        , "This program demonstrates a simple queue implementation using an "
        , "array of fixed size (10).");
    
    // Check if queue is empty
    printf("Attempt to dequeue from empty queue, then print head & tail.\n");
    element = Dequeue();
    printf("Queue status: head = %d, tail = %d\n\n", head, tail);

    // Enqueue 5 elements, then print head and tail values
    printf("Enqueue A\n");
    Enqueue('A');
    printf("Enqueue B\n");
    Enqueue('B');
    printf("Enqueue C\n");
    Enqueue('C');
    printf("Enqueue D\n");
    Enqueue('D');
    printf("Enqueue E\n");
    Enqueue('E');
    printf("\nQueue status: head = %d, tail = %d\n\n", head, tail);

    // Dequeue 1 element, then print head and tail values
    printf("%s%c\n%s%d%s%d\n\n"
        , "Dequeue ", Dequeue(), "\nQueue status: head = ", head, " tail = ", tail);

   // Alternate enqueue and dequeue operations until element J
    printf("Enqueue F\n");
    Enqueue('F');
    printf("%s%c\n%s%d%s%d\n\n"
        , "Dequeue ", Dequeue(), "\nQueue status: head = ", head, " tail = ", tail);
    printf("Enqueue G\n");
    Enqueue('G');
    printf("%s%c\n%s%d%s%d\n\n"
        , "Dequeue ", Dequeue(), "\nQueue status: head = ", head, " tail = ", tail);
    printf("Enqueue H\n");
    Enqueue('H');
    printf("%s%c\n%s%d%s%d\n\n"
        , "Dequeue ", Dequeue(), "\nQueue status: head = ", head, " tail = ", tail);
    printf("Enqueue I\n");
    Enqueue('I');
    printf("%s%c\n%s%d%s%d\n\n"
        , "Dequeue ", Dequeue(), "\nQueue status: head = ", head, " tail = ", tail);
    printf("Enqueue J\n");
    Enqueue('J');

    printf("%s%d%s%d\n\n"
        , "\nQueue status: head = ", head, " tail = ", tail);
    
    printf("%s%s%s\n\n"
        , "At this point, the tail is beyond the end of our queue array."
        , " Notice how the tail can \"wrap around\" from the end of the queue"
        , " array to the beginning position.");

    // Enqueue 1 element, then print the queue status
    printf("Enqueue K\n");
    Enqueue('K');
    printf("\nQueue status: head = %d, tail = %d\n\n", head, tail);

    printf("Enqueue L\n");
    Enqueue('L');
    printf("Enqueue M\n");
    Enqueue('M');
    printf("Enqueue N\n");
    Enqueue('N');
    printf("\nQueue status: head = %d, tail = %d\n\n", head, tail);

    // Check if queue is full 
    printf("Attempt to enqueue 'O' to a full queue, then print queue status.\n");
    Enqueue('O');
    printf("Queue status: head = %d, tail = %d\n\n", head, tail);

    // Print the entire contents of the queue array
    printf("Dequeue and print the entire contents of the queue array.\n");
    printf("Queue: ");
    while (!IsEmpty()) {
        printf("%c ", Dequeue());
    }
    printf("\nQueue status: head = %d, tail = %d\n\n", head, tail);
} // end of main
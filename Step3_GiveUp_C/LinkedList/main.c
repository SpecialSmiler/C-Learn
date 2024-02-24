#include <stdio.h>
#include <stdlib.h>

typedef struct _Node
{
    int data;
    struct _Node* next;
} Node;

static void link_list_prepend(Node* head, int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head->next;
    head->next = newNode;
}

static void link_list_append(Node* head, int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;

    Node* tail = head;
    while (tail->next)
    {
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->next = NULL;
}

static void link_list_print(Node* head)
{
    if (!head)
        return;

    Node* currentNode = head->next;
    while (currentNode)
    {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}


void main()
{
    Node head;
    head.next = NULL;

    link_list_prepend(&head, 1);
    link_list_prepend(&head, 2);
    link_list_prepend(&head, 3);
    link_list_prepend(&head, 4);
    link_list_prepend(&head, 5);
    link_list_print(&head);

    Node head2;
    head2.next = NULL;
    link_list_append(&head2, 1);
    link_list_append(&head2, 2);
    link_list_append(&head2, 3);
    link_list_append(&head2, 4);
    link_list_append(&head2, 5);
    link_list_print(&head2);
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node * prev;
    struct Node * next;
}Node_t;

struct Node *createNode(int data)
{
    Node_t * newNode = (Node_t *)malloc(sizeof(Node_t));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void fwdtraverselinkedlist(struct Node * head)
{
    Node_t * current = head;
    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node * gettailNode(struct Node * head)
{
    Node_t * current = head;
    if(head == NULL)
    {
        return head;
    }

    if(current->next == NULL)
    {
        return head;
    }

    while(current->next != NULL && current->next->next != NULL)
    {
        current = current->next;
    }

    return current->next;
}

void revtraverselinkedlist(struct Node * tail)
{
    Node_t * current = tail;
    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

int findLength(struct Node* head) 
{
    int count = 0;
    struct Node* current = head;
    while( current != NULL)
    {
        current = current->next;
        count++;
    }
    return count;
}

struct Node * InsertatBegin(struct Node * head,int data)
{
    Node_t * newNode = (Node_t *) createNode(data);

    if(head == NULL)
    {
        return newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
}

struct Node * InsertatEnd(struct Node * head,int data)
{
    Node_t * newNode = (Node_t *) createNode(data);

    if(head == NULL)
    {
        head = newNode;
        return head;
    }
    else
    {
        Node_t * current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    return head;
}

struct Node * InsertAtPosition(struct Node * head, int pos, int data)
{
    Node_t * newNode = (Node_t *) createNode(data);
    if(pos == 1)
    {
        newNode->next = head;
        if(head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return head;
    }

    Node_t * current = head;
    int count = 1;
    while(count < pos -1 && current != NULL)
    {
        current = current->next;
        count++;
    }

    if(current == NULL)
    {
        printf("Out of bound\n");
        free(newNode);
        return head;
    }

    newNode->next = current->next; 
    newNode->prev = current;
    current->next = newNode;

    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
    return head;    
}

void printList(struct Node* head)
{
    Node_t * current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
  	printf("\n");
}

struct Node * DelHead(struct Node *head) 
{
    if(head == NULL)
    {
        return NULL;
    }

    Node_t * temp = head;
    head = head->next;
    if(head != NULL)
    {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

struct Node * Deltail(struct Node *head) 
{
    if(head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    Node_t * temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);
    return head;
}

struct Node *DelPos(struct Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    
    Node_t *current = head;
    if (pos == 1 && current->next == NULL && current->prev == NULL)
    {
        free(current);
        return NULL;
    }

    int count = 1;
    // Traverse to the node at the given position
    while (count < pos && current != NULL)
    {
        current = current->next;
        count++;
    }

    // Check if we reached out of bounds
    if (current == NULL) {
        printf("Out of bound\n");
        return head;
    }
        
    if (current == head)
    {
        head = current->next;
        if (head != NULL)
        {  // Update the new head's previous pointer
            head->prev = NULL;
        }
    } 
    else
    {
        if (current->prev != NULL)
        {
            current->prev->next = current->next;
        }
        if (current->next != NULL)
        {
            current->next->prev = current->prev;
        }
    }
    free(current);
    return head;
}

int main(void)
{
    int data = 1;
    Node_t * tail = NULL;
    Node_t * head = createNode(2);
    head->next = createNode(3);
    head->next->prev = head; 
    head->next->next = createNode(4);
    head->next->next->prev = head->next;

    printf("Forward Traversal:\n");
    fwdtraverselinkedlist(head);

    printf("Backward Traversal:\n");
    revtraverselinkedlist(head->next->next);

    printf("Length of the doubly linked list: %d\n",findLength(head));
    head  = InsertatBegin(head,data);
    printList(head);
    printf("Length of the doubly linked list: %d\n",findLength(head));
    data = 0;
    head  = InsertatBegin(head,data);
    printList(head);
    data = 5;
    head  = InsertatEnd(head,data);
    printList(head);
    head  = InsertAtPosition(head, 1, -1);
    printList(head);
    head  = InsertAtPosition(head, 8, 6);
    printList(head);
    tail = gettailNode(head);
    printf("Backward Traversal:\n");
    revtraverselinkedlist(tail);
    head = DelHead(head);
    printList(head);
    head = Deltail(head);
    printList(head);
    head = DelHead(head);
    printList(head);   
    head = DelPos(head,3);
    printf("Length of the doubly linked list: %d\n",findLength(head));
    printList(head);  
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node * next;
}Node_t;

// Function to create a new Node
struct Node * createNode(int data)
{
    Node_t * temp = (Node_t *)malloc(sizeof(Node_t));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void traverselinkedlist(struct Node * head)
{
    Node_t * current = head;

    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

bool searchitem(struct Node * head,int target)
{
    Node_t * current = head;
    while(current != NULL)
    {
       if(current->data == target)
       {
        return true;
       }
       current = current->next; 
    }
    return false;
}

int findlength(struct Node *head)
{
    Node_t * current = head;
    int length = 0;

    if(head == NULL)
    return 0;

    while(current != NULL)
    {
        length++;
        current = current->next;
    }
    return length;
}

struct Node * InsertatBeginning(struct Node *head,int data)
{
    if(head != NULL) //if condition is optional
    {
        Node_t *newNode = createNode(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    else
    {
        Node_t *newNode = createNode(data);
        return newNode;
    }
}

struct Node * InsertatEnd(struct Node *head, int data)
{
    Node_t * newNode = createNode(data);

    if (head == NULL)
    return newNode;

    Node_t * current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

struct Node* InsertatPos(struct Node* head, int pos, int data)
{
    if (pos < 1)
    {
        printf("Invalid Position\n");
        return head;
    }

    Node_t * newNode = createNode(data);
    if(pos == 1)
    {
        newNode->next = head;
        return newNode;
    }

    Node_t * prev = head;
    int count = 1;
    while(count < pos - 1 && prev != NULL)
    {
        prev = prev->next;
        count ++;
    }

    // If position is greater than the number of nodes
    if (prev == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return head;
    }

    newNode->next = prev->next;
    prev->next = newNode;

    return head;
}

struct Node* removeFirstNode(struct Node* head)
{
    if(head == NULL)
    return NULL;

    Node_t * temp = head;
    head = head->next;
    free(temp);
    return head;    
}

struct Node* removeLastNode(struct Node* head)
{
    if(head == NULL)
    return NULL;

    if(head->next == NULL)
    {
        free(head);
        return NULL;
    }
    
    Node_t * secondlast = head;
    while(secondlast->next->next != NULL)
    {
        secondlast = secondlast->next;   
    }
    free(secondlast->next);
    secondlast->next = NULL;
    return head; 
}

struct Node* deleteAtPosition(struct Node* head, int pos)
{
    if (head == NULL || pos < 1)
    {
        printf("Invalid Position\n");
        return head;
    }

    Node_t * temp = head;
    if (pos == 1)
    {
        head = head->next;
        free(temp);
        return head;
    }

    Node_t *curr = head;
    int count = 1;
    while(count < pos - 1 && curr != NULL)
    {
        curr = curr->next;
        count ++;
    }

    // If the position is out of range
    if (curr == NULL)
    {
        return head;
    }

    temp = curr->next;
    // Update the links to bypass the node to be deleted
    curr->next = curr->next->next;

    // Delete the node
    free(temp);
    return head;
}

int main(void)
{
    Node_t *createhead = NULL;
    int length = 0;
    bool key = false;
    
    for(int i = 0; i <= 5 ; i++)
    {
        createhead = InsertatBeginning(createhead,i);
    }

    createhead = InsertatPos(createhead, 1, 7);
    createhead = InsertatPos(createhead, 2, 6);

    createhead = InsertatEnd(createhead, -1);
    createhead = InsertatEnd(createhead, -2);

    length = findlength(createhead);
    printf("Length of the list is %d\n",length);
    traverselinkedlist(createhead);
    key = searchitem(createhead,8);
    if(key == true)
    printf("Searched item %d is available in the list.\n",8);
    else
    printf("Searched item %d is not available in the list.\n",8);

    key = searchitem(createhead,5);
    if(key == true)
    printf("Searched item %d is available in the list.\n",5);
    else
    printf("Searched item %d is not available in the list.\n",5);

    createhead = removeFirstNode(createhead);
    traverselinkedlist(createhead);
    createhead = removeLastNode(createhead);
    traverselinkedlist(createhead);
    createhead = deleteAtPosition(createhead, -1);
    createhead = deleteAtPosition(createhead, 3);
    traverselinkedlist(createhead);
    return 0;
}
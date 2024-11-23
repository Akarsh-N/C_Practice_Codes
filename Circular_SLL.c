#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node * next;
}Node_t;

struct Node * createnodewhenEmptylist(int data)
{
    Node_t * newNode = (Node_t *)malloc(sizeof(Node_t));
    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}

struct Node * createNode(int data)
{
    Node_t * newNode = (Node_t *)malloc(sizeof(Node_t));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* InsertInEmptyList(struct Node* last, int data) {
    if (last != NULL) return last;

    // Create a new node
    Node_t * newNode = createnodewhenEmptylist(data);

    // Update last to point to the new node
    last = newNode;
    return last;
}

struct Node *InsertAtBeginning(struct Node *last, int value)
{
    Node_t * newNode = createNode(value);

    // If the list is empty, make the new node point to itself
    // and set it as last
    if (last == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    // Insert the new node at the beginning
    newNode->next = last->next;
    last->next = newNode;

    return last;
}

struct Node *InsertEnd(struct Node *tail, int value)
{
    struct Node *newNode = createNode(value);
    if (tail == NULL)
    {
        // If the list is empty, initialize it with the new node
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // Insert new node after the current tail and update the tail pointer
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    return tail;
}

void printList(struct Node* last) 
{
    if (last == NULL)
    return;

    // Start from the head node
    Node_t * head = last->next;
    while (1)
    {
        printf("%d ", head->data);
        head = head->next;
        if (head == last->next)
        break;
    }
    printf("\n");
}

struct Node* InsertAtPosition(struct Node *last, int data, int pos)
{
    if (last == NULL) 
    {
        // If the list is empty
        if (pos != 1) 
        {
            printf("Invalid position!\n");
            return last;
        }
        // Create a new node and make it point to itself
        Node_t * newNode = createNode(data);
        last = newNode;
        last->next = last;
        return last;
    }

    // Create a new node with the given data
    Node_t * newNode = createNode(data);

    // curr will point to head initially
    Node_t * curr = last->next;

    if (pos == 1) 
    {
        // Insert at the beginning
        newNode->next = curr;
        last->next = newNode;
        return last;
    }

    // Traverse the list to find the insertion point
    for (int i = 1; i < pos - 1; ++i) 
    {
        curr = curr->next;

        // If position is out of bounds
        if (curr == last->next) 
        {
            printf("Invalid position!\n");
            return last;
        }
    }

    // Insert the new node at the desired position
    newNode->next = curr->next;
    curr->next = newNode;

    // Update last if the new node is inserted at the end
    if (curr == last) 
    last = newNode;

    return last;
}

struct Node* DeleteFirstNode(struct Node* last) 
{
    if (last == NULL) 
    {
        // If the list is empty
        printf("List is empty\n");
        return NULL;
    }

    Node_t * head = last->next;
    if (head == last) 
    {
        // If there is only one node in the list
        free(head);
        last = NULL;
    } 
    else 
    {
        // More than one node in the list
        last->next = head->next;
        free(head);
    }
    return last;
}

struct Node* DeleteLastNode(struct Node* last) 
{
    if (last == NULL) 
    {
        // If the list is empty
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }

    Node_t * head = last->next;
    // If there is only one node in the list
    if (head == last) 
    {
        free(last);
        last = NULL;
        return last;
    }

    // Traverse the list to find the second last node
    Node_t * curr = head;
    while (curr->next != last) 
    {
        curr = curr->next;
    }

    // Update the second last node's next pointer to point to head
    curr->next = head;
    free(last);
    last = curr;

    return last;
}

struct Node* DeleteSpecificNode(struct Node* last, int key) 
{
    if (last == NULL) 
    {
        // If the list is empty
        printf("List is empty, nothing to delete.\n");
        return NULL;
    }

    Node_t * curr = last->next;
    Node_t * prev = last;

    // If the node to be deleted is the only node in the list
    if (curr == last && curr->data == key) 
    {
        free(curr);
        last = NULL;
        return last;
    }

    // If the node to be deleted is the first node
    if (curr->data == key) 
    {
        last->next = curr->next;
        free(curr);
        return last;
    }

    // Traverse the list to find the node to be deleted
    while (curr != last && curr->data != key) 
    {
        prev = curr;
        curr = curr->next;
    }

    // If the node to be deleted is found
    if (curr->data == key) 
    {
        prev->next = curr->next;
        if (curr == last) 
        {
            last = prev;
        }
        free(curr);
    } 
    else 
    {
        // If the node to be deleted is not found
        printf("Node with data %d not found.\n", key);
    }

    return last;
}

int search(struct Node *last, int key)
{
    if (last == NULL)
    {
        // If the list is empty
        return 0;
    }

    Node_t *head = last->next;
    Node_t *curr = head;

    // Traverse the list to find the key
    while (curr != last)
    {
        if (curr->data == key)
        {
            // Key found
            return 1;
        }
        curr = curr->next;
    }

    // Check the last node
    if (last->data == key)
    {
        // Key found
        return 1;
    }
    // Key not found
    return 0;
}


int main(void)
{
    Node_t * first = NULL;
    // Insert a node into the empty list
    first = InsertInEmptyList(first, 1);
    int result = 0;

    first->next = createNode(2);
    first->next->next = createNode(3);
    struct Node *last = first->next->next;
    last->next = first;
    last = InsertAtBeginning(last, 0);
    last = InsertEnd(last, 4);
    last = InsertAtPosition(last, 6, 6);
    last = InsertAtPosition(last, 5, 6);
    last = InsertAtPosition(last, -1, 1);
    // Print the list
    printf("List after insertion: \n");
    printList(last);
    last = DeleteFirstNode(last);
    last = DeleteLastNode(last);
    last = DeleteSpecificNode(last,4);
    printf("List after deletion: \n");
    printList(last);

    result = search(last, 5);
    if(result == 0)
    {
        printf("Key not found\n");
    }
    else
    {
        printf("Key found\n");
    }
    return 0;
}
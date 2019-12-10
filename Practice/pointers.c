
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

NODE *rootNode = NULL;

void addNode(int val)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = val;
    newNode->next = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    NODE *trav = rootNode;

    while (trav->next != NULL)
    {
        trav = trav->next;
    }
    trav->next = newNode;
}

void displayList()
{
    NODE *trav = rootNode;
    while (trav->next != NULL)
    {
        printf("%i, ", trav->value);
        trav = trav->next;
    }
    printf("%i\n", trav->value);
}

void freeList()
{
    // navigate to second to last item
    if (rootNode == NULL)
    {
        return;
    }

    while (true)
    {
        NODE *trav = rootNode;
        if (trav->next == NULL)
        {
            free(trav);
            rootNode = NULL;
            return;
        }
        while (trav->next->next != NULL)
        {
            trav = trav->next;
        }
        // found second to last node
        // printf("%i\n", trav->value);
        free(trav->next);
        trav->next = NULL;
    }
}

void freeNode(NODE *aNode)
{
    if (aNode->next == NULL)
    {
        free(aNode);
        return;
    }

    freeNode(aNode->next);
    free(aNode);
    return;
}

//return true or false
NODE *hasValue(int x)
{
    if (rootNode == NULL)
        return NULL;
    NODE *trav = rootNode;
    while (trav->next != NULL)
    {
        if (trav->value == x)
        {
            printf("Found %i\n", x);
            return trav;
        }
        trav = trav->next;
    }
    printf("Not Found\n");
    return NULL;
}

int main(void)
{
    // NODE rootNode;
    // rootNode.value = 5;
    // rootNode.next = NULL;
    // NODE secondNode;
    // secondNode.value = 10;
    // secondNode.next = NULL;
    // myNode.next = &secondNode;
    // printf("%i\n", secondNode.value);
    // printf("%i\n", myNode.next->value);
    addNode(5);
    addNode(8);
    addNode(9);
    addNode(4);
    displayList();
    NODE *temp;
    temp = hasValue(9); // should be true;
    temp = hasValue(7); // should be false;
    addNode(7);
    temp = hasValue(7); // should now be true;
    // printf("%i\n", rootNode->next->value);
    // printf("%i\n", rootNode->next->next->value);
    // printf("%i\n", rootNode->next->next->next->value);
    // rootnode.next->next->value
    // free(rootNode);
    // freeList();
    // // rootNode->next 0x1234
    // addNode(7);
    // addNode(2);
    // displayList();
    // freeList();
    // freeNode(rootNode);
    // rootNode = NULL;
    // for (int x = 1; x < 70000; x++)
    // {
    //   addNode(x);
    // }
    // displayList();
    // printf("hi");
    // freeList();
    freeNode(rootNode);
    // printf("done");
}

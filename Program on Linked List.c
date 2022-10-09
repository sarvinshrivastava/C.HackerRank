#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    int n, i, a, b;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    
    // Picking up case
    printf("Enter the case to be executed:\n");
    scanf("%d", &n);

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    switch(n){
        case 1:{
        printf("Enter the value:\n");
        scanf("%d", &i);
        head = insertAtFirst(head, i);
        break;
        }
        case 2:{
        printf("Enter the value:\n");
        scanf("%d", &i);
        printf("Enter the index:\n");
        scanf("%d", &b);
        head = insertAtIndex(head, i, b);
        break;
        }
        case 3:{
        printf("Enter the value:\n");
        scanf("%d", &i);
        head = insertAtEnd(head, i);
        break;
        }
        case 4:{
        printf("Enter the value:\n");
        scanf("%d", &i);
        printf("Enter the position:\n");
        scanf("%d", &a);
        switch(a){
            case 1:{
                head = insertAfterNode(head, head, i);
                break;
            }
            case 2:{
                head = insertAfterNode(head, second, i);
                break;
            }
            case 3:{
                head = insertAfterNode(head, third, i);
                break;
            }
            case 4:{
                head = insertAfterNode(head, fourth, i);
                break;
            }
            default:{
                printf("Enter valid position!");
                break;
            }
            }
            break;
        }
        default:{
            printf("Wrong Choice!\n");
            break;
        }
    }
    printf("\nLinked list after Changes\n");
    linkedListTraversal(head);
    return 0;
}
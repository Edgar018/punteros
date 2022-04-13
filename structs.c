#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    if (head == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    head->value = 1;
    head->next = malloc(sizeof(struct Node));
    head->next->value = 2;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->value = 3;
    
    printf("%p\n", head);
    printf("%d\n", head->value);
    printf("%p\n", head->next);
    printf("%d\n", head->next->value);
    printf("%p\n", head->next->next);
    printf("%d\n", head->next->next->value);

    free(head->next->next);
    free(head->next);
    free(head);
    return 0;
}
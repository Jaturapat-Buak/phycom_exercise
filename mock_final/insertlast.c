#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct DataNode{
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList{
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglySinglyLinklist();
void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);

DataNode *createDataNode(char *data){
    DataNode *newNode = (DataNode *)malloc(sizeof(DataNode));
    newNode->data = (char *)malloc(strlen(data)-1);
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

SinglyLinkedList *createSinglyLinkedList(){
    SinglyLinkedList *list = (SinglyLinkedList *)malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}

void traverse(SinglyLinkedList *list){
    if(list->head == NULL){
        printf("This is an empty list.\n");
        return;
    } else {
        DataNode *pointer = list->head;
        while(pointer->next != NULL){
            printf("%s -> ", pointer->data);
            pointer = pointer->next;
        }
        printf("%s", pointer->data);
    }
}

void insert_last(SinglyLinkedList *list, char *data){
    DataNode *pNew = createDataNode(data);
    if(list->head == NULL){
        list->head = pNew;
    } else{
        DataNode *pointer = list->head;
        while(pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            ;
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);

    // Remember to free allocated memory for each node's data
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}
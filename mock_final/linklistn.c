#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglyLinkedList();
void traverse(SinglyLinkedList *list);
void insert(SinglyLinkedList *list, char *data);
void insert_custom(SinglyLinkedList *list, char *data, int place);

SinglyLinkedList *createSinglyLinkedList() {
    SinglyLinkedList *new_list = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    new_list->count = 0;
    new_list->head = NULL;
    return new_list;
}

DataNode* createDataNode(char* data) {
  DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));
  
  newNode->data = (char*)malloc(strlen(data) + 1);
  strcpy(newNode->data, data);
  
  newNode->next = NULL;
  return newNode;
}

void traverse(SinglyLinkedList* list){
    if (list->count == 0){
        printf("This is empty list.\n");
        return;
    }
    struct DataNode *pointer = list->head;
    while (pointer->next != NULL){
        printf("%s ", pointer->data);
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

void insert(SinglyLinkedList *list, char *data){
    struct DataNode *pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *pointer = list->head;
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}

void insert_custom(SinglyLinkedList *list, char *data, int place){
    DataNode *pNew = createDataNode(data);

    if (place == 0){
        pNew->next = list->head;
        list->head = pNew;
        return;
    }
    DataNode *pointer = list->head;
    for (int i = 0; i < place - 1; i++){
        pointer = pointer->next;
    }
    pNew->next = pointer->next;
    pointer->next = pNew;
}

int main(){
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char num[100];
        scanf(" %s", num);
        insert(mylist, num);
    }
    char num[100];
    int place;
    scanf(" %d %s", &place, num);
    insert_custom(mylist, num, place);
    traverse(mylist);
}
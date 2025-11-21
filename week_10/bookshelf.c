#include <stdio.h>
#include <string.h>

int main() {
    struct Book {
        char id[10];
        char name[100];
        char author[100];
    };

    struct Book temp = {"null", "null", "null"};
    int amount;
    char id[10];

    scanf("%d\n%s", &amount, id);

    for(int i = 0; i < amount; i++) {
        struct Book book;
        scanf(" %s %s %s", book.id, book.name, book.author);
        if(strcmp(book.id, id) == 0){
            strcpy(temp.id, book.id);
            strcpy(temp.name, book.name);
            strcpy(temp.author, book.author);
        }
    }
    if (strcmp(temp.id, "null") == 0){
        printf("Not Found");
    }
    else {
        printf("%s %s %s", temp.id, temp.name, temp.author);
    }
}
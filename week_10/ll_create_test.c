#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
}DataNode; //ประกาศ DataNode เป็น Struct

DataNode* createDataNode(char* data);   //ประกาศFunction createDataNode

//สร้างฟังก์ชัน createDataNode
DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));    //จองพื้นที่ทั้ง Node
    newNode->data = (char*)malloc(strlen(data) + 1);    //จองพื้นที่ทั้ง data ใน Node
    strcpy(newNode->data, data);   //ใส่ data ลงใน Node
    newNode->next = NULL;
    return newNode;   //คืนค่า Node
}

int main() {
    char data[101];
    scanf("%[^\n]s", data);
 
    // Create a new DataNode
    DataNode* pNew = createDataNode(data);
 
    // Print the data and next pointer
    printf("%s\n", pNew->data);
    printf("%p\n", (void*)pNew->next);
 
    // Free allocated memory for data
    free(pNew->data);
    free(pNew);
    return 0;
}
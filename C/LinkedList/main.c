#include <stdio.h>
#include "LinkedList.h"

int main() {
    LinkedList list, *pList = &list;
    initList(pList);
    for(int i = 0; i < 100; i++)
    {
        listInsert(list, i, i);
    }
    int len = getLength(list);
    printf("length = %d\n", len);
    for(int i = len; i > 0; i--)
    {
        printf("elem%d = %.2f\n", i - 1, getElem(list, i - 1));
        listDelete(list, i - 1);
    }
    printf("length = %d\n", getLength(list));
    destroyList(list);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    char character;
    node *next;
}node;

typedef node *Linklist;

Linklist build_t(int n){
    node *head = new(node);
    head->next = NULL;
    node *p = head;
    for (int i = 0; i < n; i++){
        p->next = new(node);
        p->next->character = 'a' + i;
        p = p->next;
    }
    p->next = NULL;

    return head;
}



int main(){
    



}
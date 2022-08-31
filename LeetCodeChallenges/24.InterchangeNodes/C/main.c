#include <stdio.h>
#include <stdlib.h>

//Defining a node
typedef struct LinkedListNode {
  int val;
  struct LinkedListNode *next;
} LinkedListNode;

void insert_at_end(int, LinkedListNode **);
LinkedListNode *interchange(LinkedListNode *);
LinkedListNode *change_last(int, LinkedListNode **);
void print(LinkedListNode *, int);

int main() {
  LinkedListNode *LinkedList = NULL;
  insert_at_end(1, &LinkedList);
  insert_at_end(2, &LinkedList);
  insert_at_end(8, &LinkedList);
  print(LinkedList, 1);

  // LinkedList = interchange(LinkedList);
  // print(LinkedList, 2);

  return 0;
}

LinkedListNode *interchange(LinkedListNode *head){
  LinkedListNode *p1 = head;
  LinkedListNode *p2 = head->next;

  if(head == NULL || head->next == NULL)
    return head;

  head = p2; 
  while(p1 != NULL || p2 != NULL){
    LinkedListNode *temp = p2->next;
    p1->next = temp;
    p2->next = p1;

    printf("%d\n", p1); 

    p1 = p1->next;
    p2 = p2->next;
    printf("%d\n", p1); 
    puts("in the loop");
  return head;
  }
  puts("outside the loop");
}

void insert_at_end(int value, LinkedListNode **head) {
  LinkedListNode *temp = (LinkedListNode *)malloc(sizeof(LinkedListNode));
  temp->val = value;
  temp->next = NULL;
  if (*head == NULL) {
    *head = temp;
    return;
  }

  LinkedListNode *pointer = *head;
  while (pointer->next != NULL) {
    pointer = pointer->next;
  }
  pointer->next = temp;
  return;
}

void print(LinkedListNode *head, int val) {
  LinkedListNode *temp = head;
  printf("List %d is:\n", val);
  while (temp != NULL) {
    printf("%d →  ", temp->val);
    temp = temp->next;
  }
  puts("null");
}
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
  int val;
  struct ListNode *next;
} ListNode;

ListNode *insert_at_end(int, ListNode **);
ListNode *interchange(ListNode *);
ListNode *change_last(int, ListNode **);
void print(ListNode *, int);

int main() {
  ListNode *LinkedList = NULL;
  LinkedList = insert_at_end(1, &LinkedList);
  LinkedList = insert_at_end(2, &LinkedList);
  //LinkedList = insert_at_end(4, &LinkedList);
  //LinkedList = insert_at_end(3, &LinkedList);
  //LinkedList = insert_at_end(7, &LinkedList);
  //LinkedList = insert_at_end(8, &LinkedList);
  print(LinkedList, 1);

  LinkedList = interchange(LinkedList);
  print(LinkedList, 2);

  return 0;
}

ListNode *interchange(ListNode *head){
  ListNode *p1 = head;
  ListNode *p2 = head->next;

  if(head == NULL || head->next == NULL)
    return head;

  head = p2; 
  while(p1 != NULL || p2 != NULL){
    ListNode *temp = p2->next;
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

ListNode *insert_at_end(int value, ListNode **head) {
  ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
  temp->val = value;
  temp->next = NULL;
  if (*head == NULL) {
    *head = temp;
    return *head;
  }

  ListNode *pointer = *head;
  while (pointer->next != NULL) {
    pointer = pointer->next;
  }
  pointer->next = temp;
  return *head;
}

void print(ListNode *head, int val) {
  ListNode *temp = head;
  printf("List %d is:\n", val);
  while (temp != NULL) {
    printf("%d →  ", temp->val);
    temp = temp->next;
  }
  puts("null");
}
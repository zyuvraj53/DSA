#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
  int val;
  struct ListNode *next;
} ListNode;

ListNode *insert_at_end(int, ListNode **);
ListNode *add_linked_list(ListNode *, ListNode *, ListNode **);
ListNode *change_last(int, ListNode **);
void print(ListNode *, int);

int main() {
  ListNode *List1 = NULL;
  List1 = insert_at_end(9, &List1);
  List1 = insert_at_end(9, &List1);
  List1 = insert_at_end(9, &List1);
  List1 = insert_at_end(9, &List1);
  List1 = insert_at_end(9, &List1);
  List1 = insert_at_end(9, &List1);
  print(List1, 1);

  ListNode *List2 = NULL;
  List2 = insert_at_end(9, &List2);
  List2 = insert_at_end(9, &List2);
  List2 = insert_at_end(9, &List2);
  List2 = insert_at_end(4, &List2);
  print(List2, 2);

  ListNode *summed_list = NULL;
  summed_list = add_linked_list(List1, List2, &summed_list);
  print(summed_list, 3);

  free(List1);
  free(List2);
  free(summed_list);

  return 0;
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

ListNode *add_linked_list(ListNode *list1, ListNode *list2, ListNode **head) {
  ListNode *pointer_first = list1;
  ListNode *pointer_second = list2;

  ListNode *nextPointer = NULL;

  int carry = 0;
  while (pointer_first != NULL || pointer_second != NULL) {
    int num1 = 0;
    int num2 = 0;
    if (pointer_first != NULL) {
      num1 = pointer_first->val;
      pointer_first = pointer_first->next;
    }

    if (pointer_second != NULL) {
      num2 = pointer_second->val;
      pointer_second = pointer_second->next;
    }

    int num = num1 + num2 + carry;

    int right = num % 10;
    carry = num / 10;

    *head = insert_at_end(right, head);
  }

  if (carry > 0) {
    *head = insert_at_end(carry, head);
  }

  return *head;
}

ListNode *change_last(int data, ListNode **head) {
  ListNode *temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->val += data;

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
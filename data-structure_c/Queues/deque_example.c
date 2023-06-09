/*

  ** Deque Data Structures

  Deque or Double Ended Queue is a type of queue in which insertion and removal of elements can either be performed from the front or the rear. Thus, it does not follow FIFO rule (First In First Out).

  ** Types of Deque

   * Input Restricted Deque
    In this deque, input is restricted at a single end but allows deletion at both the ends.
   * Output Restricted Deque
    In this deque, output is restricted at a single end but allows insertion at both the ends.

   ** Time Complexity

    The time complexity of all the above operations is constant i.e. O(1).
   
   **Applications of Deque Data Structure

    * In undo operations on software.
    * To store history in browsers.
    * For implementing both stacks and queues.

*/

#include <stdio.h>

#define MAX 10

void addFront(int *, int, int *, int *);
void addRear(int *, int, int *, int *);
int delFront(int *, int *, int *);
int delRear(int *, int *, int *);
void display(int *);
int count(int *);

int main() {
  int arr[MAX];
  int front, rear, i, n;

  front = rear = -1;
  for (i = 0; i < MAX; i++)
    arr[i] = 0;

  addRear(arr, 5, &front, &rear);
  addFront(arr, 12, &front, &rear);
  addRear(arr, 11, &front, &rear);
  addFront(arr, 5, &front, &rear);
  addRear(arr, 6, &front, &rear);
  addFront(arr, 8, &front, &rear);

  printf("\nElements in a deque: \n");
  display(arr);

  i = delFront(arr, &front, &rear);
  printf("\nremoved item: %d\n", i);

  printf("\nElements in a deque after deletion: \n");
  display(arr);

  addRear(arr, 16, &front, &rear);
  addRear(arr, 7, &front, &rear);

  printf("\nElements in a deque after addition: \n");
  display(arr);

  i = delRear(arr, &front, &rear);
  printf("\nremoved item: %d\n", i);

  printf("\nElements in a deque after deletion: \n");
  display(arr);

  n = count(arr);
  printf("\nTotal number of elements in deque: %d\n", n);
}

void addFront(int *arr, int item, int *pfront, int *prear) {
  int i, k, c;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque is full.\n");
    return;
  }

  if (*pfront == -1) {
    *pfront = *prear = 0;
    arr[*pfront] = item;
    return;
  }

  if (*prear != MAX - 1) {
    c = count(arr);
    k = *prear + 1;
    for (i = 1; i <= c; i++) {
      arr[k] = arr[k - 1];
      k--;
    }
    arr[k] = item;
    *pfront = k;
    (*prear)++;
  } else {
    (*pfront)--;
    arr[*pfront] = item;
  }
}

void addRear(int *arr, int item, int *pfront, int *prear) {
  int i, k;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque is full.\n");
    return;
  }

  if (*pfront == -1) {
    *prear = *pfront = 0;
    arr[*prear] = item;
    return;
  }

  if (*prear == MAX - 1) {
    k = *pfront - 1;
    for (i = *pfront - 1; i < *prear; i++) {
      k = i;
      if (k == MAX - 1)
        arr[k] = 0;
      else
        arr[k] = arr[i + 1];
    }
    (*prear)--;
    (*pfront)--;
  }
  (*prear)++;
  arr[*prear] = item;
}

int delFront(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*pfront];
  arr[*pfront] = 0;

  if (*pfront == *prear)
    *pfront = *prear = -1;
  else
    (*pfront)++;

  return item;
}

int delRear(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*prear];
  arr[*prear] = 0;
  (*prear)--;
  if (*prear == -1)
    *pfront = -1;
  return item;
}

void display(int *arr) {
  int i;

  printf("\n front:  \n");
  for (i = 0; i < MAX; i++)
    printf("  %d", arr[i]);
  printf("  :rear\n");
}

int count(int *arr) {
  int c = 0, i;

  for (i = 0; i < MAX; i++) {
    if (arr[i] != 0)
      c++;
  }
  return c;
}
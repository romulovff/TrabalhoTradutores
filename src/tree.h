#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  char *value;
  struct node *left;
  struct node *middle0;
  struct node *middle1;
  struct node *middle2;
  struct node *middle3;
  struct node *middle4;
  struct node *middle5;
  struct node *right;
}Node;

Node* create_node0(char *value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;

  return node;
}

Node* create_node1(char *value, Node* left) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;

  return node;
}

Node* create_node2(char *value, Node* left, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> right = right;

  return node;
}

Node* create_node3(char *value, Node* left, Node* middle0, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> right = right;

  return node;
}

Node* create_node4(char *value, Node* left, Node* middle0, Node* middle1, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> right = right;

  return node;
}

Node* create_node5(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> right = right;

  return node;
}

Node* create_node6(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2, Node* middle3, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> middle3 = middle3;
  node -> right = right;

  return node;
}

Node* create_node7(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2, Node* middle3, Node* middle4, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> middle3 = middle3;
  node -> middle4 = middle4;
  node -> right = right;

  return node;
}

Node* create_node8(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2, Node* middle3, Node* middle4, Node* middle5, Node* right) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> middle3 = middle3;
  node -> middle4 = middle4;
  node -> middle5 = middle5;
  node -> right = right;

  return node;
}

// void print_tree(Node *node) {

//   if(node == NULL)
//     return;
  
//   printf("%s\n", node -> value);
  
//   print_tree(node -> left);
//   print_tree(node -> middle);
//   print_tree(node -> right);

// }
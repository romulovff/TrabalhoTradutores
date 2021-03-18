#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int integer;
  float decimal;
  char character;
  char *value;
  struct node *left;
  struct node *middle0;
  struct node *middle1;
  struct node *middle2;
  struct node *right;
}Node;

Node* create_node0(char *value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_int(int value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> integer = value;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_dec(float value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> decimal = value;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_char(char value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> character = value;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node1(char *value, Node* left) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node2(char *value, Node* left, Node* middle0) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node3(char *value, Node* left, Node* middle0, Node* middle1) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node4(char *value, Node* left, Node* middle0, Node* middle1, Node* middle2) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> left = left;
  node -> middle0 = middle0;
  node -> middle1 = middle1;
  node -> middle2 = middle2;
  node -> right = NULL;

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

void print_tree(Node *node) {

  if(node == NULL)
    return;
  
  printf("%s\n", node -> value);
  
  print_tree(node -> left);
  print_tree(node -> middle0);
  print_tree(node -> middle1);
  print_tree(node -> middle2);
  print_tree(node -> right);

  free(node);

}
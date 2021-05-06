#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int integer;
  float decimal;
  char character;
  char *value;
  char type;
  bool terminal;
  char returnType;
  char *saved;
  struct node *left;
  struct node *middle0;
  struct node *middle1;
  struct node *middle2;
  struct node *right;
}Node;

int depth = 0;

Node* create_node_empty() {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = NULL;
  node -> type = 'e';
  node -> returnType = 'x';
  node -> terminal = true;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_string(char *value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = 's';
  node -> returnType = 'x';
  node -> terminal = true;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_int(int value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> integer = value;
  node -> type = type;
  node -> returnType = 'x';
  node -> terminal = true;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_dec(float value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> decimal = value;
  node -> type = type;
  node -> returnType = 'x';
  node -> terminal = true;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0_char(char *value, char type) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = type;
  node -> returnType = 'x';
  node -> terminal = true;
  node -> left = NULL;
  node -> middle0 = NULL;
  node -> middle1 = NULL;
  node -> middle2 = NULL;
  node -> right = NULL;

  return node;
}

Node* create_node0(char *value) {
  Node *node = (Node *)calloc(1, sizeof(Node));

  node -> value = value;
  node -> type = '\0';
  node -> returnType = 'x';
  node -> terminal = true;
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
  node -> type = '\0';
  node -> returnType = 'x';
  node -> terminal = false;
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
  node -> type = '\0';
  node -> returnType = 'x';
  node -> terminal = false;
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
  node -> type = '\0';
  node -> returnType = 'x';
  node -> terminal = false;
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
  node -> type = '\0';
  node -> returnType = 'x';
  node -> terminal = false;
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
  node -> type = '\0';
  node -> returnType = 'x';
  node -> terminal = false;
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

  if(!(node -> terminal)) {
    for (int i = 0; i < depth; i++){
      printf("\t");
    }
    printf("%s --------> %c\n", node -> value, node -> type);
  } else {
    if(node -> type == 's'){
      for (int i = 0; i < depth; i++){
        printf("\t");
      }
      printf("%s\n", node -> value);
    } else if(node -> type == 'i'){
      for (int i = 0; i < depth; i++){
        printf("\t");
      }
      printf("%d\n", node -> integer);
    }else if(node -> type == 'f'){
      for (int i = 0; i < depth; i++){
        printf("\t");
      }
      printf("%f\n", node -> decimal);
    }else if(node -> type == 'c'){
      for (int i = 0; i < depth; i++){
        printf("\t");
      }
      printf("%s\n", node -> value);
    } else {
      for (int i = 0; i < depth; i++){
        printf("\t");
      }
      printf("%s\n", node -> value);
    }
  }

  depth++;

  print_tree(node -> left);
  print_tree(node -> middle0);
  print_tree(node -> middle1);
  print_tree(node -> middle2);
  print_tree(node -> right);

  depth--;

  free(node);

}

void free_tree(Node *node) {

  if(node == NULL)
    return;

  free_tree(node -> left);
  free_tree(node -> middle0);
  free_tree(node -> middle1);
  free_tree(node -> middle2);
  free_tree(node -> right);

  free(node);

}

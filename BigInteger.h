#ifndef BIGINTEGER_H
#define BIGINTEGER_H

struct BigInteger initialize(char* str);
void display(struct BigInteger a);
struct BigInteger add(struct BigInteger a, struct BigInteger b);
struct BigInteger sub(struct BigInteger a, struct BigInteger b);
struct BigInteger mul(struct BigInteger a, struct BigInteger b);
struct BigInteger div1(struct BigInteger a, struct BigInteger b);
void displayHelper(struct Node * head)
void appendAtFirst(struct Node **mul)
struct Node *mulTwoNumOneDigit(struct Node *num1, struct Node *last2)
struct Node* create_node(int data)

#endif
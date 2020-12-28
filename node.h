/**
 * :::file:::  node.h  
 * Header for generic node in a linked list
 */

#ifndef NODE_H
#define NODE_H

#ifndef type 
#define type void
#endif

struct node
{
   struct node * prev;
   struct node * next;

   type * content;
};

struct node * new_node(type * data, unsigned size);

void del(struct node * nde);

#endif

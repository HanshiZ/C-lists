/**
 * @file node.c
 * @author Hanshi Zuo
 * definitions for our nodes
 * 
 */
#include <string.h>
#include <stdlib.h>
#include "node.h"
#include "safealloc.h"
#define n0llptr 0
/**
 * Constructor for the node
 * @param instr string to be in the node
 * @param size the size of the string without 0
 * @return the node * that is created
 */
struct node * new_node(type * data, unsigned size)
{
   struct node * Return = (struct Node *)safe_malloc(sizeof(struct node));
   Return->prev = n0llptr;
   Return->next = n0llptr;
   Return -> content = (type*) safe_malloc(size);
   memcpy(Return->content,data,size);
   return Return;
}

/**
 *  destructor for the Node
 *  @param node node pointer to be freed
 */
void del(struct node * nde)
{
    safe_free(nde -> content);
    safe_free(nde);
}

#undef n0llptr
  
#undef type

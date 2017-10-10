/****************************************************************************************************
*
* This is a program that receives a file as an input with a prefix table. That table is represented 
* by a prefix tree.
* Users can perform many tasks, such as: 
* 		- printing the prefix table to the screen;
*		- inserting a new prefix and the associated next-hop;
*		- looking for the next-hop of an address;
*		- deleting a prefix from the tree.
*
* Authors: Manuel Reis (81074)
*		   Catarina Aleixo (81731)
*
*****************************************************************************************************/

#include "prefixTree.h"

int main(int argc, char const *argv[])
{
	char const * file = argv[argc-1]; /* Last argument is the file with the prefix table */
	Node *root = PrefixTree(file); 
	BNode *broot = newBNode(getValue(root));
	if(root != NULL)	
		menu(root, broot);
	

	//freeEvenTREE
	freeTree(root);
	return 0;
}

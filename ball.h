#ifndef ball_h
#define ball_h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct circular{
	char name[200];
	struct circular* next;
};

typedef struct circular* cll;

cll create_node(char a[]);
cll create(char a[]);
int append(cll head ,char a[]);
int randomizer();
cll gameplay(cll head);
cll delete_cll(cll head,char a[]);

#endif

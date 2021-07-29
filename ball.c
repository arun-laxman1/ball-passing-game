#include"ball.h"

cll create_node(char a[])
{
	cll temp;
	temp=(cll)malloc(sizeof(struct circular));
	strcpy(temp->name,a);
	return temp;
}

cll create(char a[])
{
	cll newnode;
	newnode=create_node(a);
	newnode -> next = newnode;
	return newnode;
}

int append(cll head ,char a[])
{
	cll newnode,temp=head;
	newnode=create_node(a);
	while(temp -> next != head)
		temp = temp -> next;
	temp -> next = newnode;
	newnode -> next = head;
	return 1;
}

cll delete_cll(cll head, char a[]) 
{ 
    if (head == NULL) 
        return;  
    cll curr=head,prev; 
    while (strcmp(curr->name,a)!=0) 
	{ 
        if (curr->next == head) 
		{  
            break; 
        } 
        prev = curr; 
        curr = curr->next; 
    }  
    if (curr == head) 
	{ 
        prev = head; 
        while (prev->next != head) 
            prev = prev->next; 
        head = curr->next; 
        prev->next = head; 
        free(curr); 
        return head;
    }  
    else if (curr->next == head) 
	{ 
        prev->next = head; 
        free(curr);
		return head; 
    } 
    else 
	{ 
        prev->next = curr->next; 
        free(curr); 
        return head;
    } 
} 
int randomizer()
{
	srand(time(0));
	return(rand()%15);
}

cll gameplay(cll head)
{
	cll temp;
	char p_name[200];
	int i,n;
	temp = head;
	n=randomizer();
	for(i=0;i<n;i++)
	{
		temp=temp->next;
	}
	strcpy(p_name,temp->name);
	printf("\n%s IS OUT OF THE GAME!!\n",p_name);
	temp=delete_cll(head,p_name);
	return temp;
}

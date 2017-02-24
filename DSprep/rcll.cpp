//reversing a doubly linked list
void reverse(struct node **head_ref)
{
	struct node *temp=NULL;
	struct node *current=*head_ref;
	while(current!=NULL)
	{
		temp=current->prev;
		current->prev=current->next;
		current->next=temp;
		current=current->prev;
	}
	if(temp!=NULL)
		*head_ref=temp->prev;
}
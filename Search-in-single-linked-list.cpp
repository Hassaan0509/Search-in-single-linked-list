bool list::search(int value)
{
	node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == value)
		{
			cout << "\nFound\n";
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}
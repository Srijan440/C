
    }
}

void printlinklist(struct node *head)
{
    struct node *temp = head;
    while (temp != head)
    {
        printf("%d",temp ->data);
        temp = temp -> next;
    }
}

int main()
{
    int n,data;
    struct node *head= NULL;
    printf("Enter the number of node: ");
    scanf("%d",&n);
    for (int i = 0;i<n; i++)
    {
        printf("Enter the data of node %d:",i);
        scanf("%d",&data);
        head= sorted(head,data);
    }
    printlinklist(head);
}
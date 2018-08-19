
/***************************************************
单链表 :

在顺序数组中插入元素

***************************************************/


// #include <stdio.h>
// #include <stdlib.h>

// struct Node 
// {
// 	int value;
// 	struct Node *next;
// };

// void insertNode(struct Node **head, int value)
// {
// 	struct Node *previous;
// 	struct Node *current;
// 	struct Node *new;

// 	current = *head;
// 	previous = NULL;

// 	while(current != NULL && current->value < value)
// 	{
// 		previous = current;
// 		current = current->next;
// 	}

// 	new = (struct Node *)malloc(sizeof(struct Node));

// 	if (new == NULL)
// 	{
// 		printf("内存分配失败！！！！\n");
// 		exit(1);
// 	}

// 	new->value = value;
// 	new->next = current;

// 	if (previous == NULL)
// 	{
// 		*head = new;
// 	}
// 	else
// 	{
// 		previous->next = new;
// 	}
// }

// void printNode(struct Node *head)
// {
// 	struct Node *current;
// 	current = head;
// 	while(current != NULL)
// 	{
// 		printf("%d ", current->value);
// 		current = current->next;
// 	}
// 	putchar('\n');
// }

// int main(int argc, char const *argv[])
// {
// 	struct Node *head = NULL;
// 	int input;

// 	while(1)
// 	{
// 		printf("请输入一个整数（输入-1表示结束): ");
// 		scanf("%d", &input);
// 		if (input == -1)
// 		{
// 			break;
// 		}
// 		insertNode(&head, input);
// 		printNode(head);
// 	}

// 	return 0;
// }




/***************************************************
单链表 :

在顺序数组中删除元素

***************************************************/


#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int value;
	struct Node *next;
};

void insertNode(struct Node **head, int value)
{
	struct Node *previous;
	struct Node *current;
	struct Node *new;

	current = *head;
	previous = NULL;

	while(current != NULL && current->value < value)
	{
		previous = current;
		current = current->next;
	}

	new = (struct Node *)malloc(sizeof(struct Node));

	if (new == NULL)
	{
		printf("内存分配失败！！！！\n");
		exit(1);
	}

	new->value = value;
	new->next = current;

	if (previous == NULL)
	{
		*head = new;
	}
	else
	{
		previous->next = new;
	}
}

void printNode(struct Node *head)
{
	struct Node *current;
	current = head;
	while(current != NULL)
	{
		printf("%d ", current->value);
		current = current->next;
	}
	putchar('\n');
}

void delettNode(struct Node **head, int value)
{
	struct Node *previous;
	struct Node *current;

	current = *head;
	previous = NULL;

	while(current != NULL && current->value != value)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		printf("找不到匹配的节点！！！\n");
		return;
	}
	else
	{
		if (previous == NULL)
		{
			*head = current->next;
		}
		else
		{
			previous->next = current->next;
		}

		free(current);


	}

}

int main(int argc, char const *argv[])
{
	struct Node *head = NULL;
	int input;

	printf("开始测试插入整数....\n");
	while(1)
	{
		printf("请输入一个整数（输入-1表示结束): ");
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}
		insertNode(&head, input);
		printNode(head);
	}

	putchar('\n');
	printf("开始测试删除整数....\n");
	putchar('\n');

	while(1)
	{
		printf("请输入一个整数（输入-1表示结束): ");
		scanf("%d", &input);
		if (input == -1)
		{
			break;
		}
		delettNode(&head, input);
		printNode(head);
	}

	return 0;
}
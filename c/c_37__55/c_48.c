#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Contacts
{
	char name[40];
	char num[40];
	struct Contacts *next;
};

void getInput(struct Contacts *person)
{
	printf("请输入姓名：\n");
	scanf("%s", person->name);
	printf("请输入电话：\n");
	scanf("%s", person->num);
}

void addPerson(struct Contacts **people)
{
	struct Contacts *p;

	static struct Contacts *tail;//定义一个tail指针指向链表的末尾

	p = (struct Contacts *)malloc(sizeof(struct Contacts));

	getInput(p);

	if (*people != NULL)
	{
		tail->next = p;
		p->next = NULL;
	}
	else
	{
		*people = p;
		p->next = NULL;
	}

	tail = p;

}

void displaynum(struct Contacts *num)
{
	printf("您所查询的联系人的电话号码为：%s\n", num->num);
}

struct Contacts *findPerson(struct Contacts *people, char *name)
{
	struct Contacts *p;
	p = people;

	if (p == NULL)
	{
		printf("通讯录为空，请先添加一个联系人！！！\n");
		return NULL;
	}
	else
	{
		while(1)
		{
			if(!strcmp(p->name, name))
			{
				printf("已找到！！\n");
				return p;
			}
			else
			{
				printf("找不到！！！\n");
				return NULL;
			}

		}
	}

}

void changePerson(struct Contacts *people, char *name)
{
	struct Contacts *p;
	p = people;

	findPerson(p, name);//先找这个人是否存在

	//printf("请输入修改后的电话号码\n");
	//scanf("%s", p->num);

	displaynum(p);

}

void displayContacts(struct Contacts *people)
{
	struct Contacts *p;
	p = people;
	int count = 0;

	while(1)
	{
		if (p == NULL)
		{
			printf("通讯录为空，请先添加一个联系人！！！\n");
			break;
		}
		else
		{
			printf("用户 %d\n", count+1);
			printf("姓名： %s\n", (p)->name);
			printf("电话号码： %s\n", (p)->num);
			putchar('\n');
		}
		p = p->next;
		count++;

	}
}

int main(int argc, char const *argv[])
{
	struct Contacts *head = NULL;
	char ch;

	printf("================欢迎进入通讯录管理程序==================\n");
	printf("1.插入新的联系人\n");
	printf("2.查找已有联系人\n");
	printf("3.更改已有联系人\n");
	printf("4.删除已有联系人\n");
	printf("5.现实当前联系人\n");	
	printf("6.退出通讯录程序\n");
	printf("======================================================\n");

	putchar('\n');

	while(1)
	{
		printf("请输入所选功能（1 2 3 4 5 6）\n");
		do
		{
			ch = getchar();
		}while(ch != '1' && ch != '2' && ch != '3' && ch != '4' && ch != '5' && ch != '6');

		if (ch == '1')
		{
			addPerson(&head);
		}

		if (ch == '2')
		{
			char name[40];
			struct Contacts *p;

			printf("请输入想要查找人的名字\n");
			scanf("%s", name);
			p = findPerson(head, name);
			
			displaynum(p);
		}

		if (ch == '3')
		{
			char name[40];
			printf("请输入想要修改的联系人的名字\n");
			scanf("%s", name);
			changePerson(head, name);
		}

		if (ch == '4')
		{
			;
		}

		if (ch == '5')
		{
			displayContacts(head);
		}

		if (ch == '6')
		{
			exit(1);
		}

	}

	return 0;
}
// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
}
void proga6(Node* head)
{
	Node* curnode = head;
	while (curnode->next != nullptr)
	{
		cout«curnode->number«" ";
		curnode = curnode->next;
	}
	cout<<curnode->number«" ";
	cout<<endl;
	cout<<curnode->number«" ";
	while (curnode->prev != nullptr)
	{
		curnode = curnode->prev;
		cout<<curnode->number«" ";

	}

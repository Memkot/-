// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
void zadacha7(Node* head, Node* el, int nomer)
{
	Node* curnode = head;

	for (int i = 0; i < nomer; ++i) {
		curnode = curnode->next;
	}
	el->next = curnode->next;
	el->prev = curnode;
	curnode->next->prev = el;
	curnode->next = el;
}

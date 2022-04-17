#include <iostream>
#include "Header.h"
using namespace std;

int countTree(tnode* tree, char x, int count) {
	if (tree != NULL) { //Пока не встретится пустой узел
		count = countTree(tree->left, x, count); //Рекурсивная функция для левого поддерева
		count = countTree(tree->right, x, count); //Рекурсивная функция для правого поддерева
		if (tree->field == x) {
			count++;
		};
		if (count == 2) {
			return count;
		};
	}
	return count;
};

struct tnode* addnode(tnode* tree, char x) {
	if (tree == NULL) { // Если дерева нет, то формируем корень
		tree = new tnode; // память под узел
		tree->field = x;   // поле данных
		tree->left = NULL;
		tree->right = NULL; // ветви инициализируем пустотой
	}
	else  if (x < tree->field)   // условие добавление левого потомка
		tree->left = addnode(tree->left, x);
	else    // условие добавление правого потомка
		tree->right = addnode(tree->right, x);
	return(tree);
}
#include <iostream>
#include <fstream>
#include "Header.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	ifstream fin("tree.txt");
	char inChar;
	char charArr[N];
	int lengthArr = 0;

	struct tnode* myTree = NULL; //Создание дерева

	for (int i = 0; (!(fin.eof())); i++) {
		inChar = NULL;
		fin >> inChar;
		if (inChar != NULL) {
			charArr[i] = inChar;
			myTree = addnode(myTree, inChar);
			lengthArr++;
		}
	}
	
	int c = 0;
	for (int i = 0; i < lengthArr; i++) {
		if (countTree(myTree, charArr[i], 0) > 1) {
			c++;
		}
	}
	if (c > 0) cout << "В дереве есть хотя бы два одинаковых элемента";
	else cout << "В дереве нет одинаковых элементов";

	return 0;
}
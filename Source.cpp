#include <iostream>
#include "Header.h"
using namespace std;

int countTree(tnode* tree, char x, int count) {
	if (tree != NULL) { //���� �� ���������� ������ ����
		count = countTree(tree->left, x, count); //����������� ������� ��� ������ ���������
		count = countTree(tree->right, x, count); //����������� ������� ��� ������� ���������
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
	if (tree == NULL) { // ���� ������ ���, �� ��������� ������
		tree = new tnode; // ������ ��� ����
		tree->field = x;   // ���� ������
		tree->left = NULL;
		tree->right = NULL; // ����� �������������� ��������
	}
	else  if (x < tree->field)   // ������� ���������� ������ �������
		tree->left = addnode(tree->left, x);
	else    // ������� ���������� ������� �������
		tree->right = addnode(tree->right, x);
	return(tree);
}
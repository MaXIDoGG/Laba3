#include <iostream>
using namespace std;

const int N = 20; //������ �������

struct tnode {
	char field;           // ���� ������
	struct tnode* left;  // ����� �������
	struct tnode* right; // ������ �������
};

int countTree(tnode* tree, char x, int count);
struct tnode* addnode(tnode* tree, char x);
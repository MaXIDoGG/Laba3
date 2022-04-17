#include <iostream>
using namespace std;

const int N = 20; //размер массива

struct tnode {
	char field;           // поле данных
	struct tnode* left;  // левый потомок
	struct tnode* right; // правый потомок
};

int countTree(tnode* tree, char x, int count);
struct tnode* addnode(tnode* tree, char x);
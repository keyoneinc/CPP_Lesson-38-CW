#include <iostream>
#include "BinTree.h"

int main() {
    
	BinTree::Tree<int> bin;
	bin.insert(55);
	bin.insert(11);
	bin.insert(19);
	bin.insert(666);
	bin.insert(999);
	bin.insert(777);
	bin.insert(34);
	bin.insert(76);
	bin.insert(77);

	cout << endl;

	auto res1 = bin.search(11);
	if (res1 == nullptr) {
		cout << 11 << "Not found\n";
	}
	else {
		res1->showNode();
	}

	auto res2 = bin.search(-11);
	if (res2 == nullptr) {
		cout << -11 << "Not found\n";
	}
	else {
		res1->showNode();
	}


}
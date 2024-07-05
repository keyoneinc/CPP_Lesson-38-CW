#pragma once
#include <iostream>
using namespace std;

namespace BinTree {
	template <typename T>
	class Node {
	public:
		T info;
		Node* left;
		Node* right;

		Node(T value) {
			info = value;
			left = right = nullptr;
		}

		void showNode() {
			cout << "INFO: " << info << endl;
			cout << "\tLeft: " << left << endl;
			cout << "\tRight: " << right << endl << endl;
		}
	};

	template <typename U>
	class Tree {
		Node<U>* root;
	public:
		Tree() {
			root = nullptr;
		}
		~Tree() {

		}

		void insert(U value) {
			Node<U>* el = new Node<U>(value);

			if (root == nullptr) {
				root = el;
			}
			else {
				Node<U>* p = root;
				Node<U>* place = root;
				//Шукаємо місце для створеного вузла
				while (p != nullptr)
				{
					/*if (el->info < p->info)
						p = p->left;
					else
						p = p->right;*/

					place = p;
					p = (el->info < p->info) ? p->left : p->right;
				}

				//Привязка нового вузла
				if (el->info < place->info)
					place->left = el;
				else
					place->right = el;
			}
		}
	};


}
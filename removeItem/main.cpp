#include <iostream>

using namespace std;

struct Node {

	int value;
	Node* next;

	Node() : next(nullptr) {}
	Node(int value) : next(nullptr), value(value) {}

};

class List {

	public:	
		Node* head;
	
		void removeItem(int);
		void display();

		List() : head(nullptr) {}
		List(Node* head) : head(head) {}

};

void List::display() {

	for (Node* curr = this->head; curr != nullptr; curr = curr->next) {

		cout << curr->value << " ";
	}

	cout << endl;

}

void List::removeItem(int value) {

	if (this->head == nullptr) {

		return;
	}

	Node* prev = this->head;
	Node* curr = prev->next;

	while (prev == this->head && prev->value == value) {

		Node* tmp = prev;
		this->head = tmp->next;

		prev = this->head;
		curr = prev->next;

		delete tmp;

	}

	while (curr != nullptr) {

		if (curr->value == value) {

			Node* tmp = curr;

			prev->next = curr->next;
			curr = prev->next;

			delete tmp;
	
			continue;
		}

		prev = prev->next;
		curr = prev->next;
		
	}

}

int main() {
	
	Node* node1 = new Node(3);
	Node* node2 = new Node(3);
	Node* node3 = new Node(3);
	Node* node4 = new Node(4);
	Node* node5 = new Node(3);

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	List newList(node1);

	newList.removeItem(3);

	newList.display();

}

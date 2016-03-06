#include <iostream>
#include "List.h"
using namespace std;
int main() {

	List linked;
	/*
	linked.addValue(1);
	linked.addValue(2);
	linked.addValue(3);
	linked.addValue(4);
	linked.addValue(5);
	linked.addValue(6);
	*/
	for (int i = 1; i <= 50; ++i) {
		linked.addValue(i);
	}

	for (int i = 1; i <= 50; ++i) {
		if ((i % 3) == 0) {
			linked.remove(i);
		}
	}


	linked.display();
	return 0;
}
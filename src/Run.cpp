
#include "../include/LinkedList.h"
using namespace std;



int main(int argc, char *argv[]) {

//	Link null = Link();


	// Initiation a link with a null pointer.
	Link first = Link("This is a first link",NULL);
	Link* pFirst = &first;
	Link copiedLink = Link(first);

	List aList = List();
	List bList = List(aList);
	aList = bList;

	return 0;

}





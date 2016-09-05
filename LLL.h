#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;
struct node
{
        int data;
        node * next;
};

class list
{
	public:
		list();
		~list();
		void displaylist();
	private:
		node * head;
};


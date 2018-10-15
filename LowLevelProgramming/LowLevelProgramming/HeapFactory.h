#pragma once
#include "Heap.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <vector>

using namespace std;
class HeapFactory
{
public:
	HeapFactory();
	~HeapFactory();

	static Heap* CreateHeap(const char* szName);
	static void CreateDefaultHeap();
	void * operator new (size_t size, Heap * pHeap);

private:


	static vector<Heap*> HeapVector;
	
	

	

};


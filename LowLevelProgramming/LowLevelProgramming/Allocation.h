#pragma once
#include <stdlib.h>
#include "Heap.h"
class Allocation
{
public:
	Allocation();
	~Allocation();

	struct AllocHeader
	{

		Heap * pHeap;
		int iSize;

		void * operator new (unsigned int uiSize);
		void * operator new (size_t size, Heap * pHeap);
		void operator delete (void * pMem);
		

		

	}

};


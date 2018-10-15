#include "stdafx.h"
//#include <stdio.h>
#include <stdlib.h> // For Malloc
#include "HeapFactory.h"
#include "Heap.h"


HeapFactory::HeapFactory()
{
}


HeapFactory::~HeapFactory()
{
}

Heap * HeapFactory::CreateHeap(const char * szName)
{
	return nullptr;
}

void HeapFactory::CreateDefaultHeap()
{
    //malloc(sizeof(Heap));

	Heap* heap = (Heap*)malloc(sizeof(Heap));
	//HeapVector.push_back(heap);
	//Heap heap = (Heap*(malloc(sizeof(heap))))
}

void * HeapFactory::operator new(size_t size, Heap * pHeap)
{
	return nullptr;
}


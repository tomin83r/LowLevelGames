#include "stdafx.h"
#include "Heap.h"
#include <stdio.h>
#include <stdlib.h>


Heap::Heap(const char name)
{
	m_Name[8] = name;
}

Heap::Heap()
{

}


Heap::~Heap()
{

}

const char * Heap::GetName() const
{
	return nullptr;
}

void Heap::AddAllocation(size_t size)
{

}

void Heap::RemoveAllocation(size_t size)
{

}

void * Heap::operator new(size_t size, Heap * pHeap)
{
	return malloc(sizeof(pHeap));
}

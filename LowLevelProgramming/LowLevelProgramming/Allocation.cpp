#include "stdafx.h"
#include "Allocation.h"


Allocation::Allocation()
{
}


Allocation::~Allocation()
{
}

void * Allocation::AllocHeader::operator new(unsigned int uiSize)
{
	return malloc(uiSize);
}

void * Allocation::AllocHeader::operator new(size_t size, Heap * pHeap)
{
	size_t nRequestedBytes = size + sizeof(AllocHeader);
	char * pMem = (char *)malloc(nRequestedBytes);
	AllocHeader * pHeader = (AllocHeader *)pMem;
	pHeader->pHeap = pHeap;
	pHeader->iSize = size;
	pHeap->AddAllocation(size);
}

void Allocation::AllocHeader::operator delete(void * pMem)
{

}

#pragma once
class Heap
{
public:
	Heap(const char name);
	Heap();
	~Heap();
	const char * GetName() const;

	void AddAllocation(size_t size);
	void RemoveAllocation(size_t size);
	size_t TotalAllocation() { return m_allocatedBytes; }
	void * operator new (size_t size, Heap * pHeap);

private:
	char m_Name[8];
	size_t m_allocatedBytes;



};


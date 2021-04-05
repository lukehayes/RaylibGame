/**
 * GC functionality is essentially a large array (will be linked list in future)
 * that can hold pointers to memory allocated on the heap. Free() will be 
 * called on all pointers when the program is terminated.
 */
#ifndef LH_GC_H
#define LH_GC_H

/**
 * Allocate a predefined size of memory - to be called on initilization.
 */
void AllocateGameMemory(const int size)
{
}

/**
 * Free all memory allocated on the heap.
 */
void DestroyGameMemory()
{
}

#endif

#ifndef _STL_HEAP_ALLOC_H_
#define _STL_HEAP_ALLOC_H_
#include <memory>
#include <assert.h>

template <typename T>
class STLHeapAlloc:
	public std::allocator<T>
{
public:
	typedef T value_type;
	typedef value_type* pointer;
	typedef value_type& reference;
	typedef const value_type& const_reference;
	typedef std::size_t size_type;
	typedef std::ptrdiff_t  difference_type;


	template<class U>
	struct rebind
	{
		typedef STLHeapAlloc<U> other;
	};


	STLHeapAlloc()
	{

	}

	STLHeapAlloc(STLHeapAlloc const&)
	{

	}

	STLHeapAlloc<T>& operator= (STLHeapAlloc<T> const&)
	{
		return (*this);
	}

	template<class other>
	STLHeapAlloc(STLHeapAlloc<other> const&){}


	template<class other>
	STLHeapAlloc<T>& operator=(STLHeapAlloc<other> const&) {return (*this);}

	pointer allocate(size_type _Count,const pointer = 0)
	{
		_Count *= sizeof(value_type);
		void* p = HeapAlloc(GetProcessHeap(),0/*HEAP_NO_SERIALIZE*/,_Count);
		assert(p);
		return (pointer)p;
	}

	void deallocate(pointer ptr,size_type count)
	{
		HeapFree(GetProcessHeap(),0/*HEAP_NO_SERIALIZE*/,ptr);
	}
};



#endif
#pragma once
#include <vector>
#include <set>
#include <map>
#include "StlHeapAlloc.h"


namespace GL
{
	template<class _Elem>
	class basic_string
		: public std::basic_string<_Elem, std::char_traits<_Elem>, STLHeapAlloc<_Elem> >
	{
	public:
		typedef std::basic_string<_Elem, std::char_traits<_Elem>, STLHeapAlloc<_Elem> > _BaseClass;

	public:
		basic_string(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}
		~basic_string()
		{
			_BaseClass::~basic_string();
		}

		basic_string(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		basic_string() _NOEXCEPT
			: _BaseClass()
		{
		}

		explicit basic_string(const allocator_type& _Al) _NOEXCEPT
			: _BaseClass(_Al)
		{
		}

		basic_string(const _Myt& _Right, size_type _Roff,
			size_type _Count = npos)
			: _BaseClass(_Right, _Roff, _Count)
		{
		}

		basic_string(const _Myt& _Right, size_type _Roff, size_type _Count,
			const allocator_type& _Al)
			: _BaseClass(_Right, _Roff, _Count, _Al)
		{
		}

		basic_string(const _Elem *_Ptr, size_type _Count)
			: _BaseClass(_Ptr, _Count)
		{
		}

		basic_string(const _Elem *_Ptr, size_type _Count, const allocator_type& _Al)
			: _BaseClass(_Ptr, _Count, _Al)
		{
		}

		basic_string(const _Elem *_Ptr)
			: _BaseClass(_Ptr)
		{
		}

		basic_string(const _Elem *_Ptr, const allocator_type& _Al)
			: _BaseClass(_Ptr, _Al)
		{
		}

		basic_string(size_type _Count, _Elem _Ch)
			: _BaseClass(_Count, _Ch)
		{
		}

		basic_string(size_type _Count, _Elem _Ch, const allocator_type& _Al)
			: _BaseClass(_Count, _Ch, _Al)
		{
		}

		template<class _Iter,
			class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
			basic_string(_Iter _First, _Iter _Last, const allocator_type& _Al = allocator_type())
			: _BaseClass(_First, _Last, _Al)
		{
		}

		basic_string(_Myt&& _Right) _NOEXCEPT
			: _BaseClass(_Right)
		{
		}

		basic_string(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		basic_string(_XSTD initializer_list<_Elem> _Ilist,
			const allocator_type& _Al = allocator_type())
			: _BaseClass(_Ilist, _Al)
		{
		}

	};
	typedef GL::basic_string<char> string;
	typedef GL::basic_string<wchar_t> wstring;

	template<class _Ty>
	class vector
		: public std::vector<_Ty, STLHeapAlloc<_Ty> >
	{
	public:
		typedef std::vector<_Ty, STLHeapAlloc<_Ty> > _BaseClass;
		
	public:
		~vector()
		{
			_BaseClass::~vector();
		}

		vector() _NOEXCEPT
			: _BaseClass()
		{	// construct empty vector
		}

		explicit vector(const allocator_type& _Al) _NOEXCEPT
			: _BaseClass(_Al)
		{	// construct empty vector, allocator
		}

		explicit vector(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		vector(size_type _Count, const value_type& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		vector(size_type _Count, const value_type& _Val, const allocator_type& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		vector(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		vector(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter,
			class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
			vector(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter,
			class = typename enable_if<_Is_iterator<_Iter>::value,
			void>::type>
			vector(_Iter _First, _Iter _Last, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}

		vector(_Myt&& _Right) _NOEXCEPT
			: _BaseClass(_Right)
		{
		}

		vector(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}


		vector(_XSTD initializer_list<value_type> _Ilist,
			const allocator_type& _Al = allocator_type())
			: _BaseClass(_Ilist, _Al)
		{
		}

	};

	template<class _Kty, class _Pr = std::less<_Kty>>
	class set
		: public std::set<_Kty, _Pr, STLHeapAlloc<_Kty> >
	{
	public:
		typedef std::set<_Kty, _Pr, STLHeapAlloc<_Kty> > _BaseClass;

	public:
		~set()
		{
			//_BaseClass::~set();
		}

		set()
		{
		}

		explicit set(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		set(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		set(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit set(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		set(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		set(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		set(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		set(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}

		set(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		set(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		set(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		set(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred)
			: _BaseClass(_Ilist, _Pred)
		{
		}

		set(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Pred, _Al)
		{
		}
	};

	template<class _Kty, class _Ty, class _Pr = std::less<_Kty> >
	class map
		: public std::map<_Kty, _Ty, _Pr, STLHeapAlloc<std::pair<_Kty, _Ty> > >
	{
	public:
		typedef std::map<_Kty, _Ty, _Pr, STLHeapAlloc<std::pair<_Kty, _Ty> > > _BaseClass;

	public:
		~map()
		{
			//_BaseClass::~map();
		}

		map()
		{
		}

		explicit map(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		map(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		map(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit map(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		map(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		map(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		map(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		map(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}

		map(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		map(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		map(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		map(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred)
			: _BaseClass(_Ilist, _Pred)
		{
		}

		map(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Pred, _Al)
		{
		}
	};

	template<class _Kty, class _Ty, class _Pr = std::less<_Kty> >
	class multimap
		: public std::multimap<_Kty, _Ty, _Pr, STLHeapAlloc<std::pair<_Kty, _Ty> > >
	{
	public:
		typedef std::multimap<_Kty, _Ty, _Pr, STLHeapAlloc<std::pair<_Kty, _Ty> > > _BaseClass;

	public:
		~multimap()
		{
			//_BaseClass::~multimap();
		}

		multimap()
		{
		}

		explicit multimap(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		multimap(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		multimap(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit multimap(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		multimap(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		multimap(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		multimap(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		multimap(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}

		multimap(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		multimap(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		multimap(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		multimap(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred)
			: _BaseClass(_Ilist, _Pred)
		{
		}

		multimap(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Pred, _Al)
		{
		}
	};	
}

#pragma once
#include "StlHeapAlloc.h"
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <sstream>

namespace GL
{
	/************************************************************************/
	/* string wstring                                                       */
	/************************************************************************/
	template<class _Elem, 
		class _Traits = std::char_traits<_Elem>, 
		class _Alloc = STLHeapAlloc<_Elem> >
	class basic_string
		: public std::basic_string<_Elem, _Traits, _Alloc>
	{
	public:
		typedef std::basic_string<_Elem, _Traits, _Alloc> _BaseClass;

	public:
		basic_string(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}
		~basic_string()
		{
			//_BaseClass::~basic_string();
			_Tidy(true);
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
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
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
	typedef basic_string<char> string;
	typedef basic_string<wchar_t> wstring;

	/************************************************************************/
	/* basic_stringbuf                                                      */
	/************************************************************************/
	template<class _Elem,
		class _Traits = std::char_traits<_Elem>,
		class _Alloc = STLHeapAlloc<_Elem> >
	class basic_stringbuf
		: public std::basic_stringbuf<_Elem, _Traits, _Alloc>
	{
	public:
		typedef std::basic_stringbuf<_Elem, _Traits, _Alloc> _BaseClass;

	public:
		explicit basic_stringbuf(std::ios_base::openmode _Mode = std::ios_base::in | std::ios_base::out)
			: _BaseClass(_Mode)
		{
		}

		explicit basic_stringbuf(const _Mystr& _Str,
			std::ios_base::openmode _Mode = std::ios_base::in | std::ios_base::out)
			: _BaseClass(_Str, _Mode)
		{			
		}

		basic_stringbuf(_Myt&& _Right)
			: _BaseClass(_Right)
		{			
		}

		virtual ~basic_stringbuf() _NOEXCEPT
		{	// destroy the object
			
		}

	};
	typedef basic_stringbuf<char> stringbuf;
	typedef basic_stringbuf<wchar_t> wstringbuf;

	/************************************************************************/
	/* basic_istringstream                                                  */
	/************************************************************************/
	template<class _Elem,
		class _Traits = std::char_traits<_Elem>,
		class _Alloc = STLHeapAlloc<_Elem> >
	class basic_istringstream
		: public std::basic_istringstream<_Elem, _Traits, _Alloc>
	{
	public:
		typedef std::basic_istringstream<_Elem, _Traits, _Alloc> _BaseClass;

	public:
		explicit basic_istringstream(std::ios_base::openmode _Mode = std::ios_base::in)
			: _BaseClass(_Mode)
		{
		}

		explicit basic_istringstream(const _Mystr& _Str,
			std::ios_base::openmode _Mode = std::ios_base::in)
			: _BaseClass(_Str, _Mode)
		{
		}

		basic_istringstream(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		basic_istringstream(const _Myt&) = delete;

		virtual ~basic_istringstream() _NOEXCEPT
		{	// destroy the object
		}
	};
	typedef basic_istringstream<char> istringstream;
	typedef basic_istringstream<wchar_t> wistringstream;

	/************************************************************************/
	/* basic_ostringstream                                                  */
	/************************************************************************/
	template<class _Elem,
		class _Traits = std::char_traits<_Elem>,
		class _Alloc = STLHeapAlloc<_Elem> >
	class basic_ostringstream
		: public std::basic_ostringstream<_Elem, _Traits, _Alloc>
	{
	public:
		typedef std::basic_ostringstream<_Elem, _Traits, _Alloc> _BaseClass;

	public:
		explicit basic_ostringstream(std::ios_base::openmode _Mode = std::ios_base::out)
			: _BaseClass(_Mode)
		{
		}

		explicit basic_ostringstream(const _Mystr& _Str,
			ios_base::openmode _Mode = ios_base::out)
			: _BaseClass(_Str, _Mode)
		{
		}

		basic_ostringstream(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}
		
		basic_ostringstream(const _Myt&) = delete;

		virtual ~basic_ostringstream() _NOEXCEPT
		{	// destroy the object
		}
	};
	typedef basic_ostringstream<char> ostringstream;
	typedef basic_ostringstream<wchar_t> wostringstream;

	/************************************************************************/
	/* basic_stringstream                                                   */
	/************************************************************************/
	template<class _Elem,
		class _Traits = std::char_traits<_Elem>,
		class _Alloc = STLHeapAlloc<_Elem> >
	class basic_stringstream
		: public std::basic_stringstream<_Elem, _Traits, _Alloc>
	{
	public:
		typedef std::basic_stringstream<_Elem, _Traits, _Alloc> _BaseClass;

	public:
		explicit basic_stringstream(std::ios_base::openmode _Mode =
			std::ios_base::in | std::ios_base::out)
			: _BaseClass(_Mode)
		{
		}

		explicit basic_stringstream(const _Mystr& _Str,
			std::ios_base::openmode _Mode = std::ios_base::in | std::ios_base::out)
			: _BaseClass(_Str, _Mode)
		{
		}

		basic_stringstream(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		basic_stringstream(const _Myt&) = delete;

		virtual ~basic_stringstream() _NOEXCEPT
		{	// destroy the object
		}

	};
	typedef basic_stringstream<char> stringstream;
	typedef basic_stringstream<wchar_t> wstringstream;

	/************************************************************************/
	/* vector                                                               */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class vector
		: public std::vector<_Ty, _Alloc>
	{
	public:
		typedef std::vector<_Ty, _Alloc> _BaseClass;

	public:
		~vector()
		{
			//_BaseClass::~vector();
			_Tidy();
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
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
			vector(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
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

	/************************************************************************/
	/* deque                                                                */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class deque
		: public std::deque<_Ty, _Alloc>
	{
	public:
		typedef std::deque<_Ty, _Alloc> _BaseClass;

	public:
		~deque() _NOEXCEPT
		{
			//_BaseClass::~deque();
			_Tidy();
		}

		deque()
		{
		}

		explicit deque(const _Alloc& _Al)
			: _BaseClass(_Al)
		{
		}

		explicit deque(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		deque(size_type _Count, const value_type& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		deque(size_type _Count, const value_type& _Val, const _Alloc& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		deque(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		deque(const _Myt& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
			deque(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
			deque(_Iter _First, _Iter _Last, const _Alloc& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}

		deque(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		deque(_Myt&& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		deque(_XSTD initializer_list<value_type> _Ilist,
			const _Alloc& _Al = allocator_type())
			: _BaseClass(_Ilist, _Al)
		{
		}
				
	};

	/************************************************************************/
	/* list                                                                 */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class list
		: public std::list<_Ty, _Alloc>
	{
	public:
		typedef std::list<_Ty, _Alloc> _BaseClass;

	public:
		~list() _NOEXCEPT
		{
			//_BaseClass::~list();
			_Tidy();
		}

		list()
		{
		}

		explicit list(const _Alloc& _Al)
			: _BaseClass(_Al)
		{
		}

		explicit list(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		list(size_type _Count, const _Ty& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		list(size_type _Count, const _Ty& _Val, const _Alloc& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		list(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		list(const _Myt& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
			list(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
			list(_Iter _First, _Iter _Last, const _Alloc& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}

		list(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		list(_Myt&& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		list(_XSTD initializer_list<_Ty> _Ilist,
			const _Alloc& _Al = allocator_type())
			: _BaseClass(_Ilist, _Al)
		{
		}		
	};

	/************************************************************************/
	/* forward_list                                                         */
	/************************************************************************/
	template<class _Ty,
		class _Alloc = STLHeapAlloc<_Ty> >
	class forward_list
		: public std::forward_list<_Ty, _Alloc>
	{
	public:
		typedef std::forward_list<_Ty, _Alloc> _BaseClass;

	public:
		~forward_list() _NOEXCEPT
		{
			//_Tidy();
			_BaseClass::~forward_list();
		}

		forward_list()
		{
		}

		explicit forward_list(size_type _Count)
			: _BaseClass(_Count)
		{
		}

		forward_list(size_type _Count, const _Ty& _Val)
			: _BaseClass(_Count, _Val)
		{
		}

		forward_list(size_type _Count, const _Ty& _Val, const _Alloc& _Al)
			: _BaseClass(_Count, _Val, _Al)
		{
		}

		explicit forward_list(const _Alloc& _Al)
			: _BaseClass(_Al)
		{
		}

		forward_list(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		forward_list(const _Myt& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value, void>::type>
			forward_list(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter,
			class = typename std::enable_if<std::_Is_iterator<_Iter>::value,
			void>::type>
			forward_list(_Iter _First, _Iter _Last, const _Alloc& _Al)
			: _BaseClass(_First, _Last, _Al)
		{
		}

		forward_list(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		forward_list(_Myt&& _Right, const _Alloc& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		forward_list(_XSTD initializer_list<_Ty> _Ilist,
			const _Alloc& _Al = allocator_type())
			: _BaseClass(_Ilist, _Al)
		{
		}
	};

	/************************************************************************/
	/* set                                                                  */
	/************************************************************************/
	template<class _Kty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class set
		: public std::set<_Kty, _Pr, _Alloc>
	{
	public:
		typedef std::set<_Kty, _Pr, _Alloc> _BaseClass;

	public:
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

	/************************************************************************/
	/* multiset                                                             */
	/************************************************************************/
	template<class _Kty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class multiset
		: public std::multiset<_Kty, _Pr, _Alloc>
	{
	public:
		typedef std::multiset<_Kty, _Pr, _Alloc> _BaseClass;

	public:
		multiset()
		{
		}

		explicit multiset(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		multiset(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		multiset(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit multiset(const key_compare& _Pred)
			: _BaseClass(_Pred)
		{
		}

		multiset(const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Pred, _Al)
		{
		}

		template<class _Iter>
		multiset(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		multiset(_Iter _First, _Iter _Last,
			const key_compare& _Pred)
			: _BaseClass(_First, _Last, _Pred)
		{
		}

		template<class _Iter>
		multiset(_Iter _First, _Iter _Last,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Pred, _Al)
		{
		}

		multiset(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		multiset(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		multiset(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		multiset(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred)
			: _BaseClass(_Ilist, _Pred)
		{
		}

		multiset(_XSTD initializer_list<value_type> _Ilist,
			const key_compare& _Pred, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Pred, _Al)
		{
		}

	};

	/************************************************************************/
	/* map                                                                  */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<_Kty, _Ty> > >
	class map
		: public std::map<_Kty, _Ty, _Pr, _Alloc>
	{
	public:
		typedef std::map<_Kty, _Ty, _Pr, _Alloc> _BaseClass;

	public:
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

	/************************************************************************/
	/* multimap                                                             */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Pr = std::less<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<_Kty, _Ty> > >
	class multimap
		: public std::multimap<_Kty, _Ty, _Pr, _Alloc>
	{
	public:
		typedef std::multimap<_Kty, _Ty, _Pr, _Alloc> _BaseClass;

	public:
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

	/************************************************************************/
	/* unordered_set                                                        */
	/************************************************************************/
	template<class _Kty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class unordered_set
		: public std::unordered_set<_Kty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_set<_Kty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_set()
		{
		}

		explicit unordered_set(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_set(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_set(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_set(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_set(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_set(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_set(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_set(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_set(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_set(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		unordered_set(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		unordered_set(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets)
			: _BaseClass(_Ilist, _Buckets)
		{
		}

		unordered_set(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg)
		{
		}

		unordered_set(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_set(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}
	};

	/************************************************************************/
	/* unordered_multiset                                                   */
	/************************************************************************/
	template<class _Kty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<_Kty> >
	class unordered_multiset
		: public std::unordered_multiset<_Kty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_multiset<_Kty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_multiset()
		{
		}

		explicit unordered_multiset(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_multiset(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multiset(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_multiset(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_multiset(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_multiset(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_multiset(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_multiset(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_multiset(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multiset(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		unordered_multiset(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		unordered_multiset(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets)
			: _BaseClass(_Ilist, _Buckets)
		{
		}

		unordered_multiset(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg)
		{
		}

		unordered_multiset(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_multiset(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}
	};

	/************************************************************************/
	/* unordered_map                                                        */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<const _Kty, _Ty> > >
	class unordered_map
		: public std::unordered_map<_Kty, _Ty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_map<_Kty, _Ty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_map()
		{
		}

		explicit unordered_map(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_map(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_map(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_map(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_map(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_map(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_map(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_map(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_map(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_map(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		unordered_map(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		unordered_map(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets)
			: _BaseClass(_Ilist, _Buckets)
		{
		}

		unordered_map(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg)
		{
		}

		unordered_map(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_map(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

	};

	/************************************************************************/
	/* unordered_multimap                                                   */
	/************************************************************************/
	template<class _Kty,
		class _Ty,
		class _Hasher = std::hash<_Kty>,
		class _Keyeq = std::equal_to<_Kty>,
		class _Alloc = STLHeapAlloc<std::pair<const _Kty, _Ty> > >
	class unordered_multimap
		: public std::unordered_multimap<_Kty, _Ty, _Hasher, _Keyeq, _Alloc>
	{
	public:
		typedef std::unordered_multimap<_Kty, _Ty, _Hasher, _Keyeq, _Alloc> _BaseClass;

	public:
		unordered_multimap()
		{
		}

		explicit unordered_multimap(const allocator_type& _Al)
			: _BaseClass(_Al)
		{
		}

		unordered_multimap(const _Myt& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multimap(const _Myt& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		explicit unordered_multimap(size_type _Buckets)
			: _BaseClass(_Buckets)
		{
		}

		unordered_multimap(size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Buckets, _Hasharg)
		{
		}

		unordered_multimap(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_multimap(size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last)
			: _BaseClass(_First, _Last)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets)
			: _BaseClass(_First, _Last, _Buckets)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		template<class _Iter>
		unordered_multimap(_Iter _First, _Iter _Last,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_First, _Last, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

		unordered_multimap(_Myt&& _Right)
			: _BaseClass(_Right)
		{
		}

		unordered_multimap(_Myt&& _Right, const allocator_type& _Al)
			: _BaseClass(_Right, _Al)
		{
		}

		unordered_multimap(_XSTD initializer_list<value_type> _Ilist)
			: _BaseClass(_Ilist)
		{
		}

		unordered_multimap(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets)
			: _BaseClass(_Ilist, _Buckets)
		{
		}

		unordered_multimap(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg)
		{
		}

		unordered_multimap(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg)
		{
		}

		unordered_multimap(_XSTD initializer_list<value_type> _Ilist,
			size_type _Buckets, const hasher& _Hasharg,
			const _Keyeq& _Keyeqarg, const allocator_type& _Al)
			: _BaseClass(_Ilist, _Buckets, _Hasharg, _Keyeqarg, _Al)
		{
		}

	};
}

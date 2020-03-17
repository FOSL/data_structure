#include "FOSL/data_structure/iterator/forward.hpp"

template< typename container_type
		, typename pointer
		, typename reference > auto
forward< container_type
       , pointer
       , reference >::
operator *(void) const noexcept -> reference
{
	return *current;
}
template< typename container_type
		, typename pointer
		, typename reference > auto
forward< container_type
       , pointer
       , reference >::
operator ->(void) const noexcept -> pointer
{
	return current;
}
template< typename container_type
		, typename pointer
		, typename reference > auto
forward< container_type
       , pointer
       , reference >::
operator ++(void) noexcept -> iterator &
{
	++current;

	return *this;
}
template< typename container_type
		, typename pointer
		, typename reference > auto
forward< container_type
       , pointer
       , reference >::
operator ++(int) noexcept -> iterator
{
	return iterator(current++);
}

// namespace internal
// {
// 	using namespace FOSL::metaprogramming;

// 	template <typename iterator_type > struct is_forward                    : false_type { };
// 	template <typename       ...types> struct is_forward<forward<types...>> :  true_type { };
// }

// template <typename iterator>
// constexpr bool is_forward(void)
// {
// 	return internal::is_forward<iterator>::value;
// }

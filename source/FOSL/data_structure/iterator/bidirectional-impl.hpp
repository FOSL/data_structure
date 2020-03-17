template< typename container_type
		, typename pointer
		, typename reference > auto
bidirectional< container_type
             , pointer
             , reference >::
operator --(void) noexcept -> iterator &
{
	--current;

	return *this;
}
template< typename container_type
		, typename pointer
		, typename reference > auto
bidirectional< container_type
             , pointer
             , reference >::
operator --(int) noexcept -> iterator
{
	return iterator(current--);
}

// namespace internal
// {
// 	using namespace FOSL::metaprogramming;

// 	template <typename iterator_type > struct is_bidirectional                    : false_type { };
// 	template <typename       ...types> struct is_bidirectional<bidirectional<types...>> :  true_type { };
// }

// template <typename iterator>
// constexpr bool is_bidirectional(void)
// {
// 	return internal::is_bidirectional<iterator>::value;
// }

// const _Iterator&
// base() const noexcept
// { return _M_current; }

template< typename container_type
		, typename pointer
		, typename reference > auto
random_access< container_type
             , pointer
             , reference >::
operator [](difference difference) const noexcept -> reference
{
	return current[difference];
}
template< typename container_type
		, typename pointer
		, typename reference > auto
random_access< container_type
             , pointer
             , reference >::
operator+=(difference difference) noexcept -> iterator &
{
	current += difference; return *this;
}
template< typename container_type
		, typename pointer
		, typename reference > auto
random_access< container_type
             , pointer
             , reference >::
operator+(difference difference) const noexcept -> iterator
{
	return iterator(current + difference);
}
template< typename container_type
		, typename pointer
		, typename reference > auto
random_access< container_type
             , pointer
             , reference >::
operator-=(difference difference) noexcept -> iterator &
{
	current -= difference; return *this;
}
template< typename container_type
		, typename pointer
		, typename reference > auto
random_access< container_type
             , pointer
             , reference >::
operator-(difference difference) const noexcept -> iterator
{
	return iterator(current - difference);
}

// namespace internal
// {
// 	using namespace FOSL::metaprogramming;

// 	template <typename iterator_type > struct is_random_access                    : false_type { };
// 	template <typename       ...types> struct is_random_access<random_access<types...>> :  true_type { };
// }

// template <typename iterator>
// constexpr bool is_random_access(void)
// {
// 	return internal::is_random_access<iterator>::value;
// }

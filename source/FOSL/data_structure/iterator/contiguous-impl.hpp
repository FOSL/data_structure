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

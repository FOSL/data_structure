#ifndef _FOSL_DATA_STRUCTURE_ITERATOR_RANDOM_ACCESS_HPP_
#define _FOSL_DATA_STRUCTURE_ITERATOR_RANDOM_ACCESS_HPP_

#include "FOSL/data_structure/iterator/bidirectional.hpp"

namespace FOSL::data_structure::iterator
{
	template< typename _container_type
	        , typename _pointer   = typename _container_type::value_type *
			, typename _reference = typename _container_type::value_type & >
	struct random_access : public iterator::bidirectional< _container_type
	                                                     , _pointer
	                                                     , _reference >
	{
	protected: // types
		using container_type = _container_type;
	    using pointer        = _pointer;
	    using reference      = _reference;
		using base = iterator::base<random_access< container_type
	                                             , pointer
	                                             , reference >>;
		using base::current;
		using typename base::iterator;
		using typename base::difference;

	public:
	//	auto base() const noexcept -> const iterator &;
	public: // operators
		auto operator[](difference) const noexcept -> reference;
		auto operator+=(difference)       noexcept -> iterator &;
		auto operator+ (difference) const noexcept -> iterator;
		auto operator-=(difference)       noexcept -> iterator &;
		auto operator- (difference) const noexcept -> iterator;
	};

//	template <typename iterator>
//	extern constexpr bool is_bidirectional(void);

	#include "FOSL/data_structure/iterator/random_access-impl.hpp"
}

#endif

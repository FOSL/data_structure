#ifndef _FOSL_DATA_STRUCTURE_ITERATOR_BIDIRECTIONAL_HPP_
#define _FOSL_DATA_STRUCTURE_ITERATOR_BIDIRECTIONAL_HPP_

#include "FOSL/data_structure/iterator/forward.hpp"

namespace FOSL::data_structure::iterator
{
	template< typename _container_type
	        , typename _pointer   = typename _container_type::value_type *
			, typename _reference = typename _container_type::value_type & >
	struct bidirectional : public iterator::forward< _container_type
	                                               , _pointer
	                                               , _reference >
	{
	protected: // types
		using container_type = _container_type;
	    using pointer        = _pointer;
	    using reference      = _reference;
		using base = iterator::base<bidirectional< container_type
	                                             , pointer
	                                             , reference >>;
		using base::current;
		using typename base::iterator;

	public: // operators
		auto operator --(void) noexcept -> iterator &;
		auto operator --(int ) noexcept -> iterator;
	};

	// template <typename iterator>
	// extern constexpr bool is_bidirectional(void);

	#include "FOSL/data_structure/iterator/bidirectional-impl.hpp"
}

#endif

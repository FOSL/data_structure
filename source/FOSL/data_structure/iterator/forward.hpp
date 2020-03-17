#ifndef _FOSL_DATA_STRUCTURE_ITERATOR_FORWARD_HPP_
#define _FOSL_DATA_STRUCTURE_ITERATOR_FORWARD_HPP_

#include "FOSL/data_structure/iterator/base.hpp"

namespace FOSL::data_structure::iterator
{
	template< typename _container_type
	        , typename _pointer   = typename _container_type::value_type *
			, typename _reference = typename _container_type::value_type & >
	struct forward : public iterator::base<forward< _container_type
	                                              , _pointer
	                                              , _reference >>
	{
	protected: // types
		using container_type = _container_type;
	    using pointer        = _pointer;
	    using reference      = _reference;
		using base = iterator::base<forward< container_type
	                                       , pointer
	                                       , reference >>;
		using base::current;
		using typename base::iterator;

	public: // operators
		auto operator * (void) const noexcept -> reference;
		auto operator ->(void) const noexcept -> pointer;
		auto operator ++(void)       noexcept -> iterator &;
		auto operator ++(int )       noexcept -> iterator;
	};

	// template <typename iterator>
	// extern constexpr bool is_forward(void);

	#include "FOSL/data_structure/iterator/forward-impl.hpp"
}

#endif

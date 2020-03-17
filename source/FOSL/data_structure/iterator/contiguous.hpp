#ifndef _FOSL_DATA_STRUCTURE_ITERATOR_CONTIGUOUS_HPP_
#define _FOSL_DATA_STRUCTURE_ITERATOR_CONTIGUOUS_HPP_

#include "FOSL/data_structure/iterator/random_access.hpp"

namespace FOSL::data_structure::iterator
{
	template< typename container_type
	        , typename pointer   = typename container_type::value_type *
			, typename reference = typename container_type::value_type & >
	using contiguous = random_access < container_type
	                                 , pointer
	                                 , reference >;

//	template <typename iterator>
//	extern constexpr bool is_contiguous(void);

	#include "FOSL/data_structure/iterator/contiguous-impl.hpp"
}

#endif

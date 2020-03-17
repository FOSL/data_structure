#ifndef _FOSL_DATA_STRUCTURE_ITERATOR_BASE_HPP_
#define _FOSL_DATA_STRUCTURE_ITERATOR_BASE_HPP_

#include <FOSL/utility.hpp>

namespace FOSL::data_structure::iterator
{
	template <typename _iterator>
	struct base
	{
	protected:
		using iterator       = _iterator;
		using container_type = typename iterator::container_type;
		using pointer        = typename iterator::pointer;
		using reference      = typename iterator::reference;
		using value_type     = typename container_type::value_type;

	protected:
		value_type * current;
	};

	#include "FOSL/data_structure/iterator/base-impl.hpp"
}

#endif


#include "pch.h"
#include "MathUtilities.h"

#include <utility>
#include <limits.h>
#include <utility>








void MathUtilities::fibonacci_init(const unsigned long long a, const unsigned long long b)
{ 
	index_ = 0;
	current_ = a;
	previous_ = b; // see special case when initialized

}



// Produce the next value in the sequence.
// Returns true on success, false on overflow.
bool MathUtilities::fibonacci_next()
{
	// check to see if we'd overflow result or position
	if ((ULLONG_MAX - previous_ < current_) ||
		(UINT_MAX == index_))
	{
		return false;
	}

	// Special case when index == 0, just return b value
	if (index_ > 0)
	{
		// otherwise, calculate next sequence value
		previous_ += current_;
	}
	std::swap(current_, previous_);
	++index_;
	return true;
}

// Get the current value in the sequence.
unsigned long long MathUtilities::fibonacci_current()
{
	return current_;
}

// Get the current index position in the sequence.
unsigned MathUtilities::fibonacci_index()
{
	return index_;
}


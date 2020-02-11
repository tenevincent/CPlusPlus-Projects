#pragma once






#ifdef MATHLIBRARY_UTIL_EXPORTS
#define MATHLIBRARY_UTIL_API __declspec(dllexport)
#else
#define MATHLIBRARY_UTIL_API __declspec(dllimport)
#endif


class MathUtilities
{
private:

	// DLL internal state variables:
	  unsigned long long previous_ = 0;  // Previous value, if any
	  unsigned long long current_ = 0;   // Current sequence value
	  unsigned index_ = 0;


public:
	// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
	  void fibonacci_init(
		const unsigned long long a, const unsigned long long b);

	// Produce the next value in the sequence.
	// Returns true on success and updates current value and index;
	// false on overflow, leaves current value and index unchanged.
	 bool fibonacci_next();

	// Get the current value in the sequence.
	 unsigned long long fibonacci_current();

	// Get the position of the current value in the sequence.
	 unsigned fibonacci_index();

};

//unsigned  MathUtilities::index_ = 0;
//unsigned long long MathUtilities::current_ = 0;
//unsigned long long MathUtilities::previous_ = 0;

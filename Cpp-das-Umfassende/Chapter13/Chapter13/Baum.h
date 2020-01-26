#pragma once
#include <string>
#include <iostream>                    // ostream, cout


class Baum {
	std::string name_;
public:
	explicit Baum(const std::string& name) : name_{ name } {}
	void print(std::ostream& os) const { os << name_; }
};

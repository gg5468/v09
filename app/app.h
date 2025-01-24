#pragma once

#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <list>

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n);
	void remove_element(std::vector<int>& v, int i);
	void input_element(std::vector<std::string>& v, int i, std::string s);
	int list_nth_element(std::list<int>& l, int i);
	void list_sort_desc(std::list<int>& l);
	unsigned unique_numbers(std::istream& is);

	class word_frequency
	{
	private:
		std::map<std::string, unsigned> map;
	public:
		word_frequency(std::istream& is);
		void insert(const std::string& s);
		unsigned count();
		unsigned frequency(std::string s);
	};
}
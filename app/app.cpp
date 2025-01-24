#include "app.h"

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n)
	{
		for (int i = 0; i < n; ++i)
		{
			v.push_back(i * i);
		}
	}

	void remove_element(std::vector<int>& v, int i)
	{
		v.erase(v.begin() + i);
	}

	void input_element(std::vector<std::string>& v, int i, std::string s)
	{
		v.insert(v.begin() + i, s);
	}

	unsigned unique_numbers(std::istream& is)
	{
		std::set<int> set{};
		int n;
		while (is >> n)
		{
			set.insert(n);
		}
		return set.size();
	}

	word_frequency::word_frequency(std::istream& is)
	{
		std::string s;
		while (is >> s)
		{
			s[0] = tolower(s[0]);
			insert(s);
		}
	}

	void word_frequency::insert(const std::string& s)
	{
		++map[s];
	}

	unsigned word_frequency::count()
	{
		return map.size();
	}

	unsigned word_frequency::frequency(std::string s)
	{
		auto it = map.find(s);
		if (it != map.end())
		{
			return map.at(s);
		}
		return 0;
	}

	int list_nth_element(std::list<int>& l, int i)
	{
		auto it = l.begin();
		std::advance(it, i);
		return *it;
	}

	void list_sort_desc(std::list<int>& l)
	{
		l.sort(std::greater<int>());
	}

}
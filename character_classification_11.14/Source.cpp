#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

// Глава 11, упр. 14 вроде сделал (стр. 460).

int main()
{
	string file_name_1;
	string file_name_2;
	cout << "Enter file name for open: ";
	cin >> file_name_1;

	ifstream ifs(file_name_1);
	if (!ifs)
	{
		cerr;
	}
	cout << "Enter file name for record: ";
	cin >> file_name_2;

	int counter_space = 0;
	int counter_alpha = 0;
	int counter_digit = 0;
	int counter_xdigit = 0;
	int counter_upper = 0;
	int counter_lower = 0;
	int counter_alnum = 0;
	int counter_cntrl = 0;
	int counter_punct = 0;
	int counter_print = 0;
	int counter_graph = 0;

	for (char ch; ifs.get(ch);)
	{
		if (isspace(ch))
		{
			counter_space++;
		}
		if (isalpha(ch))
		{
			counter_alpha++;
		}
		if (isdigit(ch))
		{
			counter_digit++;
		}
		if (isxdigit(ch))
		{
			counter_xdigit++;
		}
		if (isupper(ch))
		{
			counter_upper++;
		}
		if (islower(ch))
		{
			counter_lower++;
		}
		if (isalnum(ch))
		{
			counter_alnum++;
		}
		if (iscntrl(ch))
		{
			counter_cntrl++;
		}
		if (ispunct(ch))
		{
			counter_punct++;
		}
		if (isprint(ch))
		{
			counter_print++;
		}
		if (isgraph(ch))
		{
			counter_graph++;
		}
	}

	ifs.close();

	ofstream ofs(file_name_2);
	if (!ofs)
	{
		cerr;
	}

	ofs << "isspace: " << counter_space << '\n';
	ofs << "isalpha: " << counter_alpha << '\n';
	ofs << "isdigit: " << counter_digit << '\n';
	ofs << "isxdigit: " << counter_xdigit << '\n';
	ofs << "isupper: " << counter_upper << '\n';
	ofs << "islower: " << counter_lower << '\n';
	ofs << "isalnum: " << counter_alnum << '\n';
	ofs << "iscntrl: " << counter_cntrl << '\n';
	ofs << "ispunct: " << counter_punct << '\n';
	ofs << "isprint: " << counter_print << '\n';
	ofs << "isgraph: " << counter_graph << '\n';

	return 0;
}
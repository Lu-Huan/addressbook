#include<cstdlib>
#include<string>
int main(int argv, char** argc) {
	if (argv<2)
	{
		return 0;
	}
	
	std::string t0 = "address.exe ";
	std::string t1 = argc[1];
	t1 += " ";
	std::string t2 = argc[2];
	system((t0 + t1 + t2).data());
	return 0;
}

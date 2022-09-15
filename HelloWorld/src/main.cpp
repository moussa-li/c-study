#include <iostream>
#include <ostream>
#include <tkInt.h>

class Solution
{
public:
    void print(std::string str)
    {
	std::cout << str << std::endl;
    }
	    
};
int main()
{
    Solution sl;
    sl.print("Hello World!");
}

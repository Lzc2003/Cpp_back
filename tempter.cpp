#include<iostream>
#include<string>
template <typename T,int N>

class Array {
	private:
		T array[N];
	public:
		int GetSize() const{ return N; };
};


int main()
{	
	Array<std::string,50> array;

	std::cout << array.GetSize() << std::endl;
	std::cin.get();
}
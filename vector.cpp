#include<iostream>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z << std::endl;
	return stream;
}
int main()
{
	std::cin.get();
}

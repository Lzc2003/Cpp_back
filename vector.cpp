#include<iostream>
#include<vector>
struct Vertex
{
	float x, y, z;

	Vertex(float X,float Y,float Z):x(X), y(Y), z(Z) {
		std::cout << "copy!!" << std::endl;
	}

};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z << std::endl;
	return stream;
}

static void function(const std::vector<Vertex>& vertices) {
	
	//vertices.erase(vertices.begin() + 1);
	for (Vertex v : vertices)
	{
		std::cout << v << std::endl;
	}
}

int main()
{
	std::vector<Vertex>vertices;
	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });

	function(vertices);
	vertices.erase(vertices.begin() + 1);
	for (Vertex v : vertices)
	{
		std::cout << v << std::endl;
	}

	std::cin.get();
}

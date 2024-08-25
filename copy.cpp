#include<iostream>
#include<memory>

class String {
private:

    std::unique_ptr<char[]> name;
    unsigned int n_size;

public:
    String(const char* info)
    {
        n_size = strlen(info);
        name = std::make_unique<char[]>(n_size + 1);

        memcpy(name.get(), info, n_size + 1);
    }

    String(const String& other) :n_size(other.n_size)
    {
        std::cout << "copy!!!" << std::endl;
        name = std::make_unique<char[]>(n_size + 1);
        memcpy(name.get(), other.name.get(), n_size + 1);
    }

    ~String()
    {}

    char& operator[](unsigned int index)
    {
        return name[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);

};


std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.name;
    return stream;
}

void PrintString(const String& string)
{
    std::cout << string << std::endl;
}

int main(int argc, char const* argv[])
{
    String Lzc = "lizhichao";
    String Zjh = Lzc;
    Zjh[2] = 'Z';

    PrintString(Lzc);
    PrintString(Zjh);

    std::cin.get();
}
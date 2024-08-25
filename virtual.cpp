#include<iostream>

class Printable {
public:
    virtual std::string GetClassName() = 0;
};

class Entity :public Printable{
public:
    float X,Y;
    virtual std::string GetName() = 0;
    std::string GetClassName() override { return ("Entity"); }
};

class Player : public Entity {
private:
    std::string m_name;

public:
    Player(const std::string& name) :m_name(name){}
    std::string GetName() override { return m_name; }
    std::string GetClassName() override { return m_name; }
};

 void function(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

 void Print(Printable* obj)
 {
     std::cout << obj->GetClassName() << std::endl;
 }

int main(int argc, char const* argv[])
{
    Entity* e = new Player("6");
    //function(e);
    Print(e);

    Player* p = new Player("play");
   // function(p);
    Print(p);
    std::cin.get();
}

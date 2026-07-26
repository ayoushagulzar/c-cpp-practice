#include <iostream>
using namespace std;

class animal
{
public:
    string name;
    string sound;
    void animalCharcteristics()
    {
        cout << "The " << name << " " << sound << endl;
    }
};
int main()
{
    animal a1;
    a1.name = "cat";
    a1.sound = "meows";
    a1.animalCharcteristics();
    animal a2;
    a2.name = "dog";
    a2.sound = "barks";
    a2.animalCharcteristics();
    return 0;
}
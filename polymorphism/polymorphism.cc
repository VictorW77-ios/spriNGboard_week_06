#include <iostream>

using namespace std;

class Animal
{
  public:
    virtual void make_sound () const = 0;
};

void poke (Animal const & animal)
{ animal.make_sound(); }

class Cow : public Animal
{
  public:
    void make_sound () const override
    { cout << "moo" << endl; }
};

class FullCow : public Cow
{
  public:
    void make_sound () const override
    { cout << "Ooof - I ate too much" << endl; }
};

class Cat : public Animal
{
  public:
    void make_sound () const override 
    { cout << "Meowww" << endl; }
};

class Mouse : public Cat
{
  public: 
    void make_sound () const override
    { cout << "*mouse noises*" << endl; }
};

int main ()
{
  Cow c;
  FullCow fc;
  Cat ca; 
  Mouse m;

  poke(c);
  poke(fc);
  poke(ca);
  poke(m);

  return 0;
}


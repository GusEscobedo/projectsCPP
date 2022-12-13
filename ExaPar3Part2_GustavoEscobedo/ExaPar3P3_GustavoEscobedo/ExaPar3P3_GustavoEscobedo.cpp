#include <iostream>
#include <cstdlib>
using namespace std;

class Pet
{
public:
    Pet(int hunger = 0, int boredom = 0, int health=50, bool isDeath = false);
    bool m_isDeath;
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void Cure(int medicine = 4);
    void TakeDamage();
    void Stats();
    void Death();
private:
    int m_Hunger;
    int m_Boredom;
    int m_Health;
    int GetMood() const;
    void PassTime(int time = 1);
};


Pet::Pet(int hunger, int boredom, int health, bool isDeath) :
    m_Hunger(hunger),
    m_Boredom(boredom),
    m_Health(health),
    m_isDeath(isDeath)
{}

inline int Pet::GetMood() const
{
    return (m_Hunger + m_Boredom);
}

void Pet::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
}

void Pet::Talk()
{
    cout << "\n\n Humano estoy: ";
    int mood = GetMood();

    if (m_Hunger > 10 || m_Boredom > 10)
    {
        if (m_Hunger > 10)
        {
            cout << "Tengo hambre, ";
        }

        if (m_Boredom > 10)
        {
            cout << "Estoy aburrido";
        }
    }
    else
    {
        cout << "Estoy muy feliz";
    }

    cout << "\n";

    PassTime();
}

void Pet::Cure(int medicine)
{
    cout << "\n Me siento mejor. \n";
    m_Health += medicine;

    if (m_Health >= 50) {
        m_Health = 50;
    }

    PassTime();
}

void Pet::Eat(int food)
{
    cout << "\n Brrup. \n";
    m_Hunger -= food;

    if (m_Hunger <= 0)
    {
        m_isDeath = true;
    }

    PassTime();
}

void Pet::Play(int fun)
{
    cout << "\n Wheeee \n";
    m_Boredom -= fun;

    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }

    PassTime();
}

void Pet::TakeDamage()
{
    cout << "\n Auch";
    m_Health -= 5;
    cout << "\n Salud: \n" << m_Health;
    
    if (m_Health < 0)
    {
        m_Health = 0;
    }
}

void Pet::Stats()
{
    cout << "\nSalud: " << m_Health;
    cout << "\nHambre: " << m_Hunger;
    cout << "\nAburrimiento: " << m_Boredom;
}

void Pet::Death()
{
    if (m_Hunger > 19 && m_Boredom > 19)
    {
        cout << "\nCrei que me cuidarias \n *Muere* \n";
        m_isDeath = true;
    }
}

int main()
{

    srand(time(0));

    Pet pet;
    pet.Talk();
    int choice, randNum;

    do {

        randNum = rand() % 10;
        //cout << "\nRand Num: \n" << randNum;

        if (randNum == 3 || randNum == 7)
        {
            pet.TakeDamage();
        }

        cout << "\n Mascotas Virtuales\n\n";
        cout << "0 -  Salir\n";
        cout << "1 -  Escucha a tu macota\n";
        cout << "2 -  Alimentar\n";
        cout << "3 -  Jugar con mascota\n";
        cout << "4 - Curar a tu mascota\n";
        cout << "5 - Estado de tu mascota\n";
        cout << "Elige una opción: \n";

        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Vuelve pronto!. \n";
            break;
        case 1:
            pet.Talk();
            break;
        case 2:
            pet.Eat();
            break;
        case 3:
            pet.Play();
            break;
        case 4:
            pet.Cure();
            break;
        case 5:
            pet.Stats();
            break;
        default:
            cout << "\nTu elección se inválida. \n";
        }

        pet.Death();

        if (pet.m_isDeath)
        {
            break;
        }


    } while (choice != 0);
}

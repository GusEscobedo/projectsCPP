#include <iostream>
#include <string>
using namespace std;

class Move {
public:
    string name;
    bool isSpecial;
    float power;
    float accurracy;

    /*Move(string Name, bool IsSpecial, float Power, float Accurracy) {
        name = Name;
        isSpecial = IsSpecial;
        power = Power;
        accurracy = Accurracy;
   }*/
};

class Pokemon {
public:
    string name;
    string surename;
    int level;
    float hp;
    void SetHp(float Hp);
    float maxHp;
    void SetMaxHp(float MaxHp);
    float attack;
    void SetAttack(float Attack);
    float defense;
    void SetDefense(float Defense);
    float spAttack;
    void SetSpAttack(float SpAttack);
    float spDefense;
    void SetSpDefense(float SpDefense);
    float speed;
    void SetSpeed(float Speed);
    Move move1;
    Move move2;
    float xp;

    /*Pokemon(string Name, string Surename, int Level, float Hp, float Attack, float Defense, float SpAttack, float SpDefense, float Speed, Move Move1, Move Move2, float Xp) {
        name = Name;
        surename = Surename;
        level = Level;
        hp = Hp;
        defense = Defense;
        spAttack = SpAttack;
        spDefense = SpDefense;
        speed = Speed;
        move1 = Move1;
        move2 = move2;
        xp = Xp;

    }*/
};

void Pokemon::SetHp(float Hp)
{
    hp = Hp;
}
void Pokemon::SetMaxHp(float MaxHp)
{
    maxHp = MaxHp;
}
void Pokemon::SetAttack(float Attack)
{
    attack = Attack;
}
void Pokemon::SetDefense(float Defense)
{
    defense = Defense;
}
void Pokemon::SetSpAttack(float SpAttack)
{
    spAttack = SpAttack;
}
void Pokemon::SetSpDefense(float SpDefense)
{
    spDefense = SpDefense;
}
void Pokemon::SetSpeed(float Speed)
{
    speed = Speed;
}

class Player {
public:
    Pokemon poke1;

    void SetPokemon(Pokemon Poke1);
};

void Player::SetPokemon(Pokemon Poke1)
{
    poke1 = Poke1;
}

/*void CalculateStats(Pokemon pokemon); */

int main()
{

    //Move VineWhip("Vine Whip", false, 45, 100);
    Move VineWhip;
    VineWhip.name = "Vine Whip";
    VineWhip.isSpecial = false;
    VineWhip.power = 45;
    VineWhip.accurracy = 100;

    //Move Ember("Ember", true, 40, 100);
    Move Ember;
    Ember.name = "Ember";
    Ember.isSpecial = true;
    Ember.power = 40;
    Ember.accurracy = 100;

    //Move Tackle("Tackle", false, 40, 100);
    Move Tackle;
    Tackle.name = "Tackle";
    Tackle.isSpecial = false;
    Tackle.power = 40;
    Tackle.accurracy = 100;

    //Move
    Move Scratch;
    Scratch.name = "Scratch";
    Scratch.isSpecial = false;
    Scratch.power = 40;
    Scratch.accurracy = 100;

    Pokemon Bulbasaur;
    Bulbasaur.name = "Bulbasaur";
    Bulbasaur.level = 3;
    Bulbasaur.maxHp = 45;
    Bulbasaur.attack = 49;
    Bulbasaur.defense = 49;
    Bulbasaur.spAttack = 65;
    Bulbasaur.spDefense = 65;
    Bulbasaur.speed = 45;
    Bulbasaur.move1 = VineWhip;
    Bulbasaur.move2 = Tackle;
    Bulbasaur.xp = 0;

    Pokemon Charmander;
    Charmander.name = "Charmander";
    Charmander.level = 3;
    Charmander.maxHp = 39;
    Charmander.attack = 52;
    Charmander.defense = 43;
    Charmander.spAttack = 60;
    Charmander.spDefense = 50;
    Charmander.speed = 65;
    Charmander.move1 = Ember;
    Charmander.move2 = Scratch;
    Charmander.xp = 0;

    Player P1;
    Player P2;

    int select;
    string SN;
    bool isP1Turn, Battle=true;

    cout << "Jugador 1 elige tu Pokemon: \n 1) Bulbasaur. \n 2) Charmander." << endl;
    cin >> select;

    switch (select)
    {
    
        case 1:
            P1.SetPokemon(Bulbasaur);

        case 2:
            P2.SetPokemon(Charmander);

    }

    cout << "Elige un apodo para tu pokemon: ";
    cin >> SN;
    P1.poke1.surename = SN;
    cout << endl;
    
    cout << "Jugador 2 elige tu Pokemon: \n 1) Bulbasaur. \n 2) Charmander." << endl;
    cin >> select;

    switch (select)
    {

        case 1:
            P2.poke1 = Bulbasaur;

        case 2:
            P2.poke1 = Charmander;

    }
    cout << "Elige un apodo para tu pokemon: ";
    cin >> SN;
    P2.poke1.surename = SN;
    cout << endl;

    P1.poke1.hp = P1.poke1.maxHp;
    P2.poke1.hp = P2.poke1.maxHp;
    
    if (P1.poke1.speed >= P2.poke1.speed)
    {
        isP1Turn = true;
    }
    else
    {
        isP1Turn = false;
    }

    while (Battle)
    {
        if(P1.poke1.hp <= 0)
        {
            Battle=false;
            break;
        }
        if(P2.poke1.hp <= 0)
        {
            Battle=false;
            break;
        }
        
        //cout<<isP1Turn<<endl;

        if (isP1Turn)
        {
            cout<<"Turno de Jugador 1"<<endl;
            cout << P1.poke1.surename << " Poke: "<< P1.poke1.name << " Hp: " << P1.poke1.hp << "/" << P1.poke1.maxHp << " vs " << P2.poke1.surename << " Poke: "<< P2.poke1.name << " Hp:" << P2.poke1.hp << "/" << P2.poke1.maxHp << endl;
            cout << "Elige tu siguiente movimiento: \n 1) " << P1.poke1.move1.name << "\n 2) " << P1.poke1.move2.name << endl;
            cin >> select;
            isP1Turn = false;

            switch (select)
            {
                case 1:
                    if (P1.poke1.move1.isSpecial)
                    {
                        float a = ((2 * P1.poke1.level) / 10) + 2;
                        float d = ((a + P1.poke1.move1.power + P1.poke1.spAttack) / 100) + 2;
                        float hp = P2.poke1.hp - d;
                        P2.poke1.SetHp(hp);
                    }
                    else
                    {
                        float a = ((2 * P1.poke1.level) / 10) + 2;
                        float d = ((a + P1.poke1.move1.power + P1.poke1.attack) / 100) + 2;
                        float hp = P2.poke1.hp - d;
                        P2.poke1.SetHp(hp);
                    }
                case 2:
                    if (P1.poke1.move2.isSpecial)
                    {
                        float a = ((2 * P1.poke1.level) / 10) + 2;
                        float d = ((a + P1.poke1.move2.power + P1.poke1.spAttack) / 100) + 2;
                        float hp = P2.poke1.hp - d;
                        P2.poke1.SetHp(hp);
                    }
                    else
                    {
                        float a = ((2 * P1.poke1.level) / 10) + 2;
                        float d = ((a + P1.poke1.move2.power + P1.poke1.attack) / 100) + 2;
                        float hp = P2.poke1.hp - d;
                        P2.poke1.SetHp(hp);
                    }
            
            }
        }
        else
        {
            cout<<"Turno de Jugador 2"<<endl;
            cout << P1.poke1.surename << " Poke: " << P1.poke1.name << " Hp: " << P1.poke1.hp << "/" << P1.poke1.maxHp << " vs " << P2.poke1.surename << " Poke: " << P2.poke1.name << " Hp:" << P2.poke1.hp << "/" << P2.poke1.maxHp << endl;
            cout << "Elige tu siguiente movimiento: \n 1) " << P2.poke1.move1.name << "\n 2) " << P2.poke1.move2.name << endl;
            cin >> select;
            isP1Turn = true;

            switch (select)
            {
            case 1:
                if (P2.poke1.move1.isSpecial)
                {
                    float a = ((2 * P2.poke1.level) / 10) + 2;
                    float d = ((a + P2.poke1.move1.power + P2.poke1.spAttack) / 100) + 2;
                    float hp = P1.poke1.hp - d;
                    P1.poke1.SetHp(hp);
                }
                else
                {
                    float a = ((2 * P2.poke1.level) / 10) + 2;
                    float d = ((a + P2.poke1.move1.power + P2.poke1.attack) / 100) + 2;
                    float hp = P1.poke1.hp - d;
                    P1.poke1.SetHp(hp);
                }
            case 2:
                if (P2.poke1.move2.isSpecial)
                {
                    float a = ((2 * P2.poke1.level) / 10) + 2;
                    float d = ((a + P2.poke1.move2.power + P2.poke1.spAttack) / 100) + 2;
                    float hp = P1.poke1.hp - d;
                    P1.poke1.SetHp(hp);
                }
                else
                {
                    float a = ((2 * P2.poke1.level) / 10) + 2;
                    float d = ((a + P2.poke1.move2.power + P2.poke1.attack) / 100) + 2;
                    float hp = P1.poke1.hp - d;
                    P1.poke1.SetHp(hp);
                }

            }
        }
    }
    
    cout << P1.poke1.surename << " Poke: "<< P1.poke1.name << " Hp: " << P1.poke1.hp << "/" << P1.poke1.maxHp << " vs " << P2.poke1.surename << " Poke: "<< P2.poke1.name << " Hp:" << P2.poke1.hp << "/" << P2.poke1.maxHp << endl;
    cout<<"\nFin de la batalla"<<endl;
}

void CalculateStats(Pokemon pokemon)
{

    float maxHp = ((pokemon.maxHp * pokemon.level / 100) + 10)+pokemon.maxHp;
    pokemon.SetMaxHp(maxHp);
    //cout << "Max Hp: " << pokemon.maxHp << endl;
    pokemon.SetHp(maxHp);
    //cout << "Hp: " << pokemon.hp << endl;
    float attack = ((pokemon.attack * pokemon.level / 100) + 5)+pokemon.attack;
    pokemon.SetAttack(attack);
    float defense = ((pokemon.defense * pokemon.level / 100) + 5)+pokemon.defense;
    pokemon.SetDefense(defense);
    float spAttack = ((pokemon.spAttack * pokemon.level / 100) + 5)+pokemon.spAttack;
    pokemon.SetSpAttack(spAttack);
    float spDefense = ((pokemon.spDefense * pokemon.level / 100) + 5)+pokemon.spDefense;
    pokemon.SetSpDefense(spDefense);
    float speed = ((pokemon.speed * pokemon.level / 100) + 5)+pokemon.speed;
    pokemon.SetSpeed(speed);

}

#pragma once

#include <string>
#include <vector>
#include <memory>
#include <iostream>

#include "Item.h"

struct Character
{
    Character(int hp, int armor_, int attackDamage_ );
    virtual ~Character() { }
    
    /*
     a pure virtual getName function.
     derived class stores the name, not the base class.
     */
    
    virtual const std::string& getName() = 0;
    std::string getStats();
    
    virtual void attack( Character& other );
    void defend();
    
    void help( Character& other );
    
    int takeDamage(int damage);

    void printStats();
    
    inline int getHP() const { return hitPoints; }
    inline int getArmorLevel() const { return armor; }
    inline int getAttackDamage() const { return attackDamage; }
    inline bool getIsDefending() const { return isDefending; }

    
    inline const std::vector<std::unique_ptr<Item>>& getHelpfulItems() const { return helpfulItems; }
    inline const std::vector<std::unique_ptr<Item>>& getDefensiveItems() const { return defensiveItems; }
    
    inline void boostArmor( int amount )
    {
        armor += amount;
        std::cout << getName() << "'s armor level has been boosted to " << armor << std::endl;
    }
    
    inline void boostHitPoints( int amount )
    {
        hitPoints += amount;
        std::cout << getName() << "'s hit point level has been boosted to " << hitPoints << std::endl;
    }
    
    inline void boostAttackDamage( int amount )
    {
        attackDamage += amount;
        std::cout << getName() << "'s attack damage level has been boosted to " << attackDamage << std::endl;
    }

    inline void resetAttackDamage()
    {
        attackDamage = *initialAttackDamage;
        std::cout << getName() << "'s attack damage level has been reseted to " << attackDamage << std::endl;
    }

/*
    void printStats()
    {
        std::cout << getName() << "'s stats: " << std::endl;
        std::cout << getStats(); //make your getStats() use a function from the Utility.h
        
        std::cout << std::endl;
        std::cout << std::endl;
    }
*/
protected:
    std::vector<std::unique_ptr<Item>> defensiveItems;
    std::vector<std::unique_ptr<Item>> helpfulItems;
    int hitPoints, armor;
    int attackDamage;
    bool isDefending = false;
private:
    std::unique_ptr<int> initialHitPoints, initialArmorLevel, initialAttackDamage;
    
    void attackInternal(Character& other);
};

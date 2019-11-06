#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

namespace chapt2_3
{
class Person
{
public:
    Person(std::string name, std::string birthday, std::string blood_type);

    void setAge(int age) { _val_age = age; }
    int getAge() { return _val_age; }

    void setMoney(double money) { _val_money = money; }
    double getMoney(){ return _val_money;}

    void setPower(int power) { _val_power = power; }
    int getPower() { return _val_power; }

    void setIQ(int iq){ _val_iq = iq;}
    int getIQ(){ return _val_iq;}

    void setCharm(int charm){ _val_charm = charm;}
    int getCharm(){ return _val_charm;}

    void setTemperament(int temperament){ _val_temperament = temperament;}
    int getTemperament(){ return _val_temperament;}
    

private:
    static const int DefaultAge = 1;

    std::string _val_name;
    std::string _val_birthday;
    std::string _val_constellation;
    std::string _val_blood_type;
    int _val_age;
    double _val_money;

    int _val_power;
    int _val_iq;
    int _val_charm;
    int _val_moral;
    int _val_temperament;
};
} // namespace chapt2_3

#endif //
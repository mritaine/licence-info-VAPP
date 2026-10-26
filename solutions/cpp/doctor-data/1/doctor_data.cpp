#include "doctor_data.h"
#include <string>

namespace heaven{
    Vessel::Vessel(std::string name, int generation, star_map::System le_system)
        : m_name(name), generation(generation), current_system(le_system), busters(0)
    {
        
    }
    Vessel Vessel::replicate(std::string name){
        int new_gen = generation + 1;
        return Vessel( name, new_gen, current_system);
    }
    void Vessel::make_buster(){
        busters ++;
    }
    bool Vessel::shoot_buster(){
        if (busters > 0){
            busters --;
            return true;
        }
        return false;
    }
    std::string get_older_bob(Vessel name1, Vessel name2){
        if (name1.generation < name2.generation){
            return name1.m_name;
        }
        else {
            return name2.m_name;
        }
    }
    bool in_the_same_system(Vessel name1, Vessel name2){
        return name1.current_system == name2.current_system;
    }
}
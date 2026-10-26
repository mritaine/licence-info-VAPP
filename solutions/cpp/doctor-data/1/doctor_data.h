#pragma once
#include <string>

namespace star_map{
    enum class System{
        Unknown,
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        Omicron2Eridani,
        DeltaEridani
    };
}

namespace heaven{
    class Vessel {
        private :
            
        public :
            std::string m_name;
            int generation;
            star_map::System current_system;
            int busters;
            Vessel(std::string name, int number, star_map::System le_system = star_map::System::Sol );
            Vessel replicate(std::string name);
            void make_buster();
            bool shoot_buster();
    };
    std::string get_older_bob(Vessel name1, Vessel name2);
    bool in_the_same_system(Vessel name1, Vessel name2);
}
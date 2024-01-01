//
// Created by Kilian LEFEVRE on 01/01/2024.
//
#ifndef C__DOCTOR_DATA_H
#define C__DOCTOR_DATA_H
#include <string>
namespace star_map {
    enum class System {
        BetaHydri,
        EpsilonEridani,
        Sol,
        AlphaCentauri,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        std::string name;
        int generation;
        star_map::System current_system = star_map::System::Sol;
        int busters = 0;
        Vessel (std::string new_name, int new_generation);
        Vessel (std::string new_name, int new_generation, star_map::System new_system);
        Vessel replicate (std::string new_name);
        void make_buster();
        bool shoot_buster();
    };
    std::string get_older_bob(Vessel vessel1, Vessel vessel2);
    bool in_the_same_system(Vessel vessel1, Vessel vessel2);
}
#endif //C___DOCTOR_DATA_H

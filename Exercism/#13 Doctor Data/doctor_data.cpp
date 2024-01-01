//
// Created by Kilian LEFEVRE on 01/01/2024.
//

#include "doctor_data.h"

heaven::Vessel::Vessel (std::string new_name, int new_generation) {
    this->name = new_name;
    this->generation = new_generation;
}

heaven::Vessel::Vessel (std::string new_name, int new_generation, star_map::System new_system) {
    this->name = new_name;
    this->generation = new_generation;
    this->current_system = new_system;
}

heaven::Vessel heaven::Vessel::replicate (std::string new_name) {
    heaven::Vessel result{new_name, this->generation+1, this->current_system};
    return result;
}

void heaven::Vessel::make_buster() {
    this->busters++;
}

bool heaven::Vessel::shoot_buster() {
    if (this->busters <= 0) {
        return false;
    }
    this->busters--;
    return true;
}

std::string heaven::get_older_bob(Vessel vessel1, Vessel vessel2) {
    if (vessel1.generation < vessel2.generation) {
        return vessel1.name;
    }
    return vessel2.name;
}


bool heaven::in_the_same_system(Vessel vessel1, Vessel vessel2) {
    return vessel1.current_system == vessel2.current_system;
}
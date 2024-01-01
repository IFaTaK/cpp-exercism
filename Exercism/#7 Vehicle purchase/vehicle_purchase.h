//
// Created by Kilian LEFEVRE on 01/01/2024.
//
#pragma once

#include <string>

namespace vehicle_purchase {

    bool needs_license(std::string kind);
    std::string choose_vehicle(std::string option1, std::string option2);
    double calculate_resell_price(double original_price, double age);

}  // namespace vehicle_purchase


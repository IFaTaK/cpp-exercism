//
// Created by Kilian LEFEVRE on 01/01/2024.
//
// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>
#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // Implement a function to calculate the daily rate given an hourly
    // rate
    int hourly_to_daily = 8;
    return hourly_to_daily * hourly_rate;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // Implement a function to calculate the price after a discount.
    return before_discount - (discount/100)*before_discount;
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    // Implement a function to calculate the monthly rate, and apply a
    // discount.
    int daily_to_monthly = 22;
    return std::ceil(apply_discount(daily_to_monthly * daily_rate(hourly_rate), discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    double daily_rate_with_discount = apply_discount(daily_rate(hourly_rate), discount);
    return std::floor(budget/daily_rate_with_discount);
}
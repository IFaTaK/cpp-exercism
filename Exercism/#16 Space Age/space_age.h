//
// Created by Kilian LEFEVRE on 02/01/2024.
//

#ifndef C___SPACE_AGE_H
#define C___SPACE_AGE_H

namespace space_age {
    class space_age {
    private:
        long int age_second = 0;
    public:
        space_age(long int second);
        long int seconds() const;
        double on_mercury() const;
        double on_venus() const;
        double on_earth() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
    };
}  // namespace space_age

#endif //C___SPACE_AGE_H

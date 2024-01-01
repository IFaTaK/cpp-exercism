//
// Created by Kilian LEFEVRE on 01/01/2024.
//
namespace targets {
// Insert the code for the alien class here
    class Alien {
    public:
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health(){
            return health;
        }
        bool hit(){
            if (health != 0) {
                health--;
            }
            return true;
        }
        bool is_alive() {
            return health != 0;
        }
        bool teleport(int new_x, int new_y) {
            x_coordinate = new_x;
            y_coordinate = new_y;
            return true;
        }
        bool collision_detection(Alien other_alien) {
            return x_coordinate == other_alien.x_coordinate && y_coordinate == other_alien.y_coordinate;
        }
        int x_coordinate;
        int y_coordinate;
    private:
        int health = 3;
    };
}  // namespace targets
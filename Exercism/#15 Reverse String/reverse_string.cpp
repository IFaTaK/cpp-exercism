//
// Created by Kilian LEFEVRE on 02/01/2024.
//

#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string str) {
        int size = str.size();
        std::string reverse = str;
        for (int i = 0; i < size; i++) {
            reverse[i] = str[size - i - 1];
        }
        return reverse;
    }
}  // namespace reverse_string

//
// Created by Kilian LEFEVRE on 01/01/2024.
//
#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // Implement round_down_scores
    std::vector<int> round_down_scores = {};
    round_down_scores.reserve(student_scores.size());
    for (int i=0; i < student_scores.size(); i++) {
        round_down_scores.emplace_back(static_cast<int>(student_scores[i]));
    }
    return round_down_scores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // Implement count_failed_students
    int count = 0;
    for (int i=0; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40) {
            count++;
        }
    }
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // Implement above_threshold
    std::vector<int> above_threshold;
    for (int i=0; i< student_scores.size(); i++) {
        if (student_scores[i] >= threshold) {
            above_threshold.emplace_back(student_scores[i]);
        }
    }
    return above_threshold;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // Implement letter_grades
    std::array<int, 4> letter_grades = {41, 0, 0, 0};
    int distance_between_grades = (highest_score - 40)/4;
    for (int i = 1; i < 4; i++) {
        letter_grades[i] = letter_grades[i-1] + distance_between_grades;
    }
    return letter_grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // Implement student_ranking
    std::vector<std::string> student_ranking;
    student_ranking.reserve(student_scores.size());
    for (int i=0; i < student_scores.size(); i ++) {
        student_ranking.emplace_back(std::to_string(i+1) + ". " + student_names[i] + ": " +
                std::to_string(student_scores[i]));
    }
    return student_ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // Implement perfect_score
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] == 100) {
            return student_names[i];
        }
    }
    return "";
}

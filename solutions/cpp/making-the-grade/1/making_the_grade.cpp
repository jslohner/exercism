#include <algorithm>
#include <iostream>
#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded;
    for (auto score : student_scores) {
        rounded.push_back(static_cast<int>(score));
    }
    return rounded;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    return std::count_if(student_scores.begin(), student_scores.end(), [](int y){ return y <= 40; });
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int inc = (highest_score - 40) / 4;
    return {41, (41 + inc), (41 + (inc * 2)), (41 + (inc * 3))};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores,
    std::vector<std::string> student_names
) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking = {};
    for (int i = 0; i < student_scores.size(); i++) {
        ranking.push_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(
    std::vector<int> student_scores,
    std::vector<std::string> student_names
) {
    // TODO: Implement perfect_score
    const auto it = std::find(student_scores.begin(), student_scores.end(), 100);
    if (it != student_scores.end()) {
        size_t idx = std::distance(student_scores.begin(), it);
        return student_names[idx];
    }
    return "";
}

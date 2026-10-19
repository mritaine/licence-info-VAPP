#include <array>
#include <string>
#include <vector>
#include <format>
#include <iostream>
// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded {};
    for ( double note : student_scores ){
        rounded.push_back(static_cast<int>(note));
    }
    return rounded;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int pass_not = 0;
    for (int note : student_scores){
        if (note <= 40){
            pass_not += 1;
        }
    }
    return pass_not;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int,4> grades {41,0,0,0};
    int base = (highest_score - 40) / 4;
    grades.at(1) = 40 + base + 1;
    grades.at(2) = grades.at(1) + base ;
    grades.at(3) = grades.at(2) + base ;
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking*
    std::vector<std::string> full {};
    int index = 0;
    int index1 = 1;
    for (std::string name : student_names){
        student_names[index] = std::to_string(index1) + ". " +student_names[index] + ": " + std::to_string(student_scores[index]);
        index += 1;
        index1 += 1;
    }
    return student_names;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::string names = "";
    int index = 0;
    for (int score : student_scores){
        if (score == 100){
            names = student_names[index];
            return names;
        }
        index += 1;
    }
    // TODO: Implement perfect_score
    return names;
}

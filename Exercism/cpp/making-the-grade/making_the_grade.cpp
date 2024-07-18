#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> roundedDownScores;
    for (auto score: student_scores) {
        roundedDownScores.push_back(static_cast<int>(score));
    }

    return roundedDownScores;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failedStudents = 0;
    for (auto score: student_scores) {
        if (score <= 40) {
            failedStudents++;
        }
    }
    return failedStudents;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    std::vector<int> best;
    for (auto score: student_scores) {
        if (score >= threshold) {
            best.push_back(score);
        }
    }
    return best;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {

    int lowerThreshold = 40;
    int deltaGrades = highest_score - lowerThreshold;
    std::array<int, 4> lettersGrades;
    lettersGrades[0] = lowerThreshold + 1;
    lettersGrades[1] = lowerThreshold + deltaGrades * 0.25 + 1;
    lettersGrades[2] = lowerThreshold + deltaGrades * 0.5 + 1;
    lettersGrades[3] = lowerThreshold + deltaGrades * 0.75 + 1;


    return lettersGrades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking;
    for (int i = 0; i < student_scores.size(); i++) {
        ranking.push_back(
                std::to_string(i + 1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i)));
    }

    return ranking;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    for (int i = 0; i < student_scores.size(); i++) {
        if(student_scores.at(i)==100){
            return student_names.at(i);
        }
    }
    return "";
}

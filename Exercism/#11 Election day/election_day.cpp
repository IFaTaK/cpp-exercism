//
// Created by Kilian LEFEVRE on 01/01/2024.
//
#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

    struct ElectionResult {
        // Name of the candidate
        std::string name{};
        // Number of votes the candidate has
        int votes{};
    };

// Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
int vote_count(ElectionResult& result) {
    return result.votes;
}

// Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
void increment_vote_count(ElectionResult& result, int votes) {
    result.votes += votes;
}

// Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.
ElectionResult& determine_result (std::vector<ElectionResult>& final_count){
    int max_votes = 0;
    int idx_max_votes = 0;
    for (int i = 0; i < final_count.size(); i++){
        if (final_count[i].votes > max_votes) {
            max_votes = final_count[i].votes;
            idx_max_votes = i;
        }
    }
    final_count[idx_max_votes].name = "President " + final_count[idx_max_votes].name;
    return final_count[idx_max_votes];
}

}  // namespace election
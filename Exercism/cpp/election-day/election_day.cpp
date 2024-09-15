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

int vote_count(const ElectionResult& electionResult){
    return electionResult.votes;
}


void increment_vote_count(ElectionResult(& electionResult), int numberOfVotes){
    electionResult.votes += numberOfVotes;
}

ElectionResult& determine_result(std::vector<ElectionResult>& finalCount){

    ElectionResult* winningElection = &finalCount[0];

    for (auto& election : finalCount) {
        if(winningElection->votes < election.votes)
            winningElection = &election;
    }

    winningElection->name = "President "+winningElection->name;

    return *winningElection;
};

// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.


}  // namespace election
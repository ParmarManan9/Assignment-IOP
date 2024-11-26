//An election is contested by 5 candidates. The candidate is numbered are 1 to 5 and the voting is done by marking the candidate number on the ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array variable count. In case, a number, read is outside the range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots
#include <stdio.h>

int main() {
    int votes[5] = {0}; // Array to store votes for each candidate (1 to 5)
    int spoiltBallots = 0; // Counter for spoilt ballots
    int ballot;
    int numBallots;

    printf("Enter the number of ballots: ");
    scanf("%d", &numBallots);

    printf("Enter the votes (1-5) on each ballot:\n");

    for (int i = 0; i < numBallots; i++) {
        printf("Ballot %d: ", i + 1);
        scanf("%d", &ballot);

        if (ballot >= 1 && ballot <= 5) {
            votes[ballot - 1]++; // Increment the vote for the valid candidate
        } else {
            spoiltBallots++; // Increment the spoilt ballots count
        }
    }

    // Display the results
    printf("\nVote count for each candidate:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
    printf("Spoilt ballots: %d\n", spoiltBallots);

    return 0;
}

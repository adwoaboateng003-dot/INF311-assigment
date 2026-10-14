#include <iostream>
#include <string>
using namespace std;

// Structure to hold player data
struct Player {
    string name;
    int score;
};

// Function to display the leaderboard array
void displayLeaderboard(Player players[], int size) {
    cout << "\n--- GAME LEADERBOARD (ARRAY) ---\n";
    for (int i = 0; i < size; i++) {
        cout << "Rank " << (i + 1) << ": " << players[i].name 
             << " - " << players[i].score << " points\n";
    }
    cout << "--------------------------------\n";
}

int main() {
    const int CAPACITY = 5;
    // Fixed-size array storing Player objects
    Player leaderboard[CAPACITY] = {
        {"Alice", 2500},
        {"Bob", 2100},
        {"Charlie", 1800},
        {"Diana", 1500},
        {"Ethan", 1200}
    };

    cout << "Initial Leaderboard loaded using an array:\n";
    displayLeaderboard(leaderboard, CAPACITY);

    // Demonstrating array index access (O(1) lookup)
    cout << "\nTop player at Index [0]: " << leaderboard[0].name << " with " << leaderboard[0].score << " pts\n";

    return 0;
}
//
// Created by RMDY on 14/11/2024.
//

#ifndef AOC_H
#define AOC_H

class Santa {
public:
    int calculateFloorBasedOnInput(string input);
    int calculateFirstEncounterWithBasement(string input);
};

int Santa::calculateFloorBasedOnInput(string input) {
    int count_of_opening = 0;
    int count_of_closing = 0;
    for (int counter = 0; counter < input.length(); counter++) {
        char i = input[counter];
        if (i == '(') {
            count_of_opening++;
        } else if (i == ')') {
            count_of_closing++;
        }
    }
    return count_of_opening - count_of_closing;
}

int Santa::calculateFirstEncounterWithBasement(string input) {
    int count_of_opening = 0;
    int count_of_closing = 0;
    const int BASEMENT = -1;
    for (int counter = 0; counter < input.length(); counter++) {
        char i = input[counter];
        if (i == '(') {
            count_of_opening++;
        } else if (i == ')') {
            count_of_closing++;
        }
        if (count_of_closing > count_of_opening && count_of_opening - count_of_closing == BASEMENT) {
            return counter + 1;
        }
    }
    return -1;
}


#endif //AOC_H

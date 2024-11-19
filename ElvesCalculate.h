//
// Created by RMDY on 14/11/2024.
//

#ifndef ELVESCALCULATE_H
#define ELVESCALCULATE_H


class ElvesCalculate {
    int calculateBox(int length, int height, int width) {
        int slack = 0;
        int SIDE_ONE = length * width;
        int SIDE_TW0 = width * height;
        int SIDE_THREE = height * length;
        if (SIDE_THREE > SIDE_ONE && SIDE_THREE > SIDE_TW0) {
            slack = SIDE_THREE;
        } else if (SIDE_TW0 > SIDE_ONE) {
            slack = SIDE_TW0;
        } else {
            slack = SIDE_ONE;
        }
        return (2 * SIDE_ONE) + (2 *SIDE_TW0) + (2 * SIDE_THREE) + slack;
    }
};


#endif //ELVESCALCULATE_H

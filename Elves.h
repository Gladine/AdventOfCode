//
// Created by RMDY on 14/11/2024.
//

#ifndef ELVESCALCULATE_H
#define ELVESCALCULATE_H


class Elves {
    static int getCubicFeetInVolume(int length, int height, int width);
    static int calculateRibbonToWrap(int length, int height, int width);
public:
    static int calculateBox(int length ,int height, int width);
    static int calculateRibbon(int length ,int height, int width);

};

inline int Elves::getCubicFeetInVolume(int length, int height, int width) {
    return (length * width * height);
}

inline int Elves::calculateRibbon(int length ,int height, int width) {
    return calculateRibbonToWrap(length,width,height) + getCubicFeetInVolume(length, height, width);
}

inline int Elves::calculateBox(int length, int height, int width) {
    int slack = 0;
    int SIDE_ONE = length * width;
    int SIDE_TW0 = width * height;
    int SIDE_THREE = height * length;
    if (SIDE_THREE < SIDE_ONE && SIDE_THREE < SIDE_TW0) {
        slack = SIDE_THREE;
    } else if (SIDE_TW0 < SIDE_ONE) {
        slack = SIDE_TW0;
    } else {
        slack = SIDE_ONE;
    }
    return (2 * SIDE_ONE) + (2 *SIDE_TW0) + (2 * SIDE_THREE) + slack;
}

inline int Elves::calculateRibbonToWrap(int length, int height, int width) {
    if(length >= width && length >= height) {
        return (width + width + height + height);
    } else if(width >= height) {
        return (length + length + height + height);
    } else {
        return (width + width + length + length);
    }
}


#endif //ELVESCALCULATE_H

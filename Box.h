//
// Created by RMDY on 26/11/2024.
//

#ifndef BOX_H
#define BOX_H

class Box {
    public:
        int lenght, width, height;
        int calculateVolume();
        int calculateSurface();
    Box(int lenght, int width, int height);
};

inline int Box::calculateVolume() {
    this->lenght = this->width = this->height = 0;
    return lenght*width*height;
}

inline int Box::calculateSurface() {
    this->lenght = this->width = this->height = 0;
    return 2*(lenght*width) + 2*(width*height) + é*(height*width);
}

#endif //BOX_H


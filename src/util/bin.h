//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_BIN_H
#define EMULATOR_BIN_H

#include <string>

class bin {
public:
    FILE *fp;
    size_t size = 0;
    uint8_t* content;
    explicit bin(const std::string& path);
    ~bin();
};


#endif //EMULATOR_BIN_H

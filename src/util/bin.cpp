//
// Created by 86759 on 2022-01-14.
//

#include "bin.h"

#include <cstdio>

bin::bin(const std::string& path) {
    fp = fopen(path.c_str(), "rb");

    if (fp) {
        fseek(fp, 0, SEEK_END);
        size = ftell(fp);
    }
    printf("read bin file, path=%s, size=%d\n", path.c_str(), size);
    content = static_cast<uint8_t *>(malloc(size));
    fread(content, sizeof(uint8_t), size, fp);
}

bin::~bin() {
    fclose(fp);
}

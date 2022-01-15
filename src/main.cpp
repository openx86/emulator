#include <cstdio>

#include "memory.h"
#include "util/bin.h"
//#include "execute.h"
#include "util/debug.h"

int main() {
    printf("OpenX86 Emulator\n");

    debug::dump();

//    memory::init(1024 * 1024 * 128);
//    uint8_t value[4] = {1,2,3,4};
//    memory::store(0x00000008, 4, value);

    const std::string bios_path(R"(../bios.bin)");

    const bin bios_bin(bios_path);

    memory::init(bios_bin.size);
    memory::store(0x00000000, bios_bin.size, bios_bin.content);

//    for (uint64_t i = 0; i < bios_bin.size; ++i) {
//        printf("0x%08X = 0x%08X\n", i, *memory::load(i));
//    }

//    getchar();

//    execute::execute();

    return 0;
}


//
// Created by 86759 on 2022-01-14.
//

#ifndef EMULATOR_DEFINITION_H
#define EMULATOR_DEFINITION_H

/*
To assist Intel386 DX users, the Intel386 DX after
reset holds a component identifier and a revision
identifier in its DX register. The upper 8 bits of DX
hold 03h as identification of the Intel386 DX component.
The lower 8 bits of DX hold an 8-bit unsigned
binary number related to the component revision
level. The revision identifier begins chronologically
with a value zero and is subject to change (typically
it will be incremented) with component steppings intended
to have certain improvements or distinctions
from previous steppings.
*/

#define STEPPING_ID 0x0300
#define INIT_DX 0x0000'0000 | STEPPING_ID

#endif //EMULATOR_DEFINITION_H

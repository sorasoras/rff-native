#include "tc_rt.h"

void fn_80296580(u32 param_1)
{
    if ((u32)rd8(param_1) == 0u) {
        wr8(0x8053df8du, rd8(param_1 + 1u));
        wr8(0x8053df8cu, rd8(param_1 + 2u));
        wr8(0x8053df8bu, rd8(param_1 + 3u));
        wr8(0x8053df8au, rd8(param_1 + 4u));
        wr8(0x8053df89u, rd8(param_1 + 5u));
        wr8(0x8053df88u, rd8(param_1 + 6u));
        return;
    }
    return;
}

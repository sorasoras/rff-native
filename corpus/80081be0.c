#include "tc_rt.h"

void fn_80081be0(void)
{
    u32 r4 = 0;
    r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
    if ((s32)r4 <= 0) {
        r4 = 0u;
    }
    if ((s32)r4 >= 65535) {
        r4 = 0xffffu;
    }
    if ((s32)r4 <= 0) {
        r4 = 0x64u;
    }
    r4 = r4 & 0xffffu;
    if (r4 >= (u32)rd16(0x8049908au)) {
        return;
    }
    if (r4 >= 0xffffu) {
        r4 = 0xffffu;
    }
    wr16(0x8049908au, (u16)r4);
    return;
}

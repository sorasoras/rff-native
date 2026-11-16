#include "tc_rt.h"

u32 fn_8017c1c0(void)
{
    u32 r3 = 0;
    r3 = 0u;
    if (rd32(0x8036f218u) == 0xffffffffu) {
        r3 = 1u;
    }
    if (rd32(0x8036f220u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f228u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f230u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f238u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f240u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f248u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f250u) == 0xffffffffu) {
        r3 = r3 + 1u;
    }
    if (rd32(0x8036f258u) == 0xffffffffu) {
        r3 = r3 + 1u;
        return r3;
    }
    return r3;
}

#include "tc_rt.h"

u32 fn_802c04f8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x2cu);
    if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
        return 0u;
    }
    r3 = rd32(r3 + 0xcu);
    if (r3 == 0u) {
        return 1u;
    }
    if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
        return 0u;
    }
    r3 = rd32(r3 + 0xcu);
    if (r3 == 0u) {
        return 1u;
    }
    if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
        return 0u;
    }
    r3 = rd32(r3 + 0xcu);
    if (r3 == 0u) {
        return 1u;
    }
    if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
        return 0u;
    }
    r3 = rd32(r3 + 0xcu);
    if (r3 == 0u) {
        return 1u;
    }
    if (((u32)rd8(r3 + 0xcfu) & 1u) == 0u) {
        return 0u;
    }
    r3 = rd32(r3 + 0xcu);
    if (r3 == 0u) {
        return 1u;
    }
    a.r[0] = r3;
    r3 = tc_call(0x802c03e4u, &a);
    return r3;
}

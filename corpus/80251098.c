#include "tc_rt.h"

void fn_80251098(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r7 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r7 = rd32(0x80576c88u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = param_3 & 0xfu;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr8(r7 + 0x250u, 0u);
    if (param_3 == 0x13u) {
        r31 = 0xbu;
    }
    c0lt = (s32)param_3 < 38;
    if (param_3 == 0x26u) {
        r29 = r7 + 0x24cu;
        wr32(r7 + 0x24cu, (rd32(r7 + 0x24cu) & 0xfffe7fffu) | 0x18000u);
    } else if (!c0lt || (s32)param_3 >= 4) {
        r29 = r7 + 0x24cu;
        wr32(r7 + 0x24cu, (rd32(r7 + 0x24cu) & 0xfffe7fffu) | 0x10000u);
    } else if ((s32)param_3 >= 0) {
        r29 = r7 + 0x24cu;
        wr32(r7 + 0x24cu, (rd32(r7 + 0x24cu) & 0xfffe7fffu) | 0x18000u);
    } else {
        r29 = r7 + 0x24cu;
        wr32(r7 + 0x24cu, (rd32(r7 + 0x24cu) & 0xfffe7fffu) | 0x10000u);
    }
    wr8(r7 + 0x250u, (u8)((param_3 >> 4u) & 1u));
    r28 = rd32(0x80576c88u);
    wr32(r29, (rd32(r29) & 0xfffffff7u) | (r31 & 8u));
    a.r[0] = param_3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = 0x817fdfe0u;
    a.r[4] = 0x817fdfdcu;
    a.r[5] = 0x817fdfd8u;
    (void)tc_call(0x8025207cu, &a);
    wr32(r28 + 0x248u, 0u);
    wr32(r28 + 0x248u, ((rd32(0x817fdfe0u) * rd32(0x817fdfd8u)) & 0x3ffu) | 0x4d000000u);
    wr32(r29, (((rd32(r29) & 0xfffffdffu) | ((param_4 << 9u) & 0x200u)) & 0xffffff8fu) | ((r31 << 4u) & 0x70u));
    return;
}

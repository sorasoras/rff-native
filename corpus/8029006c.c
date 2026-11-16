#include "tc_rt.h"

void fn_8029006c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = param_3;
    r31 = 0u;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0u;
    a.r[2] = 8u;
    (void)tc_call(0x8000443cu, &a);
    if ((u32)param_4 != 0u) {
        while (r30 != 0u && (r31 & 0xffu) < 0x17u) {
            r0 = r31 & 0xffu;
            r4 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            if ((r30 & r4) != 0u) {
                r30 = r30 & ~r4;
                r4 = rd32(((r31 << 2u) & 0x3fcu) - 0x7fcb7e00u);
                r6 = (r4 >> 3u) & 0x3fcu;
                r0 = r4 - (r4 & 0x1fe0u);
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = rd32(r6 - 0x7e802028u) | r0;
                wr32(r6 - 0x7e802028u, r0);
            }
            r31 = r31 + 1u;
        }
    }
    (void)tc_call(0x8028b6ccu, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0x817fdfd8u;
    a.r[5] = param_2;
    (void)tc_call(0x80294eb4u, &a);
    (void)tc_call(0x8028b6d0u, &a);
    return;
}

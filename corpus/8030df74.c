#include "tc_rt.h"

void fn_8030df74(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd8(param_1) == 0u) {
        r29 = param_2;
        r28 = 0u;
        r30 = (ppc_mulhwu(0xe6c2b449u, param_3) >> 8u) & 0xffffffu;
        if (r30 != 0u) {
            r31 = param_1 + 0x14u;
            while (r28 < r30) {
                r5 = r29;
                if (r29 != 0u) {
                    a.r[0] = r29;
                    r3 = tc_call(0x8030b420u, &a);
                    r5 = r3;
                }
                wr32(0x817fdfd8u, r31);
                r5 = r5 + 0x114u;
                a.r[0] = param_1 + 0x10u;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = r5;
                (void)tc_call(0x802deba4u, &a);
                r29 = r29 + 0x11cu;
                r28 = r28 + 1u;
            }
        }
        wr8(param_1, 1u);
    }
    return;
}

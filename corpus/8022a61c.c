#include "tc_rt.h"

void fn_8022a61c(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr16(0x817fdfbcu, (u16)param_1);
    wr16(0x817fdfbeu, 0x1e0u);
    wr16(0x817fdfc0u, (u16)param_2);
    wr16(0x817fdfc2u, 0x28u);
    wr16(0x817fdfc6u, 0x280u);
    wr16(0x817fdfc8u, (u16)param_2);
    r3 = tc_call(0x8023f4acu, &a);
    c0lt = (s32)r3 < 2;
    do {
        if (r3 != 2u) {
            if (!c0lt) {
                if (r3 == 5u) {
                    wr32(0x817fdfb8u, 0x14u);
                    wr16(0x817fdfc4u, 0u);
                    wr32(0x817fdfccu, 1u);
                    break;
                }
                break;
            }
            c0lt = (s32)r3 < 0;
            if (r3 != 0u) {
                if (!c0lt) {
                    wr32(0x817fdfb8u, 4u);
                    wr16(0x817fdfc4u, 0x2fu);
                    wr32(0x817fdfccu, 1u);
                    break;
                }
                break;
            }
        }
        if (((u32)rd16(0xcc00206cu) & 1u) == 0u) {
            wr32(0x817fdfb8u, 0u);
            wr16(0x817fdfc4u, 0u);
            wr32(0x817fdfccu, 1u);
        } else {
            wr32(0x817fdfb8u, 2u);
            wr16(0x817fdfc4u, 0u);
            wr32(0x817fdfccu, 0u);
        }
    } while (0);
    a.r[0] = 0x817fdfb8u;
    (void)tc_call(0x8023e748u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0x280u;
    a.r[3] = 0x1e0u;
    (void)tc_call(0x8023ee2cu, &a);
    return;
}

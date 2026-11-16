#include "tc_rt.h"

void fn_8009f318(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = param_2;
    r3 = tc_call(0x8009c814u, &a);
    f1 = tc_lastf();
    if ((u32)(s8)r3 != 0u) {
        wr32(0x817fdfdcu, param_1);
        r31 = 0u;
        wr32(0x817fdfe0u, param_2);
        while (r31 < rd32(0x817fdfd8u)) {
            wr32(0x817fdfe4u, r31);
            a.r[0] = rd32(param_1);
            a.r[1] = 0x817fdfdcu;
            a.r[2] = param_4;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(param_3, &a);
            f1 = tc_lastf();
            if ((u32)(s8)r3 != 0u) {
                return;
            }
            r31 = r31 + 1u;
        }
    }
    return;
}

#include "tc_rt.h"

u32 fn_800a4050(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (param_1 < 0) {
        r3 = 0x803540d0u;
    } else {
        (void)tc_call(0x80097da4u, &a);
        r3 = tc_call(0x8009a63cu, &a);
        if (param_1 >= (s32)r3) {
            r3 = 0x803540d0u;
        } else {
            if ((u32)param_1 == 0u) {
                r3 = 0x804990ccu;
            } else {
                r0 = (u32)rd8(0x8049912eu);
                if (r0 == 0x1eu) {
                    r0 = 1u;
                } else {
                    if (r0 == 0x1fu) {
                        r0 = 2u;
                    } else {
                        r0 = 0u;
                    }
                }
                if (r0 == 1u && (u32)param_1 == 0x1eu) {
                    r3 = 0x80499110u;
                } else {
                    if (r0 == 2u && (u32)param_1 == 0x1fu) {
                        r3 = 0x80499110u;
                    } else {
                        a.r[0] = 0x804ac83cu;
                        a.r[1] = (u32)param_1;
                        r3 = tc_call(0x801655e4u, &a);
                    }
                }
            }
        }
    }
    return r3;
}

#include "tc_rt.h"

u32 fn_80296a7c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r28 = 0;
    TcArgs a = {0};
    r28 = param_1;
    if (rd32(0x8053dec8u) != 0u) {
        r3 = 2u;
    } else {
        if ((u32)rd8(0x80540118u) >= 4u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0xd0003u;
            a.r[1] = 0x80393c4cu;
            a.r[2] = param_1;
            a.r[3] = (u32)param_4;
            a.r[4] = 0x8053d958u;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        if (param_1 > 0xbu) {
            r28 = 0xbu;
        }
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        if (r3 != 0u) {
            wr32(0x8053dec8u, (u32)param_4);
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = param_2;
            a.r[3] = param_3;
            (void)tc_call(0x802a129cu, &a);
            r3 = 0u;
        } else {
            r3 = 3u;
        }
    }
    return r3;
}

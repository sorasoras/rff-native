#include "tc_rt.h"

void fn_8028f344(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    if ((u32)rd8((u32)param_1 + 0xcu) == 0u) {
        a.r[0] = 0x8053d648u;
        (void)tc_call(0x8028d78cu, &a);
        return;
    }
    wr8(0x8053d660u, rd8((u32)param_1 + 8u));
    wr16(0x8053d664u, rd16((u32)param_1 + 0xau));
    if (((u32)rd8(0x8053d660u) & 1u) != 0u) {
        r29 = 0u;
        while ((r29 & 0xffu) < (u32)rd8(0x8053d641u)) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = ((r29 & 0xffu) * 0xbu) - 0x7fac2a0cu;
            a.r[1] = 0x8028f780u;
            f1 = tc_callf(0x8029472cu, &a);
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r29 = r29 + 1u;
        }
    }
    if (((u32)rd8(0x8053d660u) & 2u) != 0u) {
        r29 = 0u;
        while ((r29 & 0xffu) < (u32)rd8(0x8053d641u)) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = ((r29 & 0xffu) * 0xbu) - 0x7fac2a0cu;
            a.r[1] = 0x8028f7ecu;
            f1 = tc_callf(0x80294868u, &a);
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r29 = r29 + 1u;
        }
    }
    r0 = (u32)rd16(0x8053d664u);
    if (r0 != 0u) {
        wr32(0x8053d650u, 0x8028f380u);
        a.r[0] = 0x8053d648u;
        a.r[1] = 0u;
        a.r[2] = r0 * 0x3e8u;
        (void)tc_call(0x8028d76cu, &a);
    }
    return;
}

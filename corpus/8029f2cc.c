#include "tc_rt.h"

void fn_8029f2cc(u32 param_1, u32 param_2)
{
    u32 ctr = 0, fl_ = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x805401ccu;
    r5 = 0u;
    ctr = 2u;
    for (;;) {
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 0x60u;
        r5 = r5 + 1u;
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 0x60u;
        r5 = r5 + 1u;
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 0x60u;
        r5 = r5 + 1u;
        if ((u32)rd8(r31) != 0u && (u32)rd16(r31 + 6u) == param_1) {
            fl_ = 2u;
            break;
        }
        r5 = r5 + 1u;
        r31 = r31 + 0x60u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r31 = 0u;
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 2u) {
        fl_ = 0u;
    } else if (fl_ == 1u) {
        fl_ = 0u;
    }
    if (r31 != 0u) {
        if ((u32)rd8(r31) != 4u) {
            a.r[0] = param_2;
            (void)tc_call(0x8028a35cu, &a);
        } else {
            a.r[0] = r31 + 0x14u;
            a.r[1] = param_2;
            f1 = tc_callf(0x8028a77cu, &a);
            a.r[0] = (u32)rd16(r31 + 4u);
            a.r[1] = 0x102u;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(r31 + 0x20u), &a);
        }
    } else {
        a.r[0] = param_2;
        (void)tc_call(0x8028a35cu, &a);
    }
    return;
}

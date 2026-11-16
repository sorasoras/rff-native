#include "tc_rt.h"

u32 fn_8022beb8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)rd16(0x80570a78u);
    if (r0 == 0xffffu) {
        r0 = rd32(0x800000ccu);
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            r0 = ((u32)rd16(0xcc00206eu) >> 1u) & 1u;
            wr16(0x80570a78u, (u16)r0);
        } else {
            r0 = 0u;
            wr16(0x80570a78u, 0u);
        }
        r0 = r0 & 0xffffu;
        wr32(0x805714c8u, 0x8022b704u);
    }
    r0 = r0 & 0xffffu;
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (!c0lt) {
            if ((s32)r0 < 6) {
                wr32(0x805714d4u, (u32)param_1);
                r31 = (u32)param_1 + 0xf4020u;
                a.r[0] = r31;
                a.r[1] = 0u;
                a.r[2] = (u32)param_1;
                r3 = tc_call(0x8022b2dcu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r5 = rd32(0x805714d4u);
                r3 = rd32(r5 + 0x24u);
                r4 = r5 + r3;
                wr32(r5 + 0x24u, (r3 + 0x1fu) & 0xffffffe0u);
                r3 = rd32(0x805714d4u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3 + rd32(r3 + 0x24u);
                (void)tc_call(0x8022bc4cu, &a);
                r5 = rd32(0x805714d4u) + 0x20120u;
                wr32(0x805714d0u, r5);
                a.r[0] = r31;
                a.r[1] = 1u;
                a.r[2] = r5;
                r3 = tc_call(0x8022b2dcu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r5 = rd32(0x805714d0u);
                r3 = rd32(r5 + 0x24u);
                r4 = r5 + r3;
                wr32(r5 + 0x24u, (r3 + 0x1fu) & 0xffffffe0u);
                r3 = rd32(0x805714d0u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3 + rd32(r3 + 0x24u);
                (void)tc_call(0x8022bc4cu, &a);
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                wr32(0x805714d4u, (u32)param_1);
                a.r[0] = (u32)param_1 + 0x1d120u;
                a.r[1] = 0u;
                a.r[2] = (u32)param_1;
                r3 = tc_call(0x8022b2dcu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r5 = rd32(0x805714d4u);
                r3 = rd32(r5 + 0x24u);
                r4 = r5 + r3;
                wr32(r5 + 0x24u, (r3 + 0x1fu) & 0xffffffe0u);
                r3 = rd32(0x805714d4u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3 + rd32(r3 + 0x24u);
                (void)tc_call(0x8022bc4cu, &a);
            } else if (!c0lt) {
                wr32(0x805714d0u, (u32)param_1);
                a.r[0] = (u32)param_1 + 0xd3f00u;
                a.r[1] = 1u;
                a.r[2] = (u32)param_1;
                r3 = tc_call(0x8022b2dcu, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                r5 = rd32(0x805714d0u);
                r3 = rd32(r5 + 0x24u);
                r4 = r5 + r3;
                wr32(r5 + 0x24u, (r3 + 0x1fu) & 0xffffffe0u);
                r3 = rd32(0x805714d0u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3 + rd32(r3 + 0x24u);
                (void)tc_call(0x8022bc4cu, &a);
            }
        }
    }
    r3 = 1u;
    return r3;
}

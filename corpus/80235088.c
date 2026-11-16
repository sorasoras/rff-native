#include "tc_rt.h"

void fn_80235088(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x805715fcu) == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(0x80570ad0u);
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80226610u, &a);
        wr32(0x805715fcu, 1u);
        (void)tc_call(0x8023aca4u, &a);
        if (rd32(0x80571448u) == 0u && (u32)rd8(0x80003187u) == 0x80u) {
            r3 = tc_call(0x802de0e8u, &a);
            if (r3 == 0u) {
                a.r[0] = 0u;
                a.r[1] = 0x804e1040u;
                r3 = tc_call(0x802de330u, &a);
            }
            if (r3 == 0u) {
                a.r[0] = 0u;
                a.r[1] = 0x80571620u;
                r3 = tc_call(0x802de3d4u, &a);
            }
            if (r3 == 0u) {
                a.r[0] = 0x804e1140u;
                a.r[1] = 0x80571620u;
                (void)tc_call(0x802de3d4u, &a);
            }
            (void)tc_call(0x802de13cu, &a);
        }
        (void)tc_call(0x8023453cu, &a);
        (void)tc_call(0x80239aa4u, &a);
        wr32(0x80571630u, 0u);
        wr32(0x80571648u, 0x80000000u);
        wr32(0x8057164cu, 0x80000000u);
        a.r[0] = 0x805715a0u;
        (void)tc_call(0x8022efd4u, &a);
        (void)tc_call(0x8023cdb0u, &a);
        (void)tc_call(0x8023cdb8u, &a);
        r3 = rd32(rd32(0x80571648u) + 0x20u);
        if ((r3 + 0x1ae00000u) != 0x7c22u && (r3 - 0xd150000u) != 0xea5eu) {
            wr32(0x805715dcu, 1u);
        }
        a.r[0] = 0x804e5e80u;
        a.r[1] = 0u;
        a.r[2] = 0x80u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = 0x804e5e80u;
        a.r[1] = 0x80000000u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        wr8(0x804e5e84u, rd8(0x80000006u));
        wr8(0x804e5e85u, rd8(0x80000007u));
        wr32(0x805715f8u, 0u);
        a.r[0] = 1u;
        (void)tc_call(0x8023a7c0u, &a);
    }
    return;
}

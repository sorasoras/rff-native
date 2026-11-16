#include "tc_rt.h"

void fn_80285e94(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r8 = 0, r9 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = (u32)rd8(0x8050f10fu);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r3 = tc_call(0x80285d80u, &a);
        wr8(0x8050f10fu, (u8)r3);
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            if ((u32)rd8(0x8050f10eu) != 0u) {
                r0 = 2u;
            } else {
                a.r[0] = 0x8050f810u;
                (void)tc_call(0x80226a70u, &a);
                a.r[0] = 0x817fdfe8u;
                (void)tc_call(0x802965c8u, &a);
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                if (((u32)rd16(0x817fdfeau) & 0xfffu) != 0xa7u) {
                    (void)tc_call(0x802877a8u, &a);
                } else {
                    f1 = tc_callf(0x80289ba4u, &a);
                    r9 = ((((((((u32)rd8(0x80391b8fu) << 8u) & 0xffffff00u) + (u32)rd8(0x80391b8eu)) << 8u) & 0xffffff00u) + (u32)rd8(0x80391b8du)) << 8u) & 0xffffff00u;
                    r8 = r9 + (u32)rd8(0x80391b8cu);
                    r0 = (((((((((u32)rd8(0x80391b93u) << 8u) & 0xffffff00u) + (u32)rd8(0x80391b92u)) << 8u) & 0xffffff00u) + (u32)rd8(0x80391b91u)) << 8u) & 0xffffff00u) + (u32)rd8(0x80391b90u);
                    wr32(0x80571b3cu, r8);
                    wr32(0x80571b44u, r0);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xfc4fu;
                    a.r[1] = 1u;
                    a.r[2] = 0x80571b38u;
                    a.r[3] = 0x8028732cu;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = 0x80391b8cu;
                    (void)tc_call(0x802966ccu, &a);
                }
                r0 = 4u;
            }
            wr8(0x8050f10fu, (u8)r0);
        }
    } else if ((s32)r0 >= 1) {
        if (rd32(0x8050f840u) == 1u) {
            wr8(0x8050f10eu, 1u);
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0u;
            a.r[1] = 0x80288fb8u;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x802969a4u, &a);
        }
        wr8(0x8050f10fu, 2u);
    }
    return;
}

#include "tc_rt.h"

static void px_rec(u32 sp_, u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r11 = 0, r27 = 0, r30 = 0, r31 = 0, t0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x80u, sp_);
    r1 = sp_ - 0x80u;
    wr32(r1 + 0x84u, 0x817ff000u);
    wrf64(r1 + 0x70u, 0.0);
    t0 = r1 + 0x78u;
    wrf32d(t0, 0.0);
    wrf32d(t0 + 4u, 0.0);
    r11 = r1 + 0x70u;
    wr32(r11 - 0x14u, 0u);
    wr32(r11 - 0x10u, 0u);
    wr32(r11 - 0xcu, 0u);
    wr32(r11 - 8u, 0u);
    wr32(r11 - 4u, 0u);
    if (param_r4 == 0u) {
        r3 = rd32(param_r3 + 0x161cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(param_r3 + 0x161cu, 0u);
        }
        r3 = rd32(param_r3 + 0x1620u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157e6cu, &a);
            wr32(param_r3 + 0x1620u, 0u);
        }
        wr32(param_r3 + 0x1644u, 0u);
    } else {
        px_rec(r1, param_r3, 0u);
        r0 = rd32(0x8057117cu);
        f0 = (f64)rdf32(0x80575830u);
        r27 = 0xffffffffu;
        r4 = rd32(0x8033aefcu);
        c0lt = (s32)r0 < 2;
        r5 = rd32(0x8033aef8u);
        r31 = 0xffffffffu;
        r3 = rd32(0x8033af00u);
        r30 = 0xffffffffu;
        wrf32d(r1 + 0x4cu, f0);
        f31 = (f64)rdf32(0x8057582cu);
        wrf32d(r1 + 0x48u, f0);
        wrf32d(r1 + 0x44u, f0);
        wr32(r1 + 0x38u, r5);
        wr32(r1 + 0x3cu, r4);
        wr32(r1 + 0x40u, r3);
        if (r0 == 2u) {
            r5 = rd32(0x8033af20u);
            r0 = rd32(0x8033af24u);
            wr32(r1 + 0x14u, rd32(0x8033af1cu));
            wr32(r1 + 0x18u, r5);
            wr32(r1 + 0x1cu, r0);
            a.r[0] = 0x201bu;
            r3 = tc_call(0x8014d9a4u, &a);
            r30 = 0x1bu;
            r27 = rd32(r1 + 0x14u + (((r3 - 1u) << 2u) & 0xfffffffcu));
            r31 = 0xc8u;
        } else if (!c0lt) {
            if ((s32)r0 < 9 && (s32)r0 < 4) {
                r5 = rd32(0x8033af2cu);
                r0 = rd32(0x8033af30u);
                wr32(r1 + 8u, rd32(0x8033af28u));
                wr32(r1 + 0xcu, r5);
                wr32(r1 + 0x10u, r0);
                a.r[0] = 0x2024u;
                r3 = tc_call(0x8014d9a4u, &a);
                r30 = 0x11u;
                r27 = rd32(r1 + 8u + (((r3 - 1u) << 2u) & 0xfffffffcu));
                r31 = 0xc9u;
                a.r[0] = 0x2011u;
                r3 = tc_call(0x8014d9a4u, &a);
                f31 = (f64)rdf32(r1 + 0x38u + (((r3 - 1u) << 2u) & 0xfffffffcu));
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r5 = rd32(0x8033af08u);
                r0 = rd32(0x8033af0cu);
                wr32(r1 + 0x2cu, rd32(0x8033af04u));
                wr32(r1 + 0x30u, r5);
                wr32(r1 + 0x34u, r0);
                a.r[0] = 0x2024u;
                r3 = tc_call(0x8014d9a4u, &a);
                r30 = 0x1bu;
                r27 = rd32(r1 + 0x2cu + (((r3 - 1u) << 2u) & 0xfffffffcu));
                r31 = 0xcau;
                a.r[0] = 0x2015u;
                r3 = tc_call(0x8014d9a4u, &a);
                f31 = (f64)rdf32(r1 + 0x38u + (((r3 - 1u) << 2u) & 0xfffffffcu));
            } else if (!c0lt) {
                r5 = rd32(0x8033af14u);
                r0 = rd32(0x8033af18u);
                wr32(r1 + 0x20u, rd32(0x8033af10u));
                wr32(r1 + 0x24u, r5);
                wr32(r1 + 0x28u, r0);
                a.r[0] = 0x2017u;
                r3 = tc_call(0x8014d9a4u, &a);
                r30 = 0x1bu;
                r27 = rd32(r1 + 0x20u + (((r3 - 1u) << 2u) & 0xfffffffcu));
                r31 = 0xc8u;
            }
        }
        if (r27 != 0xffffffffu && r31 != 0xffffffffu && r30 != 0xffffffffu) {
            a.r[0] = r27;
            r3 = tc_call(0x80077decu, &a);
            f1 = tc_lastf();
            if (r3 != 0u && (u32)((s32)rd32(r3 + 0x80u) >> 31) != 0u) {
                a.r[0] = r3;
                a.r[1] = r1 + 0x44u;
                a.r[2] = r31;
                a.r[3] = 0x804890c8u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
                if (r3 != 0u) {
                    a.f[0] = (f64)rdf32(0x8057582cu);
                    a.r[0] = r30;
                    a.r[1] = r1 + 0x44u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    r3 = tc_call(0x800d7768u, &a);
                    wr32(param_r3 + 0x161cu, r3);
                    a.f[0] = f31;
                    a.r[0] = r3;
                    (void)tc_call(0x80157f78u, &a);
                }
            }
        }
    }
    return;
}

void fn_801a06a0(u32 param_r3, u32 param_r4)
{
    px_rec(0x817fe000u, param_r3, param_r4);
}

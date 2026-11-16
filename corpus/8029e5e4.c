#include "tc_rt.h"

void fn_8029e5e4(void)
{
    u32 c0lt = 0, fl_ = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr16(0x8053d4b0u, 1u);
    a.r[0] = 0x8053d4a0u;
    r3 = tc_call(0x8028a9f8u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = 0x8053d4a0u;
        r3 = tc_call(0x8028ab80u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) == 0u) {
            a.r[0] = 0x8053d47cu;
            a.r[1] = 0x3cu;
            a.r[2] = 8u;
            f1 = tc_callf(0x8028d220u, &a);
        }
        r31 = r30 + (u32)rd16(r30 + 4u);
        r29 = ((u32)rd8(r31 + 8u) + (((u32)rd8(r31 + 9u) << 8u) & 0xffffff00u)) & 0xffffu;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x70001u;
        a.r[1] = 0x80394c70u;
        a.r[2] = r29;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc6cu, &a);
        c0lt = (s32)r29 < 1049;
        do {
            if (r29 != 0x419u) {
                if (!c0lt) {
                    c0lt = (s32)r29 < 2050;
                    if (r29 != 0x802u) {
                        if (!c0lt) {
                            if ((s32)r29 < 2055) break;
                        } else if ((s32)r29 >= 2049) {
                            break;
                        }
                    }
                } else {
                    c0lt = (s32)r29 < 1025;
                    if (r29 == 0x401u) break;
                    if (!c0lt) {
                        if (r29 == 0x405u) break;
                    } else if (r29 == 0xdu) {
                        break;
                    }
                }
                wr8(0x817fdfe8u, 0x1fu);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r29;
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 1u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8029e04cu, &a);
                fl_ = 1u;
                break;
            }
        } while (0);
        if (fl_ == 1u) {
            fl_ = 0u;
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29;
            a.r[1] = 0x1fu;
            a.r[2] = r31 + 0xau;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8029e2bcu, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x8028a35cu, &a);
        (void)tc_call(0x80296ee8u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x8029db78u, &a);
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x70001u;
        a.r[1] = 0x80394c50u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    }
    return;
}

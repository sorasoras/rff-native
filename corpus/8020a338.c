#include "tc_rt.h"

void fn_8020a338(void)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fddf0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32(0x805713f8u);
    c0lt = (s32)r0 < -10;
    do {
        if (r0 != 0xfffffff6u) {
            if (!c0lt) {
                c0lt = (s32)r0 < -4;
                if (r0 == 0xfffffffcu) {
                    a.r[0] = 9u;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    a.r[0] = 0x12u;
                    a.r[1] = 0x22u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = r3;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801f8638u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = 0u;
                    (void)tc_call(0x801f89b0u, &a);
                    wr32(0x805709f4u, 3u);
                    fl_ = 1u;
                    break;
                }
                if (!c0lt) {
                    if ((s32)r0 >= -1) break;
                    a.r[0] = 9u;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    a.r[0] = 0x12u;
                    a.r[1] = 0x25u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = r3;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801f8638u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = 0u;
                    (void)tc_call(0x801f89b0u, &a);
                    wr32(0x805709f4u, 3u);
                    fl_ = 1u;
                    break;
                }
                if ((s32)r0 < -5) {
                    if ((s32)r0 >= -8) break;
                    if (rd32(0x805709e0u) != 0u) {
                        a.r[0] = 8u;
                        a.r[1] = 0xbu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        a.r[0] = 0x12u;
                        a.r[1] = 0x14u;
                        a.r[2] = 0u;
                        r3 = tc_call(0x801412f8u, &a);
                        f1 = tc_lastf();
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x817fddf8u;
                        a.r[1] = 0x100u;
                        a.r[2] = r3;
                        a.r[3] = 2u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8025e640u, &a);
                        a.r[0] = rd32(0x805713f0u);
                        a.r[1] = 0x817fddf8u;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801f8638u, &a);
                        wr32(0x805709f4u, 4u);
                        fl_ = 1u;
                        break;
                    }
                    a.r[0] = 9u;
                    a.r[1] = 0xdu;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    a.r[0] = 0x12u;
                    a.r[1] = 0x1au;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = r3;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801f8638u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = 0u;
                    (void)tc_call(0x801f89b0u, &a);
                    wr32(0x805709f4u, 3u);
                    fl_ = 1u;
                    break;
                }
            } else {
                c0lt = (s32)r0 < -15;
                if (r0 != 0xfffffff1u) {
                    if (!c0lt) {
                        if ((s32)r0 >= -11) {
                            if (rd32(0x805709e0u) != 0u) {
                                a.r[0] = 8u;
                                a.r[1] = 0xbu;
                                a.r[2] = 0xdu;
                                (void)tc_call(0x80209b40u, &a);
                                a.r[0] = 0x12u;
                                a.r[1] = 0x17u;
                                a.r[2] = 0u;
                                r3 = tc_call(0x801412f8u, &a);
                                a.r[0] = rd32(0x805713f0u);
                                a.r[1] = r3;
                                a.r[2] = 0xffffffffu;
                                (void)tc_call(0x801f8638u, &a);
                                wr32(0x805709f4u, 4u);
                                fl_ = 1u;
                                break;
                            }
                            a.r[0] = 9u;
                            a.r[1] = 0xdu;
                            a.r[2] = 0xdu;
                            (void)tc_call(0x80209b40u, &a);
                            a.r[0] = 0x12u;
                            a.r[1] = 0x1bu;
                            a.r[2] = 0u;
                            r3 = tc_call(0x801412f8u, &a);
                            a.r[0] = rd32(0x805713f0u);
                            a.r[1] = r3;
                            a.r[2] = 0xffffffffu;
                            (void)tc_call(0x801f8638u, &a);
                            a.r[0] = rd32(0x805713f0u);
                            a.r[1] = 0u;
                            (void)tc_call(0x801f89b0u, &a);
                            wr32(0x805709f4u, 3u);
                            fl_ = 1u;
                            break;
                        }
                        break;
                    }
                    if (r0 == 0xffffffc0u) {
                        a.r[0] = 9u;
                        a.r[1] = 0xdu;
                        a.r[2] = 0xdu;
                        (void)tc_call(0x80209b40u, &a);
                        a.r[0] = 0x12u;
                        a.r[1] = 0x26u;
                        a.r[2] = 0u;
                        r3 = tc_call(0x801412f8u, &a);
                        a.r[0] = rd32(0x805713f0u);
                        a.r[1] = r3;
                        a.r[2] = 0xffffffffu;
                        (void)tc_call(0x801f8638u, &a);
                        a.r[0] = rd32(0x805713f0u);
                        a.r[1] = 0u;
                        (void)tc_call(0x801f89b0u, &a);
                        wr32(0x805709f4u, 3u);
                        fl_ = 1u;
                        break;
                    }
                    break;
                }
            }
            r0 = rd32(0x805709e0u);
            if (r0 != 0u) {
                if (r0 != 1u) {
                    a.r[0] = 8u;
                    a.r[1] = 0xau;
                    a.r[2] = 0xdu;
                    (void)tc_call(0x80209b40u, &a);
                    a.r[0] = 0x12u;
                    a.r[1] = 0x1eu;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    a.r[0] = rd32(0x805713f0u);
                    a.r[1] = r3;
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x801f8638u, &a);
                    wr32(0x805709f4u, 4u);
                    fl_ = 1u;
                    break;
                }
                a.r[0] = 0x12u;
                a.r[1] = 0x1du;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
                a.r[0] = rd32(0x805713f0u);
                a.r[1] = r3;
                a.r[2] = 0xffffffffu;
                (void)tc_call(0x801f8638u, &a);
                a.r[0] = 8u;
                a.r[1] = 3u;
                a.r[2] = 0xdu;
                (void)tc_call(0x80209b40u, &a);
                fl_ = 1u;
                break;
            }
            a.r[0] = 0x12u;
            a.r[1] = 0x1cu;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = rd32(0x805713f0u);
            a.r[1] = r3;
            a.r[2] = 0xffffffffu;
            (void)tc_call(0x801f8638u, &a);
            a.r[0] = 8u;
            a.r[1] = 3u;
            a.r[2] = 0xdu;
            (void)tc_call(0x80209b40u, &a);
            fl_ = 1u;
            break;
        }
    } while (0);
    if (fl_ == 1u) {
        fl_ = 0u;
    } else {
        a.r[0] = 9u;
        a.r[1] = 0xdu;
        a.r[2] = 0xdu;
        (void)tc_call(0x80209b40u, &a);
        a.r[0] = 0x12u;
        a.r[1] = 0x26u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = rd32(0x805713f0u);
        a.r[1] = r3;
        a.r[2] = 0xffffffffu;
        (void)tc_call(0x801f8638u, &a);
        a.r[0] = rd32(0x805713f0u);
        a.r[1] = 0u;
        (void)tc_call(0x801f89b0u, &a);
        wr32(0x805709f4u, 3u);
    }
    if ((rd32(0x805709f4u) - 3u) <= 1u) {
        a.r[0] = 1u;
        (void)tc_call(0x80059e34u, &a);
        r3 = tc_call(0x8003c20cu, &a);
        wr32(0x80571124u, r3);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        a.r[0] = r3;
        (void)tc_call(0x80035b6cu, &a);
    }
    return;
}

#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802dd6f4(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32(param_2 + 0xcu);
    r6 = (u32)rd8(r5);
    if (r6 >= 0x80u) {
        wr8(param_2 + 0x10u, (u8)r6);
        wr32(param_2 + 0xcu, r5 + 1u);
    }
    r0 = (u32)rd8(param_2 + 0x10u);
    c0lt = (s32)r0 < 247;
    do {
        if (r0 != 0xf7u) {
            if (!c0lt) {
                if (r0 == 0xffu) {
                    r3 = rd32(param_2 + 0xcu);
                    r0 = (u32)rd8(r3);
                    r3 = r3 + 1u;
                    c0lt = (s32)r0 < 81;
                    wr32(param_2 + 0xcu, r3);
                    if (r0 == 0x51u) {
                        r0 = (u32)rd8(r3);
                        for (;;) {
                            r0 = r0 & 0x80u;
                            if (r0 == 0u) break;
                            r3 = rd32(param_2 + 0xcu) + 1u;
                            wr32(param_2 + 0xcu, r3);
                            r0 = (u32)rd8(r3);
                        }
                        r3 = rd32(param_2 + 0xcu);
                        wr32(0x817fdfe0u, 0x43300000u);
                        r3 = r3 + 1u;
                        f6 = rdf64(0x80348b60u);
                        wr32(param_2 + 0xcu, r3);
                        r5 = r3 + 1u;
                        r6 = r5 + 1u;
                        f4 = (f64)rdf32(0x80348b50u);
                        r7 = (u32)rd8(r3);
                        wr32(0x817fdfe8u, 0x43300000u);
                        r7 = (r7 << 8u) & 0xffffff00u;
                        f2 = (f64)rdf32(0x80348b5cu);
                        wr32(param_2 + 0xcu, r5);
                        r9 = rd32(param_2);
                        r5 = (u32)rd8(r5);
                        f3 = rdf64(0x80348b68u);
                        wr32(param_2 + 0xcu, r6);
                        r5 = ((r7 + r5) << 8u) & 0xffffff00u;
                        f1 = (f64)rdf32(0x80348b58u);
                        f0 = (f64)rdf32(0x80348b54u);
                        r0 = r5 + (u32)rd8(r6);
                        wr32(param_2 + 0xcu, r6 + 1u);
                        wr32(0x817fdfe4u, r0);
                        f5 = (f64)(f32)px_fdiv(f4, (f64)(f32)(rdf64(0x817fdfe0u) - f6));
                        wrf32d(param_2 + 0x14u, f5);
                        wr32(0x817fdfecu, (u32)(s16)rd16(r9 + 0xau) ^ 0x80000000u);
                        f1 = (f64)(f32)px_fdiv(f1, (f64)(f32)px_fdiv((f64)(f32)px_fdiv(f2, f5), (f64)(f32)(rdf64(0x817fdfe8u) - f3)));
                        f1 = (f64)(f32)(f0 * f1);
                        a.f[0] = f1;
                        r3 = tc_call(0x802558e4u, &a);
                        wr32(param_2 + 0x1cu, r3);
                        fl_ = 1u;
                        break;
                    }
                    if (c0lt && r0 == 0x2fu) {
                        r5 = rd32(param_2);
                        wr32(r5 + 0xcu, rd32(r5 + 0xcu) - 1u);
                        wr32(param_2 + 0x24u, 0u);
                        if (rd32(r5 + 0xcu) != 0u) {
                            fl_ = 1u;
                            break;
                        }
                        wr32(r5 + 0x10u, 1u);
                        fl_ = 1u;
                        break;
                    }
                    r5 = (u32)rd8(rd32(param_2 + 0xcu));
                    r6 = r5 & 0x7fu;
                    while ((r5 & 0x80u) != 0u) {
                        r5 = rd32(param_2 + 0xcu) + 1u;
                        wr32(param_2 + 0xcu, r5);
                        r5 = (u32)rd8(r5);
                        r6 = ((r6 << 7u) & 0xffffff80u) + (r5 & 0x7fu);
                    }
                    wr32(param_2 + 0xcu, rd32(param_2 + 0xcu) + 1u + r6);
                    fl_ = 1u;
                    break;
                }
            } else if (r0 == 0xf0u) {
                break;
            }
            wr8(0x817fdfd8u, (u8)r0);
            r0 = (u32)rd8(r0 - 0x7fc637c0u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                wr8(0x817fdfd9u, rd8(rd32(param_2 + 0xcu)));
                wr32(param_2 + 0xcu, rd32(param_2 + 0xcu) + 1u);
            } else if (!c0lt && (s32)r0 < 3) {
                wr8(0x817fdfd9u, rd8(rd32(param_2 + 0xcu)));
                r5 = rd32(param_2 + 0xcu) + 1u;
                wr32(param_2 + 0xcu, r5);
                wr8(0x817fdfdau, rd8(r5));
                wr32(param_2 + 0xcu, rd32(param_2 + 0xcu) + 1u);
            }
            a.r[0] = param_1;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x802dc484u, &a);
            fl_ = 1u;
            break;
        }
    } while (0);
    if (fl_ == 1u) {
        fl_ = 0u;
    } else {
        r5 = (u32)rd8(rd32(param_2 + 0xcu));
        r6 = r5 & 0x7fu;
        while ((r5 & 0x80u) != 0u) {
            r5 = rd32(param_2 + 0xcu) + 1u;
            wr32(param_2 + 0xcu, r5);
            r5 = (u32)rd8(r5);
            r6 = ((r6 << 7u) & 0xffffff80u) + (r5 & 0x7fu);
        }
        wr32(param_2 + 0xcu, rd32(param_2 + 0xcu) + 1u + r6);
    }
    if (rd32(param_2 + 0xcu) >= rd32(param_2 + 8u)) {
        r4 = rd32(param_2);
        wr32(r4 + 0xcu, rd32(r4 + 0xcu) - 1u);
        wr32(param_2 + 0x24u, 0u);
        if (rd32(r4 + 0xcu) == 0u) {
            wr32(r4 + 0x10u, 1u);
        }
    }
    return;
}

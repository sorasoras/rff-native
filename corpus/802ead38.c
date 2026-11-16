#include "tc_rt.h"

void fn_802ead38(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r14 = 0, r15 = 0, r16 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1, 0x8039cfd0u);
    a.r[0] = param_1 + 4u;
    (void)tc_call(0x802ead18u, &a);
    a.r[0] = param_1 + 0x28u;
    a.r[1] = 0x802e6590u;
    a.r[2] = 0x800fe97cu;
    a.r[3] = 4u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x802eb6e4u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x802ec1f0u, &a);
    r14 = param_2 + 0x14u;
    r15 = param_1 + 0x10u;
    r16 = 0u;
    do {
        a.r[0] = r15;
        a.r[1] = r14;
        (void)tc_call(0x802eb39cu, &a);
        r16 = r16 + 1u;
        r15 = r15 + 8u;
        r14 = r14 + 8u;
    } while ((s32)r16 < 3);
    r14 = param_2 + 0x2cu;
    r15 = param_1 + 0x28u;
    r16 = 0u;
    do {
        a.r[0] = r15;
        a.r[1] = r14;
        (void)tc_call(0x802eb3c0u, &a);
        r16 = r16 + 1u;
        r15 = r15 + 4u;
        r14 = r14 + 4u;
    } while ((s32)r16 < 4);
    a.r[0] = param_2;
    a.r[1] = 0x40u;
    r3 = tc_call(0x802eb6dcu, &a);
    r28 = r3;
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3ccu, &a);
    r25 = ((r3 << 2u) & 0x3fcu) + 0x40u;
    a.r[0] = param_2;
    a.r[1] = r25;
    r3 = tc_call(0x802eb6d4u, &a);
    r24 = r3;
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3d8u, &a);
    r25 = r25 + ((r3 & 0xffu) * 0x14u);
    a.r[0] = param_2;
    a.r[1] = r25;
    r3 = tc_call(0x802eb6ccu, &a);
    r23 = r3;
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3e4u, &a);
    r25 = r25 + ((r3 << 2u) & 0x3fcu);
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3ccu, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    a.r[1] = 8u;
    r3 = tc_call(0x802eb6bcu, &a);
    r15 = r3;
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3d8u, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    a.r[1] = 0xau;
    r3 = tc_call(0x802eb6bcu, &a);
    wr32(0x817fdf9cu, r3);
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3e4u, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    a.r[1] = 8u;
    r3 = tc_call(0x802eb6bcu, &a);
    wr32(0x817fdfa0u, r3);
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3f0u, &a);
    r4 = r3 & 0xffu;
    wr8(0x817fdf9au, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb3fcu, &a);
    r4 = r3 & 0xffu;
    wr8(0x817fdf99u, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb408u, &a);
    wr8(0x817fdf98u, (u8)r3);
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb414u, &a);
    wr32(0x817fdfa4u, r3);
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb420u, &a);
    wr32(0x817fdfa8u, r3);
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb42cu, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    a.r[1] = 3u;
    r3 = tc_call(0x802eb6bcu, &a);
    r29 = r3;
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb438u, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    a.r[1] = 4u;
    r3 = tc_call(0x802eb6bcu, &a);
    r30 = r3;
    a.r[0] = param_2 + 0x3cu;
    r3 = tc_call(0x802eb444u, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    a.r[1] = 0x10u;
    r3 = tc_call(0x802eb6bcu, &a);
    r14 = r3;
    a.r[0] = param_1;
    a.r[1] = r15 & 0xffu;
    a.r[2] = rd32(0x817fdf9cu) & 0xffu;
    a.r[3] = rd32(0x817fdfa0u) & 0xffu;
    a.r[4] = r3 & 0xffu;
    a.r[5] = (u32)rd8(0x817fdf98u);
    a.r[6] = r30 & 0xffu;
    a.r[7] = r29 & 0xffu;
    (void)tc_call(0x802eb800u, &a);
    if (rd32(param_1 + 0x40u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = r15 & 0xffu;
        (void)tc_call(0x802ec22cu, &a);
        if ((r15 & 0xffu) != 0u) {
            a.r[0] = rd32(param_3);
            a.r[1] = 0xcu;
            r3 = tc_call(0x802eb6b4u, &a);
            r22 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x802ebf6cu, &a);
            r31 = r3;
            r16 = r15 & 0xffu;
            r21 = 0u;
            r20 = 0u;
            while ((r20 & 0xffu) < r16) {
                r15 = (r20 << 2u) & 0x3fcu;
                a.r[0] = r22;
                a.r[1] = rd32(r22 + (((u32)rd16(r28 + r15) << 3u) & 0xfffffff8u));
                r3 = tc_call(0x802eb6acu, &a);
                f1 = tc_lastf();
                r5 = r3;
                r3 = rd32(param_3 + 0xcu);
                a.r[0] = r3;
                a.r[1] = 0x74696d67u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
                f1 = tc_lastf();
                r26 = r31 + ((r21 & 0xffu) * 0x1cu);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r26;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802ed8b0u, &a);
                r27 = r28 + r15;
                a.r[0] = r27;
                r3 = tc_call(0x802eb470u, &a);
                r15 = r3;
                a.r[0] = r27;
                r3 = tc_call(0x802eb464u, &a);
                a.r[0] = r26;
                a.r[1] = r3;
                a.r[2] = r15;
                (void)tc_call(0x802eb450u, &a);
                a.r[0] = r27;
                r3 = tc_call(0x802eb4a4u, &a);
                r15 = r3;
                a.r[0] = r27;
                r3 = tc_call(0x802eb490u, &a);
                a.r[0] = r26;
                a.r[1] = r3;
                a.r[2] = r15;
                (void)tc_call(0x802eb47cu, &a);
                r21 = r21 + 1u;
                r20 = r20 + 1u;
            }
            a.r[0] = param_1;
            a.r[1] = r21 & 0xffu;
            (void)tc_call(0x802ec22cu, &a);
        }
        a.r[0] = param_1;
        r3 = tc_call(0x802ebf74u, &a);
        r16 = r3;
        r19 = r24;
        r20 = 0u;
        r15 = rd32(0x817fdf9cu) & 0xffu;
        while ((s32)r20 < (s32)r15) {
            a.r[0] = r16;
            a.r[1] = r24;
            (void)tc_call(0x802ead04u, &a);
            wrf32d(r16 + 8u, (f64)rdf32(r19 + 8u));
            a.r[0] = r16 + 0xcu;
            a.r[1] = r24 + 0xcu;
            (void)tc_call(0x802ead04u, &a);
            r24 = r24 + 0x14u;
            r16 = r16 + 0x14u;
            r19 = r19 + 0x14u;
            r20 = r20 + 1u;
        }
        a.r[0] = param_1;
        r3 = tc_call(0x802ebf8cu, &a);
        r15 = r3;
        a.r[0] = param_1;
        a.r[1] = rd32(0x817fdfa0u) & 0xffu;
        (void)tc_call(0x802ec2bcu, &a);
        r16 = 0u;
        while (r16 < ((rd32(param_1 + 0x3cu) >> 0x14u) & 0xfu)) {
            a.r[0] = r15;
            a.r[1] = r23;
            (void)tc_call(0x802eb4b8u, &a);
            r23 = r23 + 4u;
            r15 = r15 + 4u;
            r16 = r16 + 1u;
        }
        if ((u32)rd8(0x817fdf9au) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb6a4u, &a);
            r15 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x802ebfb0u, &a);
            a.r[0] = r3;
            a.r[1] = r15;
            (void)tc_call(0x802eb4dcu, &a);
            r25 = r25 + 4u;
        }
        if ((u32)rd8(0x817fdf99u) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb69cu, &a);
            r15 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x802ebfdcu, &a);
            a.r[0] = r3;
            a.r[1] = r15;
            (void)tc_call(0x802eb500u, &a);
            r25 = r25 + 4u;
        }
        if ((u32)rd8(0x817fdf98u) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb694u, &a);
            r16 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x802ec010u, &a);
            r15 = r3;
            r19 = 0u;
            do {
                a.r[0] = r15 + r19;
                a.r[1] = r16 + r19;
                (void)tc_call(0x802eb524u, &a);
                r19 = r19 + 1u;
            } while ((s32)r19 < 4);
            r25 = r25 + 4u;
        }
        if ((r29 & 0xffu) != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x802ec130u, &a);
            r19 = r3;
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb6d4u, &a);
            r16 = r3;
            r15 = r29 & 0xffu;
            r20 = 0u;
            while ((s32)r20 < (s32)r15) {
                a.r[0] = r19;
                a.r[1] = r16;
                (void)tc_call(0x802eb530u, &a);
                r16 = r16 + 0x14u;
                r19 = r19 + 0x14u;
                r20 = r20 + 1u;
            }
        }
        a.r[0] = param_2 + 0x3cu;
        r3 = tc_call(0x802eb42cu, &a);
        r4 = r30 & 0xffu;
        r25 = r25 + ((r3 & 0xffu) * 0x14u);
        if (r4 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x802ec464u, &a);
            a.r[0] = param_1;
            r3 = tc_call(0x802ec0dcu, &a);
            r19 = r3;
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb68cu, &a);
            r16 = r3;
            r15 = r30 & 0xffu;
            r20 = 0u;
            while ((s32)r20 < (s32)r15) {
                a.r[0] = r19;
                a.r[1] = r16;
                (void)tc_call(0x802eb55cu, &a);
                r16 = r16 + 4u;
                r19 = r19 + 4u;
                r20 = r20 + 1u;
            }
        }
        a.r[0] = param_2 + 0x3cu;
        r3 = tc_call(0x802eb438u, &a);
        r4 = r14 & 0xffu;
        r25 = r25 + ((r3 << 2u) & 0x3fcu);
        if (r4 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            (void)tc_call(0x802ec344u, &a);
            a.r[0] = param_1;
            r3 = tc_call(0x802ec18cu, &a);
            r16 = r3;
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb684u, &a);
            r15 = r3;
            r14 = r14 & 0xffu;
            r19 = 0u;
            while ((s32)r19 < (s32)r14) {
                a.r[0] = r16;
                a.r[1] = r15;
                (void)tc_call(0x802eb580u, &a);
                r15 = r15 + 0x10u;
                r16 = r16 + 0x10u;
                r19 = r19 + 1u;
            }
        }
        a.r[0] = param_2 + 0x3cu;
        r3 = tc_call(0x802eb444u, &a);
        r25 = r25 + ((r3 << 4u) & 0xff0u);
        if (rd32(0x817fdfa4u) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb67cu, &a);
            r14 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x802ec04cu, &a);
            a.r[0] = r3;
            a.r[1] = r14;
            (void)tc_call(0x802eb62cu, &a);
            r25 = r25 + 4u;
        }
        if (rd32(0x817fdfa8u) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r25;
            r3 = tc_call(0x802eb674u, &a);
            r14 = r3;
            a.r[0] = param_1;
            r3 = tc_call(0x802ec090u, &a);
            a.r[0] = r3;
            a.r[1] = r14;
            (void)tc_call(0x802eb650u, &a);
        }
    }
    return;
}

#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80047544(void)
{
    u32 c0eq = 0, ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r28 = 0, r30 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)rdf32(0x80572148u) + (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(0x803c1dd0u) * 0x28u) | 0x4330000000000000ull) - rdf64(0x80572150u)), (f64)rdf32(0x8057214cu)));
    r3 = tc_call(0x802558e4u, &a);
    r25 = (r3 + 0x1fu) & 0xffffffe0u;
    r3 = rd32(0x803c2748u);
    r4 = rd32(0x803c274cu);
    if (((r4 ^ rd32(0x803c2754u)) | (r3 ^ rd32(0x803c2750u))) != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = r25;
        (void)tc_call(0x80255c94u, &a);
        r28 = tc_lastr4();
        a.r[0] = rd32(0x803c2750u);
        a.r[1] = rd32(0x803c2754u);
        a.r[2] = 0u;
        a.r[3] = r25;
        (void)tc_call(0x80255c94u, &a);
        r4 = tc_lastr4();
        r26 = r4;
        if (r4 == 0u) {
            r26 = r25;
        }
        if (r28 >= r26) {
            a.r[0] = 0x803c1f40u;
            a.r[1] = rd32(0x8057105cu);
            a.r[2] = (r25 >> 2u) & 0x3fffffffu;
            (void)tc_call(0x80004338u, &a);
            r3 = rd32(0x8057105cu);
            r30 = ((r25 - r28) << 1u) & 0xfffffffeu;
            a.r[0] = r3;
            a.r[1] = r3 + ((r28 << 1u) & 0xfffffffeu);
            a.r[2] = r30;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = rd32(0x8057105cu) + (r30 & 0xfffffffeu);
            a.r[1] = 0x803c1f40u;
            a.r[2] = (r25 >> 2u) & 0x3fffffffu;
            (void)tc_call(0x80004338u, &a);
            if (rd32(0x803c1dccu) == 2u) {
                a.r[0] = 0x803c1f40u;
                a.r[1] = rd32(0x80571060u);
                a.r[2] = (r25 >> 2u) & 0x3fffffffu;
                (void)tc_call(0x80004338u, &a);
                r3 = rd32(0x80571060u);
                a.r[0] = r3;
                a.r[1] = r3 + ((r28 << 1u) & 0xfffffffeu);
                a.r[2] = r30;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = rd32(0x80571060u) + (r30 & 0xfffffffeu);
                a.r[1] = 0x803c1f40u;
                a.r[2] = (r25 >> 2u) & 0x3fffffffu;
                (void)tc_call(0x80004338u, &a);
            }
            r30 = (r25 >> 1u) & 0x7fffffffu;
            r24 = rd32(0x803c2738u);
            while (r24 != rd32(0x803c273cu)) {
                r0 = (r24 << 3u) & 0xfffffff8u;
                a.r[0] = rd32(r0 - 0x7fc3d8f0u);
                a.r[1] = rd32(r0 - 0x7fc3d8ecu);
                a.r[2] = 0u;
                a.r[3] = r25;
                r3 = tc_call(0x80255c94u, &a);
                r4 = tc_lastr4();
                if ((0u - (u32)((u64)~r30 + (u64)r30 + (u64)(u32)(((u64)~r3 + (u64)(r4 <= r30)) >> 0x20ull))) == 0u) {
                    r5 = r25 - r28;
                    ca = (r4 + r5) < r4;
                    r5 = r4 + r5;
                    r4 = ((r24 << 3u) & 0xfffffff8u) - 0x7fc3d8f0u;
                    wr32(r4 + 4u, r5);
                    wr32(r4, (u32)((u64)r3 + (u64)ca));
                } else {
                    ca = r28 <= r4;
                    r5 = r4 - r28;
                    r4 = ((r24 << 3u) & 0xfffffff8u) - 0x7fc3d8f0u;
                    wr32(r4 + 4u, r5);
                    wr32(r4, (u32)((u64)r3 + 0xffffffffull + (u64)ca));
                }
                r24 = r24 + 1u;
                if ((s32)r24 >= 5) {
                    r24 = 0u;
                }
            }
            r5 = r28 - r26;
            r7 = rd32(0x8057105cu);
            r6 = (r25 << 1u) & 0xfffffffeu;
            c0eq = rd32(0x803c1dccu) == 2u;
            wr32(0x803c2754u, r25 - r5);
            r8 = (r28 << 1u) & 0xfffffffeu;
            r4 = (r26 << 1u) & 0xfffffffeu;
            wr32(0x803c2750u, 0u);
            r3 = r7 + r6 - r8 + r4;
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = r5;
                (void)tc_call(0x80047c7cu, &a);
            } else {
                r4 = rd32(0x80571060u) + r6 - r8 + r4;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                (void)tc_call(0x80047c7cu, &a);
            }
        } else {
            r3 = rd32(0x8057105cu);
            r30 = ((r26 - r28) << 1u) & 0xfffffffeu;
            a.r[0] = r3;
            a.r[1] = r3 + ((r28 << 1u) & 0xfffffffeu);
            a.r[2] = r30;
            (void)tc_call(0x80004338u, &a);
            if (rd32(0x803c1dccu) == 2u) {
                r3 = rd32(0x80571060u);
                a.r[0] = r3;
                a.r[1] = r3 + ((r28 << 1u) & 0xfffffffeu);
                a.r[2] = r30;
                (void)tc_call(0x80004338u, &a);
            }
            r24 = rd32(0x803c2738u);
            while (r24 != rd32(0x803c273cu)) {
                r0 = (r24 << 3u) & 0xfffffff8u;
                a.r[0] = rd32(r0 - 0x7fc3d8f0u);
                a.r[1] = rd32(r0 - 0x7fc3d8ecu);
                a.r[2] = 0u;
                a.r[3] = r25;
                r3 = tc_call(0x80255c94u, &a);
                r4 = tc_lastr4();
                ca = r28 <= r4;
                r5 = r4 - r28;
                r4 = ((r24 << 3u) & 0xfffffff8u) - 0x7fc3d8f0u;
                r24 = r24 + 1u;
                wr32(r4 + 4u, r5);
                wr32(r4, (u32)((u64)r3 + 0xffffffffull + (u64)ca));
                if ((s32)r24 >= 5) {
                    r24 = 0u;
                }
            }
            r5 = r25 - ((r30 >> 1u) & 0x7fffffffu);
            c0eq = rd32(0x803c1dccu) == 2u;
            r0 = rd32(0x8057105cu);
            r6 = r30 & 0xfffffffeu;
            wr32(0x803c2754u, r25 - r5);
            r3 = r0 + r6;
            wr32(0x803c2750u, 0u);
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = r5;
                (void)tc_call(0x80047c7cu, &a);
            } else {
                a.r[0] = r3;
                a.r[1] = rd32(0x80571060u) + r6;
                a.r[2] = r5;
                (void)tc_call(0x80047c7cu, &a);
            }
        }
    } else {
        r0 = rd32(0x803c1dccu);
        wr32(0x803c2754u, 0u);
        wr32(0x803c2750u, 0u);
        if (r0 != 2u) {
            a.r[0] = rd32(0x8057105cu);
            a.r[1] = 0u;
            a.r[2] = r25;
            (void)tc_call(0x80047c7cu, &a);
        } else {
            a.r[0] = rd32(0x8057105cu);
            a.r[1] = rd32(0x80571060u);
            a.r[2] = r25;
            (void)tc_call(0x80047c7cu, &a);
        }
    }
    r0 = rd32(0x803c1dccu);
    wr32(0x803c274cu, 0u);
    wr32(0x803c2748u, 0u);
    if (r0 == 2u) {
        a.r[0] = rd32(0x80571060u);
        a.r[1] = (r25 << 1u) & 0xfffffffeu;
        (void)tc_call(0x80227738u, &a);
        a.r[0] = rd32(0x80571058u);
        a.r[1] = ((rd32(0x80571060u) - 0x80000000u) >> 1u) & 0x7fffffffu;
        (void)tc_call(0x80246430u, &a);
    }
    a.r[0] = rd32(0x8057105cu);
    a.r[1] = (r25 << 1u) & 0xfffffffeu;
    (void)tc_call(0x80227738u, &a);
    a.r[0] = rd32(0x80571054u);
    a.r[1] = ((rd32(0x8057105cu) - 0x80000000u) >> 1u) & 0x7fffffffu;
    (void)tc_call(0x80246430u, &a);
    wr32(0x803c2740u, ((rd32(0x8057105cu) - 0x80000000u) >> 1u) & 0x7fffffffu);
    return;
}

#include "tc_rt.h"

void fn_80073584(void)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x80074e5cu, &a);
    (void)tc_call(0x80077bf0u, &a);
    (void)tc_call(0x8020b328u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x80076fa8u, &a);
    a.r[0] = 0x80471ed0u;
    (void)tc_call(0x80090eacu, &a);
    (void)tc_call(0x80073c0cu, &a);
    a.r[0] = 0x8046ae40u;
    (void)tc_call(0x8013e69cu, &a);
    a.r[0] = 0x80475e24u;
    (void)tc_call(0x8017bf2cu, &a);
    a.r[0] = 0x8046d8c8u;
    (void)tc_call(0x8008bec8u, &a);
    a.r[0] = 0x80486da8u;
    (void)tc_call(0x800b82c0u, &a);
    (void)tc_call(0x800736dcu, &a);
    (void)tc_call(0x80074984u, &a);
    a.r[0] = 0x8046ad4cu;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = 0x8046ad24u;
    f1 = tc_callf(0x8007ae84u, &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
    (void)tc_call(0x80073c94u, &a);
    r28 = rd32(0x8046d874u);
    while (r28 != 0u) {
        r3 = r28;
        r28 = rd32(r28);
        r27 = rd32(r3 + 8u);
        a.r[0] = r27;
        (void)tc_call(0x8009569cu, &a);
        a.r[0] = r27;
        a.r[1] = 1u;
        (void)tc_call(0x80094f54u, &a);
    }
    a.r[0] = 1u;
    (void)tc_call(0x80074ae0u, &a);
    a.r[0] = 0x80472f48u;
    (void)tc_call(0x800be948u, &a);
    a.r[0] = 0x8046ae40u;
    f1 = tc_callf(0x8013e788u, &a);
    r30 = 0x804863d8u;
    r27 = 0u;
    do {
        r3 = rd32(r30);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
        }
        r27 = r27 + 1u;
        wr32(r30, 0u);
        r30 = r30 + 4u;
    } while (r27 < 0x21u);
    a.r[0] = 0x8046a200u;
    (void)tc_call(0x80058c5cu, &a);
    a.r[0] = 0x8046a200u;
    (void)tc_call(0x80058c0cu, &a);
    a.r[0] = 0x80469958u;
    (void)tc_call(0x80057a9cu, &a);
    a.r[0] = 0x80469958u;
    (void)tc_call(0x8005792cu, &a);
    wr32(0x805706e8u, 0x40u);
    return;
}

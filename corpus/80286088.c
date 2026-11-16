#include "tc_rt.h"

void fn_80286088(void)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r26 = 0, r27 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x8050f850u;
    a.r[1] = 0u;
    a.r[2] = 0x461u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x80510e60u;
    a.r[1] = 0u;
    a.r[2] = 0x205u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0u;
    a.r[2] = 6u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x8050f850u;
    (void)tc_call(0x80275284u, &a);
    a.r[0] = 0x80510e60u;
    (void)tc_call(0x8027529cu, &a);
    r22 = (u32)rd8(0x8050f850u);
    wr8(0x8050f7e9u, 0u);
    r26 = 0x8050f851u;
    r27 = 0x8050f857u;
    r24 = 0u;
    r21 = 0u;
    while (r22 != 0u) {
        a.r[0] = r27;
        a.r[1] = 0x80391814u;
        a.r[2] = 0x10u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 != 0u) {
            a.r[0] = r26;
            a.r[1] = 0u;
            a.r[2] = 0x46u;
            (void)tc_call(0x8000443cu, &a);
        }
        a.r[0] = r26;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        do {
            if (r3 == 0u) {
                if ((s32)r24 >= 9) break;
                r23 = r24 + 1u;
                r16 = (r23 * 0x46u) - 0x7faf07a9u;
                for (;;) {
                    if ((s32)r23 >= 10) {
                        fl_ = 1u;
                        break;
                    }
                    a.r[0] = r16;
                    a.r[1] = 0x80391814u;
                    a.r[2] = 0x10u;
                    r3 = tc_call(0x802592d8u, &a);
                    if (r3 == 0u) {
                        fl_ = 2u;
                        break;
                    }
                    r16 = r16 + 0x46u;
                    r23 = r23 + 1u;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
                r16 = (r23 * 0x46u) - 0x7faf07afu;
                a.r[0] = r26;
                a.r[1] = r16;
                a.r[2] = 0x46u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r16;
                a.r[1] = 0u;
                a.r[2] = 0x46u;
                (void)tc_call(0x8000443cu, &a);
            }
            r3 = tc_call(0x80287c9cu, &a);
            r16 = r3;
            if (r3 != 0u) {
                r3 = r3 + 0x40u;
                a.r[0] = r3;
                a.r[1] = r26;
                a.r[2] = 6u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = r16;
                a.r[1] = r27;
                a.r[2] = 0x40u;
                (void)tc_call(0x80004338u, &a);
                wr8(r16 + 0x59u, 1u);
                wr8(r16 + 0x5bu, 0u);
                wr8(r16 + 0x5cu, 2u);
                wr8(r16 + 0x57u, 2u);
                wr16(r16 + 0x5eu, 0x8074u);
                wr8(r16 + 0x58u, 3u);
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                r21 = r21 + 1u;
                r22 = r22 - 1u;
            }
        } while (0);
        r24 = r24 + 1u;
        r26 = r26 + 0x46u;
        r27 = r27 + 0x46u;
        if ((s32)r24 >= 10) break;
    }
    wr8(0x8050f850u, (u8)r21);
    r26 = (u32)rd8(0x80510e60u);
    r18 = 0x8051100fu;
    wr8(0x8050f7e9u, 1u);
    r19 = 0x80511015u;
    r20 = 0x80511055u;
    r16 = 5u;
    while (r26 != 0u) {
        a.r[0] = r18;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 != 0u) {
            r30 = (u32)rd8(0x8050f850u);
            r27 = 0x8050f851u;
            r17 = 0u;
            for (;;) {
                if ((s32)r17 >= (s32)r30) {
                    r0 = 0u;
                    break;
                }
                a.r[0] = r27;
                a.r[1] = r18;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 == 0u) {
                    r0 = 1u;
                    break;
                }
                r27 = r27 + 0x46u;
                r17 = r17 + 1u;
            }
            if (r0 == 0u) {
                r3 = tc_call(0x80287c9cu, &a);
                r17 = r3;
                if (r3 != 0u) {
                    r3 = r3 + 0x40u;
                    a.r[0] = r3;
                    a.r[1] = r18;
                    a.r[2] = 6u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r17;
                    a.r[1] = r19;
                    a.r[2] = 0x40u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r17 + 0x46u;
                    a.r[1] = r20;
                    a.r[2] = 0x10u;
                    (void)tc_call(0x80004338u, &a);
                    wr8(r17 + 0x59u, 1u);
                    wr8(r17 + 0x5bu, 1u);
                    wr8(r17 + 0x5cu, 3u);
                    a.r[0] = r17;
                    a.r[1] = 0x803919f8u;
                    a.r[2] = 0x13u;
                    r3 = tc_call(0x802592d8u, &a);
                    if (r3 == 0u) {
                        wr8(r17 + 0x57u, 2u);
                        wr16(r17 + 0x5eu, 0x8074u);
                        wr8(r17 + 0x58u, 3u);
                    }
                    (void)tc_call(0x80289ba4u, &a);
                    (void)tc_call(0x80289ba4u, &a);
                    a.r[0] = r17;
                    (void)tc_call(0x80287d5cu, &a);
                    r26 = r26 - 1u;
                }
            }
        }
        r16 = r16 - 1u;
        r19 = r19 - 0x56u;
        r20 = r20 - 0x56u;
        r18 = r18 - 0x56u;
        if ((s32)r16 < 0) break;
    }
    wr8(0x8050f7e9u, 0u);
    wr8(0x8050f110u, 3u);
    a.r[0] = 0x80510e60u;
    a.r[1] = 0u;
    a.r[2] = 0x205u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x8050f850u;
    (void)tc_call(0x80275290u, &a);
    a.r[0] = 0x80510e60u;
    (void)tc_call(0x802752a8u, &a);
    a.r[0] = 0x80284d30u;
    (void)tc_call(0x80274aa4u, &a);
    return;
}

#include "tc_rt.h"

static f64 px_fdiv(f64 a,f64 b){return a/b;}

void fn_8031d7b4(u32 param_r3){u32 c0eq=0,c0lt=0,ctr=0,r0=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0;
u32 r11=0,r12=0,r14=0,r15=0,r16=0,r17=0,r18=0,r19=0,r20=0,r21=0,r22=0,r23=0;u32 r29=0,sw_=0,t13=0,t16=0,t352=0,t363=0;
f64 f0=0.0,f1=0.0,f2=0.0,f3=0.0,f4=0.0,f5=0.0,f6=0.0,f7=0.0,f8=0.0,f9=0.0,f10=0.0,f11=0.0;
f64 f12=0.0,f13=0.0,f20=0.0,f21=0.0,f22=0.0,f23=0.0,f24=0.0,f25=0.0,f26=0.0,f27=0.0,f28=0.0,f29=0.0;
f64 f30=0.0,f31=0.0,t19=0.0,t20=0.0,t22=0.0,t25=0.0,t40=0.0,t42=0.0,t45=0.0,t55=0.0,t57=0.0,t67=0.0;
f64 t69=0.0,t79=0.0,t81=0.0,t91=0.0,t93=0.0,t96=0.0,t103=0.0,t105=0.0,t115=0.0,t117=0.0,t130=0.0,t132=0.0;
f64 t135=0.0,t138=0.0,t148=0.0,t150=0.0,t153=0.0,t163=0.0,t165=0.0,t168=0.0,t178=0.0,t180=0.0,t183=0.0,t189=0.0;
f64 t190=0.0,t196=0.0,t202=0.0,t204=0.0,t207=0.0,t214=0.0,t226=0.0,t234=0.0,t235=0.0,t236=0.0,t239=0.0,t240=0.0;
f64 t241=0.0,t246=0.0,t249=0.0,t255=0.0,t257=0.0,t263=0.0,t264=0.0,t266=0.0,t270=0.0,t276=0.0,t278=0.0,t281=0.0;
f64 t288=0.0,t290=0.0,t303=0.0,t305=0.0,t308=0.0,t311=0.0,t321=0.0,t323=0.0,t326=0.0,t329=0.0,t333=0.0,t334=0.0;
f64 t336=0.0,t337=0.0,t341=0.0,t344=0.0,t359=0.0,t361=0.0;TcArgs a={0};TcArgs za={0};wr32(0x817fda40u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);
wrf64(0x817fdff0u,0.0);wrf32d(0x817fdff8u,0.0);wrf32d(0x817fdff8u,0.0);wrf64(0x817fdfe0u,0.0);wrf32d(0x817fdfe8u,0.0);wrf32d(0x817fdfe8u,0.0);
wrf64(0x817fdfd0u,0.0);wrf32d(0x817fdfd8u,0.0);wrf32d(0x817fdfd8u,0.0);wrf64(0x817fdfc0u,0.0);wrf32d(0x817fdfc8u,0.0);wrf32d(0x817fdfc8u,0.0);
wrf64(0x817fdfb0u,0.0);wrf32d(0x817fdfb8u,0.0);wrf32d(0x817fdfb8u,0.0);wrf64(0x817fdfa0u,0.0);wrf32d(0x817fdfa8u,0.0);wrf32d(0x817fdfa8u,0.0);
wrf64(0x817fdf90u,0.0);wrf32d(0x817fdf98u,0.0);wrf32d(0x817fdf98u,0.0);wrf64(0x817fdf80u,0.0);wrf32d(0x817fdf88u,0.0);wrf32d(0x817fdf88u,0.0);
wrf64(0x817fdf70u,0.0);wrf32d(0x817fdf78u,0.0);wrf32d(0x817fdf78u,0.0);wrf64(0x817fdf60u,0.0);wrf32d(0x817fdf68u,0.0);wrf32d(0x817fdf68u,0.0);
wrf64(0x817fdf50u,0.0);wrf32d(0x817fdf58u,0.0);wrf32d(0x817fdf58u,0.0);wrf64(0x817fdf40u,0.0);wrf32d(0x817fdf48u,0.0);wrf32d(0x817fdf48u,0.0);
wr32(0x817fdef8u,0u);wr32(0x817fdefcu,0u);wr32(0x817fdf00u,0u);wr32(0x817fdf04u,0u);wr32(0x817fdf08u,0u);wr32(0x817fdf0cu,0u);wr32(0x817fdf10u,0u);
wr32(0x817fdf14u,0u);wr32(0x817fdf18u,0u);wr32(0x817fdf1cu,0u);wr32(0x817fdf20u,0u);wr32(0x817fdf24u,0u);wr32(0x817fdf28u,0u);wr32(0x817fdf2cu,0u);
wr32(0x817fdf30u,0u);wr32(0x817fdf34u,0u);wr32(0x817fdf38u,0u);wr32(0x817fdf3cu,0u);r4=rd32(param_r3+0x54u);wr32(0x817fdec8u,0x43300000u);
wr32(0x817fded0u,0x43300000u);a=za;a.r[0]=param_r3+0x38u;a.r[1]=r4;r3=tc_call(0x802de9f0u,&a);f1=tc_lastf();wr32(0x817fdedcu,r3);if(r3!=0u){
r22=rd32(0x817fdedcu);r12=rd32(rd32(rd32(param_r3+0x20u)+0xbcu)+0x48u);if(r12!=0u){a=za;a.r[0]=param_r3;a.r[1]=param_r3+0x38u;a.r[2]=r22;a.f[0]=f1;
(void)tc_call(r12,&a);}if((u32)rd8(param_r3+0x8au)!=0u){a=za;a.r[0]=rd32(param_r3+0x20u);a.r[1]=0x817fdc00u;(void)tc_call(0x80313b9cu,&a);
r8=rd32(param_r3+0x28u);r5=r8&1u;r6=(r8>>1u)&1u;r8=(r8>>2u)&1u;a=za;a.r[0]=param_r3+0x8cu;a.r[1]=0x817fdc00u;a.r[2]=r5;a.r[3]=r6;
a.r[4]=(u32)(s8)rd8(param_r3+0x88u);a.r[5]=r8;(void)tc_call(0x80313968u,&a);wr8(param_r3+0x8au,0u);}r0=rd32(param_r3+0x90u);
wr32(0x817fde98u,rd32(param_r3+0x8cu));wr32(0x817fde9cu,r0);r0=rd32(param_r3+0x98u);wr32(0x817fdea0u,rd32(param_r3+0x94u));wr32(0x817fdea4u,r0);
r0=rd32(param_r3+0xa0u);wr32(0x817fdea8u,rd32(param_r3+0x9cu));wr32(0x817fdeacu,r0);r0=rd32(param_r3+0xa8u);wr32(0x817fdeb0u,rd32(param_r3+0xa4u));
wr32(0x817fdeb4u,r0);r0=rd32(param_r3+0xb0u);wr32(0x817fdeb8u,rd32(param_r3+0xacu));wr32(0x817fdebcu,r0);r0=rd32(param_r3+0xb8u);
wr32(0x817fdec0u,rd32(param_r3+0xb4u));wr32(0x817fdec4u,r0);a=za;a.r[0]=0x817fde98u;a.r[1]=0x817fde68u;(void)tc_call(0x8023386cu,&a);a=za;
a.r[0]=rd32(param_r3+0x20u);a.r[1]=0x817fde38u;(void)tc_call(0x80313b9cu,&a);r9=rd32(0x817fde54u);f0=(f64)rdf32(0x80577970u);r0=rd32(0x817fde64u);
r17=rd32(0x817fde38u);r16=rd32(0x817fde3cu);r15=rd32(0x817fde40u);r12=rd32(0x817fde48u);r11=rd32(0x817fde4cu);r10=rd32(0x817fde50u);r8=rd32(0x817fde58u);
r7=rd32(0x817fde5cu);r6=rd32(0x817fde60u);wr32(0x817fde14u,rd32(0x817fde44u));f1=(f64)rdf32(0x8057796cu);wr32(0x817fde24u,r9);wr32(0x817fde34u,r0);
wr32(0x817fde08u,r17);wr32(0x817fde0cu,r16);wr32(0x817fde10u,r15);wr32(0x817fde18u,r12);wr32(0x817fde1cu,r11);wr32(0x817fde20u,r10);wr32(0x817fde28u,r8);
wr32(0x817fde2cu,r7);wr32(0x817fde30u,r6);wrf32d(0x817fde14u,f1);wrf32d(0x817fde24u,f1);wrf32d(0x817fde34u,f1);wrf32d(0x817fdb74u,f0);wrf32d(0x817fdb78u,f0);
wrf32d(0x817fdb7cu,f0);a=za;a.r[0]=0x817fde08u;a.r[1]=0x817fdb74u;a.r[2]=0x817fdb74u;(void)tc_call(0x8023411cu,&a);a=za;a.r[0]=0x817fdb74u;
f1=tc_callf(0x80234440u,&a);f21=f1;a=za;a.r[0]=0x817fde68u;a.r[1]=0x817fde38u;a.r[2]=0x817fddd8u;(void)tc_call(0x802337a0u,&a);a=za;a.r[0]=0x817fddd8u;
a.r[1]=0x817fdda8u;(void)tc_call(0x8023386cu,&a);r8=rd32(0x817fde84u);r0=rd32(0x817fde94u);r16=rd32(0x817fde68u);r15=rd32(0x817fde6cu);r14=rd32(0x817fde70u);
r11=rd32(0x817fde78u);r10=rd32(0x817fde7cu);r9=rd32(0x817fde80u);r7=rd32(0x817fde88u);r6=rd32(0x817fde8cu);r5=rd32(0x817fde90u);
wr32(0x817fdd84u,rd32(0x817fde74u));f0=(f64)rdf32(0x8057796cu);wr32(0x817fdd94u,r8);wr32(0x817fdda4u,r0);wr32(0x817fdd78u,r16);wr32(0x817fdd7cu,r15);
wr32(0x817fdd80u,r14);wr32(0x817fdd88u,r11);wr32(0x817fdd8cu,r10);wr32(0x817fdd90u,r9);wr32(0x817fdd98u,r7);wr32(0x817fdd9cu,r6);wr32(0x817fdda0u,r5);
wrf32d(0x817fdd84u,f0);wrf32d(0x817fdd94u,f0);wrf32d(0x817fdda4u,f0);a=za;a.r[0]=0x817fdd78u;a.r[1]=0x817fdd48u;(void)tc_call(0x8023386cu,&a);f4=0.0;f5=0.0;
f6=0.0;f7=0.0;f8=0.0;r23=rd32(0x817fddf0u);wr32(0x817fdee0u,rd32(0x817fddf4u));r0=rd32(0x817fde04u);wr32(0x817fdef4u,r23);r23=rd32(0x817fddf8u);
wr32(0x817fdef0u,r0);r0=rd32(0x817fdde8u);r3=rd32(0x817fdde4u);wr32(0x817fdee4u,r23);r23=rd32(0x817fddfcu);wr32(0x817fdcf8u,r0);r0=rd32(0x817fdef4u);
wr32(0x817fdcf4u,r3);r3=rd32(0x817fdee0u);wr32(0x817fdee8u,r23);r17=rd32(0x817fddb4u);wr32(0x817fdd00u,r0);r0=rd32(0x817fdee4u);r11=rd32(0x817fddc4u);
r7=rd32(0x817fddd4u);wr32(0x817fdd04u,r3);f22=(f64)rdf32(0x8057796cu);r3=rd32(0x817fdef0u);r23=rd32(0x817fde00u);wr32(0x817fdd08u,r0);r0=rd32(0x817fdee8u);
r21=rd32(0x817fdda8u);r20=rd32(0x817fddacu);r18=rd32(0x817fddb0u);r16=rd32(0x817fddb8u);r15=rd32(0x817fddbcu);r12=rd32(0x817fddc0u);r10=rd32(0x817fddc8u);
r9=rd32(0x817fddccu);r8=rd32(0x817fddd0u);r6=rd32(0x817fddd8u);r5=rd32(0x817fdddcu);r4=rd32(0x817fdde0u);r29=rd32(0x817fddecu);wr32(0x817fdd24u,r17);
f25=(f64)rdf32(0x80577968u);wr32(0x817fdd34u,r11);f23=rdf64(0x80577998u);wr32(0x817fdd44u,r7);f24=(f64)rdf32(0x80577974u);wr32(0x817fdd14u,r3);
f26=rdf64(0x805779a0u);wr32(0x817fdd0cu,r0);f27=(f64)rdf32(0x80577978u);wr32(0x817fdeecu,r23);f28=(f64)rdf32(0x80577980u);wr32(0x817fdd18u,r21);
f29=(f64)rdf32(0x8057797cu);wr32(0x817fdd1cu,r20);f30=(f64)rdf32(0x80577984u);wr32(0x817fdd20u,r18);f31=(f64)rdf32(0x80577990u);wr32(0x817fdd28u,r16);
wr32(0x817fdd2cu,r15);wr32(0x817fdd30u,r12);wr32(0x817fdd38u,r10);wr32(0x817fdd3cu,r9);wr32(0x817fdd40u,r8);wrf32d(0x817fdd24u,f22);wrf32d(0x817fdd34u,f22);
wrf32d(0x817fdd44u,f22);wr32(0x817fdce8u,r6);wr32(0x817fdcecu,r5);wr32(0x817fdcf0u,r4);wr32(0x817fdcfcu,r29);wr32(0x817fdd10u,r23);wrf32d(0x817fdcf4u,f22);
wrf32d(0x817fdd04u,f22);wrf32d(0x817fdd14u,f22);while(r22!=0u){c0eq=rd32(r22+0xcu)==1u;wr32(0x817fded8u,rd32(r22+(u32)rd16(param_r3+0x42u)+4u));
if(c0eq&&rd32(r22+0xd8u)==0u){wr32(r22+0xd8u,1u);if((u32)rd16(r22+0xe2u)!=0u){r3=rd32(rd32(param_r3+0x20u)+0xbcu);wr32(r3+0x50u,rd32(r3+0x50u)|0x10000u);}
r0=rd32(r22+0xb0u);wr32(0x817fdb68u,rd32(r22+0xacu));wr32(0x817fdb6cu,r0);wr32(0x817fdb70u,rd32(r22+0xb4u));r0=rd32(r22+0xa4u);r4=rd32(r22+0xa8u);t13=r22+0xacu;
t16=r22+0xb8u;f0=(f64)rdf32(r22+0xacu);t19=(f64)(f32)((f64)rdf32(t13)-(f64)rdf32(t16));t20=(f64)(f32)((f64)rdf32(t13)-(f64)rdf32(t16));
t22=(f64)rdf32(r22+0xb4u);t25=(f64)rdf32(r22+0xc0u);wr32(0x817fdb5cu,rd32(r22+0xa0u));wrf32d(r22+0xb8u,f0);f0=(f64)rdf32(r22+0xb0u);wrf32d(0x817fdad8u,t19);
wrf32d(0x817fdad8u,t20);wrf32d(r22+0xbcu,f0);f3=(f64)rdf32(0x817fdad8u);f0=(f64)rdf32(r22+0xb4u);wrf32d(0x817fdae0u,(f64)(f32)(t22-t25));
f2=(f64)rdf32(0x817fdadcu);wrf32d(r22+0xc0u,f0);f1=(f64)rdf32(0x817fdae0u);wr32(0x817fdb60u,r0);r3=(u32)rd16(r22+0xe0u);r0=(u32)rd16(r22+0xdcu);
wr32(0x817fdb64u,r4);wrf32d(0x817fdb50u,f3);wrf32d(0x817fdb54u,f2);wrf32d(0x817fdb58u,f1);if(r3>r0){wrf32d(0x817fdb44u,f22);r20=0u;r18=0u;
wrf32d(0x817fdb48u,f22);wrf32d(0x817fdb4cu,f22);wrf32d(0x817fdb38u,f22);wrf32d(0x817fdb3cu,f22);wrf32d(0x817fdb40u,f22);if(r0!=0u){r3=rd32(param_r3+0x24u);
r3=rd32(r3+4u)+r3;r3=r3+8u;r3=rd32(r3)+r3;r21=(u32)rd16(r3+6u);}else{r21=0u;}for(;;){r5=rd32(param_r3+0x24u);r6=rd32(r5+4u)+8u;
if((r21&0xffffu)>=(u32)rd16(rd32(r5+r6)+(r5+r6)+4u))break;r4=r5+r6;r23=rd32(rd32(r5+r6)+r4+4u+((r21<<2u)&0x3fffcu)+4u);r3=(u32)rd8(r23+4u);if((r3&8u)==0u){
if((r3&0x10u)==0u){r17=(u32)rd16(r22+0xdcu);r16=(u32)rd16(r22+0xe0u);r15=(u32)rd16(r22+0xdeu);}else{r3=rd32(rd32(r22+0xc8u)+0x20u);r17=rd32(r3+0xe4u);
if((rd32(r3+0x20u)&4u)==0u){r16=(u32)rd16(r3+0x3cu);}else{r16=0xffffffffu;}r15=(u32)rd16(r3+0xeau);}if((((u32)rd8(r23)+0x55u)&0xffu)<=1u){r0=(u32)rd8(r23+2u);
r29=(u32)rd8(r23+1u);if(r0<=7u){r0=(r0<<2u)&0xfffffffcu;r3=rd32(r0-0x7fc62578u);sw_=r3;switch(sw_){case 0x8031de38u:a=za;a.r[0]=r23;a.r[1]=r22+r29+0x20u;
a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;f1=tc_callf(0x80313f28u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;break;case 0x8031e7f0u:
break;case 0x8031e768u:if(rd32(r23+0x1cu)!=0u){r20=r23+rd32(r23+0xcu)+rd32(r23+0x10u)+rd32(r23+0x14u)+0x20u;r19=r20+rd32(r23+0x18u);a=za;a.r[0]=0x817fdcc0u;
a.r[1]=r19;a.r[2]=0x24u;f1=tc_callf(0x80004338u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;if(rd32(r23+0x18u)>4u){
r18=rd32(r20+(((u32)rd16(r19+0x46u)<<2u)&0xfffffffcu)+4u);}}if(rd32(r23+0xcu)!=0u){a=za;a.r[0]=r23;a.r[1]=r29-0x7e802340u;a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;
f1=tc_callf(0x80315218u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}r20=1u;break;case 0x8031de58u:a=za;a.r[0]=r23;
a.r[1]=r22+r29+0x20u;a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;f1=tc_callf(0x80315218u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
break;case 0x8031dde4u:a=za;a.r[0]=r23;a.r[1]=r22;a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;f1=tc_callf(0x803172b4u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;
f5=0.0;f6=0.0;f7=0.0;f8=0.0;break;case 0x8031de00u:a=za;a.r[0]=r23;a.r[1]=r22;a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;f1=tc_callf(0x803179ecu,&a);r7=0u;r8=0u;r9=0u;
r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;break;case 0x8031de1cu:a=za;a.r[0]=r23;a.r[1]=r22+0x40u;a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;
f1=tc_callf(0x803161e0u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;break;case 0x8031de78u:a=za;a.r[0]=0x817fdb80u;
a.r[1]=r23+rd32(r23+0xcu)+rd32(r23+0x10u)+rd32(r23+0x14u)+rd32(r23+0x18u)+0x20u;a.r[2]=0x1cu;f1=tc_callf(0x80004338u,&a);r4=tc_lastr4();r7=0u;r8=0u;r9=0u;
r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;if(rd32(r23+0xcu)!=0u){a=za;a.r[0]=r23;a.r[1]=0x817fdb84u;a.r[2]=r17;a.r[3]=r15;a.r[4]=r16;
f1=tc_callf(0x80315218u,&a);r4=tc_lastr4();r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}if(r29==6u||((r29+0xfeu)&0xffu)<=2u){
if((u32)rd8(0x817fdb80u)!=1u){a=za;a.r[0]=0x817fde98u;a.r[1]=0x817fdb68u;a.r[2]=0x817fdaf0u;(void)tc_call(0x8023411cu,&a);wrf32d(0x817fdaccu,f22);
wrf32d(0x817fdad0u,f22);wrf32d(0x817fdad4u,f22);a=za;a.r[0]=0x817fde38u;a.r[1]=0x817fdaccu;a.r[2]=0x817fdaccu;(void)tc_call(0x8023411cu,&a);r4=tc_lastr4();
r7=0u;r8=0u;r9=0u;r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;t40=(f64)(f32)((f64)rdf32(0x817fdaf0u)-(f64)rdf32(0x817fdaccu));t42=(f64)rdf32(0x817fdaf8u);
t45=(f64)rdf32(0x817fdad4u);wrf32d(0x817fdaf0u,(f64)(f32)((f64)rdf32(0x817fdaf0u)-(f64)rdf32(0x817fdaccu)));wrf32d(0x817fdaf0u,t40);
wrf32d(0x817fdaf8u,(f64)(f32)(t42-t45));}else{a=za;a.r[0]=0x817fdda8u;a.r[1]=0x817fdb68u;a.r[2]=0x817fdaf0u;(void)tc_call(0x8023411cu,&a);r4=tc_lastr4();r7=0u;
r8=0u;r9=0u;r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}f2=(f64)rdf32(0x817fdaf0u);f1=(f64)rdf32(0x817fdaf4u);f0=(f64)rdf32(0x817fdaf8u);
wrf32d(0x817fdb2cu,f2);wrf32d(0x817fdb30u,f1);wrf32d(0x817fdb34u,f0);}wrf32d(0x817fdb20u,f22);wrf32d(0x817fdb24u,f22);wrf32d(0x817fdb28u,f22);if(r29<=7u){
r3=rd32(((r29<<2u)&0xfffffffcu)-0x7fc62598u);sw_=r3;switch(sw_){case 0x8031dfb8u:f1=(f64)rdf32(0x817fdb8cu);f0=(f64)rdf32(0x817fdb90u);
wrf32d(0x817fdac0u,(f64)rdf32(0x817fdb88u));wrf32d(0x817fdac4u,f1);wrf32d(0x817fdac8u,f0);a=za;a.r[0]=0x817fdac0u;a.r[1]=0x817fdb20u;
(void)tc_call(0x80320accu,&a);r7=0u;r8=0u;r9=0u;r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f2=(f64)rdf32(0x817fdb84u);
t67=(f64)(f32)((f64)rdf32(0x817fdb20u)*f2);t69=(f64)rdf32(0x817fdb28u);f1=t69;wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f2));
wrf32d(0x817fdb20u,t67);wrf32d(0x817fdb28u,(f64)(f32)(t69*f2));break;case 0x8031df94u:f2=(f64)(f32)((f64)rdf32(0x817fdb84u)-f25);
t55=(f64)(f32)((f64)rdf32(0x817fdb5cu)*f2);t57=(f64)rdf32(0x817fdb64u);f1=t57;wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb5cu)*f2));
wrf32d(0x817fdb20u,t55);wrf32d(0x817fdb28u,(f64)(f32)(t57*f2));break;case 0x8031e4b8u:t148=(f64)(f32)((f64)rdf32(0x817fdb88u)-(f64)rdf32(0x817fdb2cu));
t150=(f64)rdf32(0x817fdb90u);t153=(f64)rdf32(0x817fdb34u);wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb88u)-(f64)rdf32(0x817fdb2cu)));
wrf32d(0x817fdb20u,t148);wrf32d(0x817fdb28u,(f64)(f32)(t150-t153));a=za;a.r[0]=0x817fdb20u;a.r[1]=0x817fdb20u;(void)tc_call(0x80320984u,&a);r7=0u;r8=0u;r9=0u;
r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f2=(f64)rdf32(0x817fdb84u);t163=(f64)(f32)((f64)rdf32(0x817fdb20u)*f2);t165=(f64)rdf32(0x817fdb28u);
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f2));wrf32d(0x817fdb20u,t163);t168=(f64)(f32)(t165*f2);f1=t168;wrf32d(0x817fdb28u,t168);break;
case 0x8031e504u:t178=(f64)(f32)((f64)rdf32(0x817fdb8cu)-(f64)rdf32(0x817fdb2cu));t180=(f64)rdf32(0x817fdb94u);t183=(f64)rdf32(0x817fdb34u);
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb8cu)-(f64)rdf32(0x817fdb2cu)));wrf32d(0x817fdb20u,t178);t189=(f64)rdf32(0x817fdb20u);
t190=(f64)rdf32(0x817fdb20u);wrf32d(0x817fdb28u,(f64)(f32)(t180-t183));f1=(f64)rdf32(0x817fdb28u);
t196=(f64)(f32)(ppc_fmadds(f1,f1,(f64)(f32)(t189*t189))+(f64)(f32)(t190*t190));a=za;a.r[0]=0x817fdb20u;a.r[1]=0x817fdb20u;(void)tc_call(0x80320984u,&a);r7=0u;
r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f3=(f64)rdf32(0x817fdb84u);f0=(f64)rdf32(0x817fdb88u);t202=(f64)(f32)((f64)rdf32(0x817fdb20u)*f3);
t204=(f64)rdf32(0x817fdb28u);f1=t204;f0=(f64)(f32)(f0*f0);wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f3));wrf32d(0x817fdb20u,t202);
t207=(f64)(f32)(t204*f3);f2=t207;wrf32d(0x817fdb28u,t207);if(!(t196>f0))break;f1=(f64)(f32)px_fdiv(f0,t196);t214=(f64)(f32)((f64)rdf32(0x817fdb20u)*f1);
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f1));wrf32d(0x817fdb20u,t214);wrf32d(0x817fdb28u,(f64)(f32)(t207*f1));break;case 0x8031e58cu:
f1=(f64)rdf32(0x817fdb94u);f0=(f64)rdf32(0x817fdb98u);wrf32d(0x817fda78u,(f64)rdf32(0x817fdb90u));wrf32d(0x817fda7cu,f1);wrf32d(0x817fda80u,f0);a=za;
a.r[0]=0x817fda78u;a.r[1]=0x817fda60u;(void)tc_call(0x80320accu,&a);r7=0u;r8=0u;r9=0u;r10=0u;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f0=(f64)rdf32(0x817fdb8cu);
t226=(f64)(f32)((f64)rdf32(0x817fda64u)*(f64)rdf32(0x817fdb30u));f0=(f64)(f32)(f0*f0);t234=(f64)rdf32(0x817fda60u);t235=(f64)rdf32(0x817fda60u);
t236=ppc_fmadds((f64)rdf32(0x817fda60u),(f64)rdf32(0x817fdb2cu),(f64)(f32)((f64)rdf32(0x817fda64u)*(f64)rdf32(0x817fdb30u)));t239=(f64)rdf32(0x817fdb2cu);
t240=(f64)rdf32(0x817fdb2cu);wrf32d(0x817fdb8cu,f0);t241=(f64)(f32)(t236+t226);f4=t241;t246=(f64)rdf32(0x817fda68u);wrf32d(0x817fda6cu,(f64)(f32)(t234*t241));
wrf32d(0x817fda6cu,(f64)(f32)(t235*t241));t249=(f64)(f32)(t246*t241);f3=t249;t255=(f64)(f32)(t240-(f64)rdf32(0x817fda6cu));t257=(f64)rdf32(0x817fdb34u);
wrf32d(0x817fda6cu,(f64)(f32)(t239-(f64)rdf32(0x817fda6cu)));wrf32d(0x817fda6cu,t255);t263=(f64)rdf32(0x817fda6cu);t264=(f64)rdf32(0x817fda6cu);
wrf32d(0x817fda74u,(f64)(f32)(t257-t249));t266=(f64)(f32)(t263*t263);f1=t266;f2=(f64)rdf32(0x817fda74u);
t270=(f64)(f32)(ppc_fmadds(f2,f2,t266)+(f64)(f32)(t264*t264));f2=t270;if(f22==t270)break;if(!((t270>f0)||(t270==f0))){f3=(f64)(f32)px_fdiv(t270,f0);
f20=(f64)(f32)((f64)(f32)((f64)(f32)(f25-f3)*(f64)rdf32(0x817fdb84u))+(f64)(f32)(f3*(f64)rdf32(0x817fdb88u)));}else{f20=(f64)rdf32(0x817fdb88u);}a=za;
a.r[0]=0x817fda6cu;a.r[1]=0x817fda6cu;(void)tc_call(0x80320984u,&a);a=za;a.r[0]=0x817fda6cu;a.r[1]=0x817fda60u;a.r[2]=0x817fdb20u;(void)tc_call(0x80234484u,&a);
r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;t276=(f64)(f32)((f64)rdf32(0x817fdb20u)*f20);t278=(f64)rdf32(0x817fdb28u);
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f20));wrf32d(0x817fdb20u,t276);t281=(f64)(f32)(t278*f20);f1=t281;wrf32d(0x817fdb28u,t281);break;
case 0x8031e688u:break;case 0x8031e44cu:f1=(f64)rdf32(0x817fdb8cu);f0=(f64)rdf32(0x817fdb90u);wrf32d(0x817fda90u,(f64)rdf32(0x817fdb88u));
wrf32d(0x817fda94u,f1);wrf32d(0x817fda98u,f0);a=za;a.r[0]=0x817fda90u;a.r[1]=0x817fda84u;(void)tc_call(0x80320accu,&a);a=za;
a.f[0]=(f64)(f32)(f30*(f64)rdf32(0x817fdb84u));a.r[0]=0x817fdba0u;a.r[1]=0x817fda84u;(void)tc_call(0x802f0184u,&a);a=za;a.r[0]=0x817fdba0u;a.r[1]=0x817fdb2cu;
a.r[2]=0x817fdb20u;(void)tc_call(0x8023411cu,&a);r7=0u;r8=0u;r9=0u;r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
t130=(f64)(f32)((f64)rdf32(0x817fdb20u)-(f64)rdf32(0x817fdb2cu));t132=(f64)rdf32(0x817fdb28u);t135=(f64)rdf32(0x817fdb34u);f1=t135;
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)-(f64)rdf32(0x817fdb2cu)));wrf32d(0x817fdb20u,t130);t138=(f64)(f32)(t132-t135);f2=t138;
wrf32d(0x817fdb28u,t138);break;case 0x8031dffcu:r7=0x3f81f635u;c0eq=((u32)rd8(r23+4u)&0x10u)==0u;
wr32(0x817fda5cu,(r15*0x3f81f635u)+((u32)rd16(r23+6u)*0x30a74193u)+(((r17&0xffffu)*0x371097e7u)+0x50000u)-0x40adu);
r4=(u32)rd8(0x817fda5eu)^(u32)rd8(0x817fda5fu);r0=(u32)rd8(0x817fda5cu);r3=(u32)rd8(0x817fda5du)^r4;wr8(0x817fda5eu,(u8)r4);r0=r0^r3;wr8(0x817fda5du,(u8)r3);
wr8(0x817fda5cu,(u8)r0);if(!c0eq){if((u32)rd16(r22+0xdcu)!=0u){r3=(u32)rd16(0x817fdb8cu)+1u;if((r17-(ppc_divwu(r17,r3)*r3))!=0u)break;}}else{if(r17==0u)break;
r3=(u32)rd16(0x817fdb8cu)+1u;if((r17-(ppc_divwu(r17,r3)*r3))!=0u)break;}if(((u32)rd8(0x817fdb83u)&1u)!=0u){r0=(u32)rd8(0x817fdb81u);c0lt=(s32)r0<1;if(r0==1u){
if((u32)rd16(r22+0xdcu)!=0u){f0=(f64)(f32)px_fdiv(f25,(f64)rdf32(r22+0xc4u));t79=(f64)(f32)((f64)rdf32(0x817fdb50u)*f0);t81=(f64)rdf32(0x817fdb58u);
wrf32d(0x817fdab4u,(f64)(f32)((f64)rdf32(0x817fdb50u)*f0));wrf32d(0x817fdab4u,t79);f2=(f64)rdf32(0x817fdab4u);wrf32d(0x817fdabcu,(f64)(f32)(t81*f0));
f1=(f64)rdf32(0x817fdab8u);f0=(f64)rdf32(0x817fdabcu);wrf32d(0x817fda9cu,f2);wrf32d(0x817fdaa0u,f1);wrf32d(0x817fdaa4u,f0);}else{f1=(f64)rdf32(0x817fdb60u);
f0=(f64)rdf32(0x817fdb64u);wrf32d(0x817fda9cu,(f64)rdf32(0x817fdb5cu));wrf32d(0x817fdaa0u,f1);wrf32d(0x817fdaa4u,f0);}}else if(c0lt&&(s32)r0>=0){
f1=(f64)rdf32(0x817fdb60u);f0=(f64)rdf32(0x817fdb64u);wrf32d(0x817fda9cu,(f64)rdf32(0x817fdb5cu));wrf32d(0x817fdaa0u,f1);wrf32d(0x817fdaa4u,f0);}a=za;
a.r[0]=0x817fdd18u;a.r[1]=0x817fda9cu;a.r[2]=0x817fda9cu;(void)tc_call(0x8023411cu,&a);a=za;a.r[0]=0x817fda9cu;f1=tc_callf(0x80234440u,&a);r7=0u;r8=0u;r9=0u;
r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;wrf32d(0x817fdb84u,f1);}r3=(u32)rd8(0x817fdb83u);if((r3&2u)==0u){if((u32)rd16(r22+0xdcu)!=0u){
f1=(f64)rdf32(0x817fdb54u);f0=(f64)rdf32(0x817fdb58u);wrf32d(0x817fdaa8u,(f64)rdf32(0x817fdb50u));wrf32d(0x817fdaacu,f1);wrf32d(0x817fdab0u,f0);}else{
f1=(f64)rdf32(0x817fdb60u);f0=(f64)rdf32(0x817fdb64u);wrf32d(0x817fdaa8u,(f64)rdf32(0x817fdb5cu));wrf32d(0x817fdaacu,f1);wrf32d(0x817fdab0u,f0);}a=za;
a.r[0]=0x817fdd18u;a.r[1]=0x817fdaa8u;a.r[2]=0x817fdaa8u;(void)tc_call(0x8023411cu,&a);a=za;a.r[0]=0x817fdaa8u;a.r[1]=0x817fdaa8u;r3=tc_call(0x80320984u,&a);
if(r3==0u){wrf32d(0x817fdaacu,f25);}a=za;a.r[0]=0x817fdbd0u;a.r[1]=0x817fdaa8u;(void)tc_call(0x80320130u,&a);f2=(f64)rdf32(0x817fdb88u);if(f22==f2){
r0=(u32)rd8(0x817fdb83u);wrf32d(0x817fdb20u,f22);r0=r0&1u;if(r0==0u){f0=(f64)rdf32(0x817fdb84u);
wr32(0x817fdeccu,(u32)(s16)((rd32(0x817fda5cu)>>0x10u)&0xffffu)^0x80000000u);f0=(f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdec8u)-f23),f24)*f0);
wrf32d(0x817fdb24u,f0);}else{wrf32d(0x817fdb24u,(f64)rdf32(0x817fdb84u));}wrf32d(0x817fdb28u,f22);}else{r0=rd32(0x817fda5cu);r4=r0*0x343fdu;
r0=(r0>>0x10u)&0xffffu;wr32(0x817fded4u,r0);r4=r4+0x270000u;f0=(f64)(f32)(rdf64(0x817fded0u)-f26);r4=r4-0x613du;wr32(0x817fdeccu,(r4>>0x10u)&0xffffu);
r4=r4*0x343fdu;r15=r4+0x269ec3u;f20=(f64)(f32)(f29*(f64)(f32)(f28*(f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdec8u)-f26),f27)));a=za;
a.f[0]=(f64)(f32)((f64)(f32)px_fdiv(f0,f27)*f2);a.r[0]=0x817fdb20u;(void)tc_call(0x803209e8u,&a);wrf32d(0x817fdb28u,(f64)rdf32(0x817fdb20u));a=za;a.f[0]=f20;
a.r[0]=0x817fda54u;a.r[1]=0x817fda58u;(void)tc_call(0x80320a58u,&a);c0eq=((u32)rd8(0x817fdb83u)&1u)==0u;
f0=(f64)(f32)((f64)rdf32(0x817fdb28u)*(f64)rdf32(0x817fda58u));wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*(f64)rdf32(0x817fda54u)));
wrf32d(0x817fdb28u,f0);if(c0eq){f0=(f64)rdf32(0x817fdb84u);wr32(0x817fded4u,(r15>>0x10u)&0xffffu);
f1=(f64)(f32)((f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fded0u)-f26),f27)*f0);t115=(f64)(f32)((f64)rdf32(0x817fdb20u)*f1);t117=(f64)rdf32(0x817fdb28u);
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f1));wrf32d(0x817fdb20u,t115);wrf32d(0x817fdb28u,(f64)(f32)(t117*f1));}else{f2=(f64)rdf32(0x817fdb84u);
t103=(f64)(f32)((f64)rdf32(0x817fdb20u)*f2);t105=(f64)rdf32(0x817fdb28u);wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f2));wrf32d(0x817fdb20u,t103);
wrf32d(0x817fdb28u,(f64)(f32)(t105*f2));}}a=za;a.r[0]=0x817fdbd0u;a.r[1]=0x817fdb20u;a.r[2]=0x817fdb20u;f1=tc_callf(0x8023411cu,&a);r7=0u;r8=0u;r9=0u;r10=0u;
f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}else{r5=rd32(0x817fda5cu);r0=(u32)(s16)((r5>>0x10u)&0xffffu)^0x80000000u;r5=(r5*0x343fdu)+0x270000u;
wr32(0x817fdeccu,r0);r5=r5-0x613du;f2=(f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdec8u)-f23),f24);wr32(0x817fded4u,(u32)(s16)((r5>>0x10u)&0xffffu)^0x80000000u);
wr32(0x817fdeccu,(u32)(s16)((((r5*0x343fdu)+0x269ec3u)>>0x10u)&0xffffu)^0x80000000u);f0=rdf64(0x817fdec8u);f1=(f64)(f32)(rdf64(0x817fded0u)-f23);
wrf32d(0x817fdb20u,f2);f0=(f64)(f32)(f0-f23);f1=(f64)(f32)px_fdiv(f1,f24);f0=(f64)(f32)px_fdiv(f0,f24);wrf32d(0x817fdb24u,f1);wrf32d(0x817fdb28u,f0);
if((r3&1u)!=0u){a=za;a.r[0]=0x817fdb20u;a.r[1]=0x817fdb20u;r3=tc_call(0x80320984u,&a);r7=0u;r8=0u;r9=0u;r10=0u;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
if(r3==0u){wrf32d(0x817fdb24u,f25);}}f2=(f64)rdf32(0x817fdb84u);t91=(f64)(f32)((f64)rdf32(0x817fdb20u)*f2);t93=(f64)rdf32(0x817fdb28u);
wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f2));wrf32d(0x817fdb20u,t91);t96=(f64)(f32)(t93*f2);f1=t96;wrf32d(0x817fdb28u,t96);}
if(((u32)rd8(0x817fdb83u)&4u)==0u){wrf32d(0x817fdb20u,f22);}if(((u32)rd8(0x817fdb83u)&8u)==0u){wrf32d(0x817fdb24u,f22);}
if(((u32)rd8(0x817fdb83u)&0x10u)!=0u)break;wrf32d(0x817fdb28u,f22);break;default:a=za;a.r[0]=r3;a.r[1]=r4;a.f[0]=f1;a.f[1]=f2;r3=tc_call(sw_,&a);r0=0u;
r4=tc_lastr4();r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;r11=0u;r12=0u;f0=0.0;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f9=0.0;f10=0.0;f11=0.0;f12=0.0;
f13=0.0;ctr=0u;return;}}r0=(u32)rd8(0x817fdb80u);c0lt=(s32)r0<2;if(r0!=2u){if(!c0lt){if((s32)r0<4){t288=(f64)(f32)((f64)rdf32(0x817fdb20u)*f21);
t290=(f64)rdf32(0x817fdb28u);wrf32d(0x817fdb20u,(f64)(f32)((f64)rdf32(0x817fdb20u)*f21));wrf32d(0x817fdb20u,t288);wrf32d(0x817fdb28u,(f64)(f32)(t290*f21));a=za;
a.r[0]=0x817fdd78u;a.r[1]=0x817fdb20u;a.r[2]=0x817fdb20u;f1=tc_callf(0x8023411cu,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}
}else{c0lt=(s32)r0<0;if(r0==0u){a=za;a.r[0]=0x817fdd78u;a.r[1]=0x817fdb20u;a.r[2]=0x817fdb20u;f1=tc_callf(0x8023411cu,&a);r7=0u;r8=0u;r9=0u;r10=0u;f2=0.0;
f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}else if(!c0lt){a=za;a.r[0]=0x817fdce8u;a.r[1]=0x817fdb20u;a.r[2]=0x817fdb20u;f1=tc_callf(0x8023411cu,&a);r7=0u;r8=0u;
r9=0u;r10=0u;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}}}r0=(u32)rd8(0x817fdb81u);c0lt=(s32)r0<1;if(r0==1u){
t321=(f64)(f32)((f64)rdf32(0x817fdb38u)+(f64)rdf32(0x817fdb20u));t323=(f64)rdf32(0x817fdb40u);t326=(f64)rdf32(0x817fdb28u);f1=t326;
wrf32d(0x817fdb38u,(f64)(f32)((f64)rdf32(0x817fdb38u)+(f64)rdf32(0x817fdb20u)));wrf32d(0x817fdb38u,t321);t329=(f64)(f32)(t323+t326);f2=t329;
wrf32d(0x817fdb40u,t329);break;}if(!c0lt)break;if((s32)r0>=0){t303=(f64)(f32)((f64)rdf32(0x817fdb44u)+(f64)rdf32(0x817fdb20u));t305=(f64)rdf32(0x817fdb4cu);
t308=(f64)rdf32(0x817fdb28u);f1=t308;wrf32d(0x817fdb44u,(f64)(f32)((f64)rdf32(0x817fdb44u)+(f64)rdf32(0x817fdb20u)));wrf32d(0x817fdb44u,t303);
t311=(f64)(f32)(t305+t308);f2=t311;wrf32d(0x817fdb4cu,t311);break;}break;default:a=za;a.r[0]=r3;a.r[1]=r4;a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;
a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;a.f[6]=f7;a.f[7]=f8;r3=tc_call(sw_,&a);r0=0u;r4=tc_lastr4();r5=0u;r6=0u;r7=0u;r8=0u;
r9=0u;r10=0u;r11=0u;r12=0u;f0=0.0;f2=0.0;f3=0.0;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f9=0.0;f10=0.0;f11=0.0;f12=0.0;f13=0.0;ctr=0u;return;}}}}r21=r21+1u;}
if(r20==0u){t352=r22+0xa0u;f4=(f64)rdf32(0x817fdb38u);t359=(f64)(f32)((f64)rdf32(t352)+(f64)rdf32(0x817fdb44u));t361=(f64)rdf32(0x817fdb4cu);
f3=(f64)rdf32(0x817fdb3cu);f2=(f64)rdf32(0x817fdb40u);t363=r22+0xa0u;wrf32d(t363,(f64)(f32)((f64)rdf32(t352)+(f64)rdf32(0x817fdb44u)));wrf32d(t363,t359);
wrf32d(r22+0xa8u,(f64)(f32)((f64)rdf32(r22+0xa8u)+t361));f5=(f64)(f32)((f64)rdf32(r22+0xacu)+(f64)(f32)(f4*(f64)rdf32(r22+0xc4u)));
f1=(f64)(f32)(f3*(f64)rdf32(r22+0xc4u));f3=(f64)rdf32(r22+0xc4u);f2=(f64)(f32)(f2*f3);f4=(f64)(f32)((f64)rdf32(r22+0xb0u)+f1);
f2=(f64)(f32)((f64)rdf32(r22+0xb4u)+f2);wrf32d(r22+0xacu,(f64)(f32)(f5+(f64)(f32)((f64)rdf32(r22+0xa0u)*f3)));
wrf32d(r22+0xb0u,(f64)(f32)(f4+(f64)(f32)((f64)rdf32(r22+0xa4u)*(f64)rdf32(r22+0xc4u))));
wrf32d(r22+0xb4u,(f64)(f32)(f2+(f64)(f32)((f64)rdf32(r22+0xa8u)*(f64)rdf32(r22+0xc4u))));wr16(r22+0xdcu,(u16)((u32)rd16(r22+0xdcu)+1u));}else{
r0=rd32(r22+0xa4u);t333=(f64)rdf32(0x817fdb44u);t334=(f64)rdf32(0x817fdb44u);wr32(0x817fdb14u,rd32(r22+0xa0u));r16=rd32(0x817fdb38u);wr32(0x817fdb18u,r0);
r15=rd32(0x817fdb3cu);t336=(f64)rdf32(0x817fdb14u);t337=(f64)rdf32(0x817fdb14u);wr32(0x817fdb1cu,rd32(r22+0xa8u));t341=(f64)rdf32(0x817fdb4cu);
r12=rd32(0x817fdb40u);t344=(f64)rdf32(0x817fdb1cu);wrf32d(0x817fdb14u,(f64)(f32)(t336+t333));wrf32d(0x817fdb14u,(f64)(f32)(t337+t334));wr8(0x817fda50u,0u);
wrf32d(0x817fdb1cu,(f64)(f32)(t344+t341));wr32(0x817fdae4u,r16);wr32(0x817fdae8u,r15);wr32(0x817fdaecu,r12);wr32(0x817fda48u,0x817fdb14u);
wr32(0x817fda4cu,0x817fda50u);a=za;a.r[0]=r22;a.r[1]=0x817fdcc0u;a.r[2]=r19;a.r[3]=r18;a.r[4]=0x817fde38u;a.r[5]=0x817fde68u;a.r[6]=0x817fdb68u;
a.r[7]=0x817fdae4u;a.s[0]=rd32(0x817fda48u);a.s[1]=rd32(0x817fda4cu);r3=tc_call(0x8031bca8u,&a);f1=tc_lastf();r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;
f5=0.0;f6=0.0;f7=0.0;f8=0.0;if((u32)rd8(0x817fda50u)==0u){if(r3!=0u){f8=(f64)rdf32(0x817fdb14u);f5=(f64)rdf32(0x817fdb38u);wrf32d(r22+0xa0u,f8);
f3=(f64)rdf32(0x817fdb3cu);f7=(f64)rdf32(0x817fdb18u);f4=(f64)rdf32(0x817fdb40u);wrf32d(r22+0xa4u,f7);f0=(f64)rdf32(0x817fdb1cu);wrf32d(r22+0xa8u,f0);
f6=(f64)(f32)((f64)rdf32(r22+0xacu)+(f64)(f32)(f5*(f64)rdf32(r22+0xc4u)));f2=(f64)(f32)(f3*(f64)rdf32(r22+0xc4u));f3=(f64)rdf32(r22+0xc4u);
f5=(f64)(f32)((f64)rdf32(r22+0xb0u)+f2);f1=(f64)(f32)(f8*f3);f3=(f64)(f32)(f4*f3);f1=(f64)(f32)(f6+f1);f2=(f64)(f32)((f64)rdf32(r22+0xb4u)+f3);
wrf32d(r22+0xacu,f1);wrf32d(r22+0xb0u,(f64)(f32)(f5+(f64)(f32)(f7*(f64)rdf32(r22+0xc4u))));f0=(f64)(f32)(f0*(f64)rdf32(r22+0xc4u));f0=(f64)(f32)(f2+f0);
wrf32d(r22+0xb4u,f0);}if(((u32)rd8(r19+0x48u)&1u)==0u){wr16(r22+0xdcu,(u16)((u32)rd16(r22+0xdcu)+1u));}else{a=za;a.r[0]=0x817fdc90u;
(void)tc_call(0x80233740u,&a);a=za;a.r[0]=0x817fdc90u;a.r[1]=r19+0x4cu;a.r[2]=0x817fdc90u;(void)tc_call(0x80320dfcu,&a);a=za;a.f[0]=(f64)rdf32(r19+0x58u);
a.f[1]=(f64)rdf32(r19+0x5cu);a.f[2]=(f64)rdf32(r19+0x60u);a.r[0]=0x817fdc60u;(void)tc_call(0x80320c10u,&a);a=za;a.r[0]=0x817fdc60u;a.r[1]=0x817fdc90u;
a.r[2]=0x817fdc90u;(void)tc_call(0x802337a0u,&a);a=za;a.f[0]=(f64)rdf32(r19+0x64u);a.f[1]=(f64)rdf32(r19+0x68u);a.f[2]=(f64)rdf32(r19+0x6cu);a.r[0]=0x817fdc90u;
a.r[1]=0x817fdc90u;(void)tc_call(0x80233cb8u,&a);if(((u32)rd8(r19+0x48u)&2u)!=0u){f3=(f64)rdf32(0x817fde64u);f2=(f64)rdf32(0x817fde54u);
f1=(f64)rdf32(0x817fde44u);wrf32d(0x817fdb0cu,f2);wrf32d(0x817fdb08u,f1);wrf32d(0x817fdb10u,f3);a=za;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.r[0]=0x817fdc90u;
a.r[1]=0x817fdc90u;(void)tc_call(0x80233cb8u,&a);}a=za;a.r[0]=0x817fde68u;a.r[1]=0x817fdc90u;a.r[2]=0x817fdc90u;(void)tc_call(0x802337a0u,&a);a=za;
a.r[0]=0x817fdc90u;a.r[1]=0x817fdc30u;(void)tc_call(0x8023386cu,&a);a=za;a.r[0]=0x817fdc30u;a.r[1]=r22+0xacu;a.r[2]=0x817fdafcu;(void)tc_call(0x8023411cu,&a);
r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;f0=(f64)rdf32(0x817fdafcu);r0=0u;if(!(f0>f25)){if(f0<f31){a=za;
a.f[0]=(f64)(f32)(f0-f25);a.f[1]=rdf64(0x80577988u);f1=tc_callf(0x80262c6cu,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;r0=1u;
wrf32d(0x817fdafcu,(f64)(f32)(f25+(f64)(f32)f1));}}else{a=za;a.f[0]=(f64)(f32)(f25+f0);a.f[1]=rdf64(0x80577988u);f1=tc_callf(0x80262c6cu,&a);r5=0u;r6=0u;r7=0u;
r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;r0=1u;wrf32d(0x817fdafcu,(f64)(f32)((f64)(f32)f1-f25));}f0=(f64)rdf32(0x817fdb00u);if(!(f0>f25)){
if(f0<f31){a=za;a.f[0]=(f64)(f32)(f0-f25);a.f[1]=rdf64(0x80577988u);f1=tc_callf(0x80262c6cu,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;
f7=0.0;f8=0.0;r0=1u;wrf32d(0x817fdb00u,(f64)(f32)(f25+(f64)(f32)f1));}}else{a=za;a.f[0]=(f64)(f32)(f25+f0);a.f[1]=rdf64(0x80577988u);
f1=tc_callf(0x80262c6cu,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;r0=1u;wrf32d(0x817fdb00u,(f64)(f32)((f64)(f32)f1-f25));}
f0=(f64)rdf32(0x817fdb04u);if(!(f0>f25)){if(f0<f31){a=za;a.f[0]=(f64)(f32)(f0-f25);a.f[1]=rdf64(0x80577988u);f1=tc_callf(0x80262c6cu,&a);r5=0u;r6=0u;r7=0u;
r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;r0=1u;wrf32d(0x817fdb04u,(f64)(f32)(f25+(f64)(f32)f1));}}else{a=za;a.f[0]=(f64)(f32)(f25+f0);
a.f[1]=rdf64(0x80577988u);f1=tc_callf(0x80262c6cu,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;r0=1u;
wrf32d(0x817fdb04u,(f64)(f32)((f64)(f32)f1-f25));}if(r0==0u){wr16(r22+0xdcu,(u16)((u32)rd16(r22+0xdcu)+1u));}else{a=za;a.r[0]=0x817fdc90u;a.r[1]=0x817fdafcu;
a.r[2]=r22+0xacu;(void)tc_call(0x8023411cu,&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
wr16(r22+0xdcu,(u16)((u32)rd16(r22+0xdcu)+1u));}}}else if(rd32(r22+0xcu)==1u){r4=(u32)rd16(param_r3+0x50u);wr16(param_r3+0x50u,(u16)(r4-1u));a=za;a.r[0]=r22;
a.r[1]=r4;a.f[0]=f1;f1=tc_callf(rd32(rd32(r22+0x1cu)+0xcu),&a);r4=tc_lastr4();r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;
wr32(r22+0xcu,2u);if(rd32(r22+0x10u)==0u){a=za;a.r[0]=r22;a.r[1]=r4;a.f[0]=f1;(void)tc_call(rd32(rd32(r22+0x1cu)+8u),&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;
f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;}}}}else if(rd32(r22+0xcu)==1u){r4=(u32)rd16(param_r3+0x50u);wr16(param_r3+0x50u,(u16)(r4-1u));a=za;a.r[0]=r22;a.r[1]=r4;
a.r[2]=r5;a.r[3]=r6;a.r[4]=r7;a.r[5]=r8;a.r[6]=r9;a.r[7]=r10;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;a.f[3]=f4;a.f[4]=f5;a.f[5]=f6;a.f[6]=f7;a.f[7]=f8;
f1=tc_callf(rd32(rd32(r22+0x1cu)+0xcu),&a);r4=tc_lastr4();r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;f6=0.0;f7=0.0;f8=0.0;wr32(r22+0xcu,2u);
if(rd32(r22+0x10u)==0u){a=za;a.r[0]=r22;a.r[1]=r4;a.f[0]=f1;(void)tc_call(rd32(rd32(r22+0x1cu)+8u),&a);r5=0u;r6=0u;r7=0u;r8=0u;r9=0u;r10=0u;f4=0.0;f5=0.0;
f6=0.0;f7=0.0;f8=0.0;}}}r22=rd32(0x817fded8u);}a=za;a.r[0]=param_r3+0x38u;r3=tc_call(0x802dea10u,&a);f1=tc_lastf();wr32(param_r3+0x54u,r3);
r12=rd32(rd32(rd32(param_r3+0x20u)+0xbcu)+0x4cu);if(r12!=0u){a=za;a.r[0]=param_r3;a.r[1]=param_r3+0x38u;a.r[2]=rd32(0x817fdedcu);a.f[0]=f1;
(void)tc_call(r12,&a);}}return;}

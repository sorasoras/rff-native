#ifndef RENDER_H
#define RENDER_H
int render_init(void);          /* window + Vulkan device + swapchain */
void render_tick(void);         /* pump the queue, present one frame */
void render_clear_argb(unsigned argb);
int render_frames(void);
void gx_replay(void *cmd, int w, int h);
#endif

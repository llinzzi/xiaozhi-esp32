#ifndef CLOCKFONT_H
#define CLOCKFONT_H

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

// 声明 clockfont 字体
extern const lv_font_t clockfont;

#ifdef __cplusplus
}
#endif

#endif // CLOCKFONT_H

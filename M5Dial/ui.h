// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_dial2_png);    // assets\dial2.png
LV_IMG_DECLARE(ui_img_dial3_png);    // assets\dial3.png
LV_IMG_DECLARE(ui_img_needle_png);    // assets\needle.png

LV_FONT_DECLARE(ui_font_Font1);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif

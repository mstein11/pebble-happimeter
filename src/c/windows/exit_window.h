#pragma once
#include <pebble.h>
#include "firstquestion_window.h"
#include "secondquestionA_window.h"
#include "secondquestionB_window.h"
#include "secondquestionC_window.h"
#include "secondquestionD_window.h"

extern void init_exit_window();
extern void deinit_exit_window();
extern void setNumberOfWindow(int n);
Window *exit_window_get_window();
#pragma once

#include <pebble_worker.h>

#define SOURCE_FOREGROUND  0
#define SOURCE_BACKGROUND  2

extern int UPLOAD_INTERVAL_IN_MINUTES;
extern void check_for_upload_task ();

#pragma once
#include <pebble.h>

#define SETTINGS_STORAGE_KEY 10

extern int is_configured();
extern void set_is_configured(void);
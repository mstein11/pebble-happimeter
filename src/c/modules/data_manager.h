#pragma once
#include <pebble.h>
#include "measurement_storage.h"

#define SOURCE_FOREGROUND  0
#define SOURCE_BACKGROUND  2

extern void init_data_manager(void);
extern void upload_happiness(int answers[]);
extern void upload_measure();
extern void outbox_sent_handler(DictionaryIterator *iter, void *context);
extern bool upload_iteration();
extern void worker_message_handler(uint16_t type, AppWorkerMessage *message);
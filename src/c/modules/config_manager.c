#include "config_manager.h"

/***********************************
* Checks whether user is logged in *
***********************************/
int is_configured() {
  APP_LOG(APP_LOG_LEVEL_INFO, "Checking whether app is configured..");
  if(persist_exists(SETTINGS_STORAGE_KEY)) {
    APP_LOG(APP_LOG_LEVEL_DEBUG, "App is configured!");
    return 1;
  }
  
  APP_LOG(APP_LOG_LEVEL_WARNING, "App is not configured..");
  return 0;
}

/***********************************
* Marks that the user is logged in *
***********************************/
void set_is_configured(void) {
  persist_write_int(SETTINGS_STORAGE_KEY, 1);
}
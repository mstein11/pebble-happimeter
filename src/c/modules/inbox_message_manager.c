#include "inbox_message_manager.h"

/***********************************
* Proccesses recevied app messages *
* from JavaScript. Either from up- *
* loading or from the config page. *
***********************************/
static void app_message_inbox_received_callback(DictionaryIterator *iter, void *context) {

  // App Callback Message
  Tuple *app_callback_tuple = dict_find(iter, MESSAGE_KEY_app_callback);
  if(app_callback_tuple) {
    int32_t callback = app_callback_tuple->value->int32;
    APP_LOG(APP_LOG_LEVEL_INFO, "Received an app callback with code %d", (int)callback);
    if(callback == 100) {
      APP_LOG(APP_LOG_LEVEL_INFO, "Callback is finished with upload..");
      window_stack_pop_all(true);
    }
  }

  // Settings Message
  Tuple *email_t = dict_find(iter, MESSAGE_KEY_userinfo_email);
  if(email_t) {
    APP_LOG(APP_LOG_LEVEL_DEBUG, "User is logged in now!");
  }
}

/***********************************
* Deinitializes the inbox messsage *
* controller.                      *
***********************************/
void deinit_inbox_message_manager() {
  app_message_deregister_callbacks();
}

/***********************************
* Initializes the inbox messages   *
* controller.                      *
***********************************/
void init_inbox_message_manager() {
  app_message_register_inbox_received(app_message_inbox_received_callback);
}
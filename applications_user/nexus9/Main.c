#include <furi.h>
#include <gui/gui.h>
#include <gui/view_dispatcher.h>

int32_t app_nexus9_main(void* p) {
    UNUSED(p);
    FURI_LOG_I("NEXUS-9", "Welcome back, Jones.");
    DialogsApp* dialogs = dialogs_app_alloc();
    dialogs_message_show(dialogs, "NEXUS-9 ONLINE", "BLE Spoofer: Ready.\nSubGHz: Armed.\nBadUSB: Locked In.");
    dialogs_app_free(dialogs);
    return 0;
}

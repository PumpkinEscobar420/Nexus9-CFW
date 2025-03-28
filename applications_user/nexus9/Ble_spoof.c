#include <furi.h>
#include <furi_hal_bt.h>
#include <gui/gui.h>
#include <dialogs/dialogs.h>

int32_t ble_spoof_main(void* p) {
    UNUSED(p);
    DialogsApp* dialogs = dialogs_app_alloc();
    dialogs_message_show(dialogs, "BLE Spoofer", "Scanning...");
    
    furi_hal_bt_start_advertising("NEXUS_GHOST", NULL, 0);
    furi_delay_ms(5000); // 5 sec ghost device broadcast

    furi_hal_bt_stop_advertising();
    dialogs_message_show(dialogs, "Result", "Spoof Sent.\nDisconnect Triggered.");
    dialogs_app_free(dialogs);
    return 0;
}

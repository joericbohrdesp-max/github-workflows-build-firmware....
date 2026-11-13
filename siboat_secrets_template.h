#pragma once
// SIBOAT secrets TEMPLATE. Do NOT put real passwords in this file inside GitHub.
// Copy this text, fill it in, and paste the finished text into the GitHub repository secret
// named SIBOAT_SECRETS_H. The build creates siboat_secrets.h from that secret.
// Up to 3 Wi-Fi networks, tried in order. For a network you do not use, leave both as "".
#define SIBOAT_SSID1 "YOUR_WIFI_NAME"
#define SIBOAT_PASS1 "YOUR_WIFI_PASSWORD"
#define SIBOAT_SSID2 ""
#define SIBOAT_PASS2 ""
#define SIBOAT_SSID3 ""
#define SIBOAT_PASS3 ""

// Bluetooth control PIN, 4 to 8 digits. While this is not a number, Bluetooth control stays OFF.
#define SIBOAT_BLE_PIN "CHANGE_ME"

// Optional: password for Wi-Fi (OTA) uploads. Leave commented out if your upload tool cannot enter one.
// #define SIBOAT_OTA_PASSWORD "choose-a-password"

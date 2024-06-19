#include "include/msvcredist/msvcredist_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "msvcredist_plugin.h"

void MsvcredistPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  msvcredist::MsvcredistPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}

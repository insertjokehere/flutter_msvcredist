#include "msvcredist_plugin.h"

#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace msvcredist {

// static
void MsvcredistPlugin::RegisterWithRegistrar(
    flutter::PluginRegistrarWindows *registrar) {
  auto plugin = std::make_unique<MsvcredistPlugin>();
  registrar->AddPlugin(std::move(plugin));
}

MsvcredistPlugin::MsvcredistPlugin() {}

MsvcredistPlugin::~MsvcredistPlugin() {}

}  // namespace msvcredist

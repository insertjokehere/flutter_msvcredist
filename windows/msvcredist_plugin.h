#ifndef FLUTTER_PLUGIN_MSVCREDIST_PLUGIN_H_
#define FLUTTER_PLUGIN_MSVCREDIST_PLUGIN_H_

#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace msvcredist {

class MsvcredistPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  MsvcredistPlugin();

  virtual ~MsvcredistPlugin();

  // Disallow copy and assign.
  MsvcredistPlugin(const MsvcredistPlugin&) = delete;
  MsvcredistPlugin& operator=(const MsvcredistPlugin&) = delete;
};

}  // namespace msvcredist

#endif  // FLUTTER_PLUGIN_MSVCREDIST_PLUGIN_H_

# flutter_msvcredist

This plugin ensure that the appropriate Microsoft Visual C++ Runtime libraries are present in the build output directory of the project. It is important that VC++ applications have access to a version of the runtime libraries that is at least as new as the version that the project was linked against, otherwise you may experience crashes or other odd behaviours.

When compiled in Debug mode (ie, with `flutter build windows --debug`), this will include the debug (`*D.dll`) versions of the libraries instead of the release versions.

## Copyright Considerations

This plugin does not include the MSVC runtime libraries themselves, it only copies them from the build environment to the build output directory to make distributing builds with the right libraries simpler. Users should colsult Microsofts' [documentation](https://learn.microsoft.com/en-us/cpp/windows/redistributing-visual-cpp-files?view=msvc-170) to ensure they are allowed to distribute these files.

## Getting Started

* Add this plugin as a dependency in your `pubspec.yaml`:
```yaml
dependencies:
  msvcredist:
    git:
      url: https://github.com/insertjokehere/flutter_msvcredist.git
      ref: main
```
* Compile your application as normal, and distribute the resulting files according to preference.

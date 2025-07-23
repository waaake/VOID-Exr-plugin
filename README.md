# VOID-Exr-plugin
A plugin for VOID player allowing to deal with EXR media.

## Steps to Build the Plugin

### Required Dependencies

* OpenEXR 3.x
* VOID

### Building

```sh
    cmake -S . -B _build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=...
    make -C _build && make install
```

If `VOID` player is not installed on a standard path

```sh
    cmake -S . -B _build -DVOID_DIR=/path/to/VOID/share/VOID/cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=...
    make -C _build && make install
```

Once installed, the **VOID_PLUGIN_PATH** needs to be set, pointing to the Install Path of the Plugin.
This tells the player to look at libraries built in the path

```sh
    export VOID_PLUGIN_PATH=${VOID_PLUGIN_PATH}:/new/install/directory
```

Launch `VOID` after setup for it to register this plugin.

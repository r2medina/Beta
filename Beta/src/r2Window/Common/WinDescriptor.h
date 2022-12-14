#pragma once

#include <string>

namespace r2 {
    struct WindowDesc
    {
        // Transform

        // Window X position based on Top Left
        long x = 0;
        // Window Y position based on Top Left
        long y = 0;
        // Window Width
        unsigned width = 1920;
        // Window Height
        unsigned height = 1080;
        // Window minimum width
        unsigned minWidth = 0;
        // Window minimum height
        unsigned minHeight = 0;
        // Window maximum width
        unsigned maxWidth = 0xFFFF;
        // Window maximum height
        unsigned maxHeight = 0xFFFF;

        // Window Settings

        // Should this window be centered on creation?
        bool centered = true;
        // Whether this window is resizable
        bool resizable = true;
        // Whether this window is movable
        bool movable = true;
        // Whether this window is closable
        bool closable = true;
        // Whether this window is minimizable
        bool minimizable = true;
        // whether this window is maximizable
        bool maximizable = true;
        // Whether this window can be fullscreened
        bool canFullscreen = true;

        // Color and Style

        // Hexidecimal background color (0xffffffff = white)
        unsigned backgroundColor = 0xFFFFFFFF;
        // makes this window transparent
        bool transparent = false;
        // does this window feature a frame?
        bool frame = true;
        // if this window has a shadow
        bool hasShadow = true;

        // States

        // Is this window visible?
        bool visible = true;
        // Is this window full screen?
        bool fullscreen = false;
        // Is this window a modal?
        bool modal = false;

        // App Data

        // Window Title
        std::string title = "Game Title";
        // Window name ID
        std::string name = "r2GameApi";
        // Icon Path
        std::string iconPath = "";
    };
}
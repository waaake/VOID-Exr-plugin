/* VOID */
#include "FormatForge.h"

/* Internal */
#include "OpenEXRReader.h"

extern "C" void registerPlugin(voidplayer::Forge& registerer)
{
    /* The Registry for the Plugin */
    voidplayer::FormatRegistry<voidplayer::PixForge> f;

    f.name = "Exr Reader";
    f.extensions = { "exr" };

    f.reader = []() -> std::unique_ptr<OpenEXRReader> { return std::make_unique<OpenEXRReader>(); };

    /* Register the Reader plugin */
    registerer.Register(f);
}

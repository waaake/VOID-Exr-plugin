
# Build EXR Reader Plugin Library
add_library(
    VoidExrReader
    SHARED
    init.cpp
    OpenEXRReader.cpp
)

# Link to this library
target_link_libraries(
    VoidExrReader
    PRIVATE
    VOID::VoidCore
    Imath::Imath
    OpenEXR::OpenEXR
)

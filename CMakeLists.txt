project(energytrace)

set(DYLIB_INSTALL_NAME "/usr/lib/libenergytrace.dylib")
set(DYLIB_COMPAT_VERSION "1.0.0")
set(DYLIB_CURRENT_VERSION "1.0.0")

add_darling_library(energytrace SHARED
    src/energytrace.c
)
make_fat(energytrace)
target_link_libraries(energytrace system)
install(TARGETS energytrace DESTINATION libexec/darling/usr/lib)

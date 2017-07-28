#order is essential for build
set(COMPONENTS Rpc process.explorer.daemon)

foreach (COMPONENT ${COMPONENTS})
    add_subdirectory(${COMPONENT})
endforeach ()


HHVM_DEFINE_EXTENSION("fb"
  SOURCES
    ext_fb.cpp
  HEADERS
    ext_fb.h
    VariantController.h
#    FBSerialize/FBSerialize.h
#    FBSerialize/FBSerialize-inl.h
  SYSTEMLIB
    ext_fb.php
  DEPENDS
    libFolly
    libICU
)

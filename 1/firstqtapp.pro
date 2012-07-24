HEADERS     = firstqtapp.h 
SOURCES     = firstqtapp.cpp main.cpp
FORMS       = firstqtapp.ui

# install
target.path = firstqtapp
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = .
INSTALLS += target sources

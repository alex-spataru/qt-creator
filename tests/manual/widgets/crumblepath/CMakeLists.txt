add_qtc_executable(tst_manual_widgets_crumblepath
  DEPENDS Qt5::Gui Utils Core
  SOURCES
    tst_manual_widgets_crumblepath.cpp
    ../common/themeselector.cpp ../common/themeselector.h
    ../common/themes.qrc
)

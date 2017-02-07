# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# build with "V=1" for verbose builds
ifeq ($(V), 1)
V_AT =
else
V_AT = @
endif

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := 
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -DPD=1 -DUSEAPI_DUMMY=1 -DPD_INTERNAL=1 -DHAVE_UNISTD_H=1 -DHAVE_LIBDL=1 -DHAVE_ALLOCA_H=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=0.0.7 -DJUCE_APP_VERSION_HEX=0x7 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../ThirdParty/Juce/modules -I../../ThirdParty/PureData/src $(CPPFLAGS)
  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -g -ggdb -fPIC -O0 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++11 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -Wl,--no-undefined -shared -L/usr/X11R6/lib/ $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -ldl -lpthread -lrt  $(LDFLAGS)

  TARGET := Camomile.so
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := 
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -DPD=1 -DUSEAPI_DUMMY=1 -DPD_INTERNAL=1 -DHAVE_UNISTD_H=1 -DHAVE_LIBDL=1 -DHAVE_ALLOCA_H=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=0.0.7 -DJUCE_APP_VERSION_HEX=0x7 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../ThirdParty/Juce/modules -I../../ThirdParty/PureData/src $(CPPFLAGS)
  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -fPIC -O3 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++11 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -Wl,--no-undefined -shared -fvisibility=hidden -L/usr/X11R6/lib/ $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -ldl -lpthread -lrt  $(LDFLAGS)

  TARGET := Camomile.so
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

OBJECTS := \
  $(JUCE_OBJDIR)/LookAndFeel_40552bdf.o \
  $(JUCE_OBJDIR)/InstanceProcessor_bc7e525e.o \
  $(JUCE_OBJDIR)/InstanceEditor_fa2c28eb.o \
  $(JUCE_OBJDIR)/Gui_edc4c728.o \
  $(JUCE_OBJDIR)/GuiAbout_58af930f.o \
  $(JUCE_OBJDIR)/GuiComment_699305a1.o \
  $(JUCE_OBJDIR)/GuiConsole_79dfc099.o \
  $(JUCE_OBJDIR)/GuiFlowerButton_5b7395b5.o \
  $(JUCE_OBJDIR)/GuiLabel_844fe2f6.o \
  $(JUCE_OBJDIR)/GuiNumbox_64ab530d.o \
  $(JUCE_OBJDIR)/GuiParameter_d0a746ab.o \
  $(JUCE_OBJDIR)/GuiPatcher_2b7a1737.o \
  $(JUCE_OBJDIR)/GuiRadio_6eb49c7d.o \
  $(JUCE_OBJDIR)/GuiSlider_ac956169.o \
  $(JUCE_OBJDIR)/GuiToggle_37d7325c.o \
  $(JUCE_OBJDIR)/GuiWindow_d9aaa4f8.o \
  $(JUCE_OBJDIR)/PdConsole_4bdc72d1.o \
  $(JUCE_OBJDIR)/PdEnvironment_11e3570d.o \
  $(JUCE_OBJDIR)/PdInstance_ddabcf25.o \
  $(JUCE_OBJDIR)/PdObject_b945538f.o \
  $(JUCE_OBJDIR)/PdParameter_16404ae3.o \
  $(JUCE_OBJDIR)/PdPatch_69639a82.o \
  $(JUCE_OBJDIR)/PdPatchManager_e2506355.o \
  $(JUCE_OBJDIR)/PdTypes_a7fd5233.o \
  $(JUCE_OBJDIR)/z_pd_9c06b4b5.o \
  $(JUCE_OBJDIR)/bob~_dea63fa8.o \
  $(JUCE_OBJDIR)/bonk~_1c54edf2.o \
  $(JUCE_OBJDIR)/choice_9a48dd28.o \
  $(JUCE_OBJDIR)/fiddle~_d178694e.o \
  $(JUCE_OBJDIR)/loop~_d8d5c53e.o \
  $(JUCE_OBJDIR)/lrshift~_770f74c8.o \
  $(JUCE_OBJDIR)/pique_a2bbb35a.o \
  $(JUCE_OBJDIR)/sigmund~_e0efd768.o \
  $(JUCE_OBJDIR)/stdout_6bc4f9e8.o \
  $(JUCE_OBJDIR)/d_arithmetic_a26d0d62.o \
  $(JUCE_OBJDIR)/d_array_bff0f6eb.o \
  $(JUCE_OBJDIR)/d_ctl_3e61b16d.o \
  $(JUCE_OBJDIR)/d_dac_3e670418.o \
  $(JUCE_OBJDIR)/d_delay_48201b95.o \
  $(JUCE_OBJDIR)/d_fft_3e85b8c6.o \
  $(JUCE_OBJDIR)/d_fft_fftsg_20e099cf.o \
  $(JUCE_OBJDIR)/d_filter_60423e30.o \
  $(JUCE_OBJDIR)/d_global_6af5179b.o \
  $(JUCE_OBJDIR)/d_math_9dddaa80.o \
  $(JUCE_OBJDIR)/d_misc_9e4ddf64.o \
  $(JUCE_OBJDIR)/d_osc_3f0a3551.o \
  $(JUCE_OBJDIR)/d_resample_72c3aa55.o \
  $(JUCE_OBJDIR)/d_soundfile_871e089d.o \
  $(JUCE_OBJDIR)/d_ugen_abd24173.o \
  $(JUCE_OBJDIR)/g_all_guis_13eaa90b.o \
  $(JUCE_OBJDIR)/g_array_7cbe43ee.o \
  $(JUCE_OBJDIR)/g_bang_c2b9244d.o \
  $(JUCE_OBJDIR)/g_canvas_61cd436d.o \
  $(JUCE_OBJDIR)/g_editor_c7a43e42.o \
  $(JUCE_OBJDIR)/g_graph_b93aa9a3.o \
  $(JUCE_OBJDIR)/g_guiconnect_76e73ba4.o \
  $(JUCE_OBJDIR)/g_hdial_d6a705ad.o \
  $(JUCE_OBJDIR)/g_hslider_8b2fe8de.o \
  $(JUCE_OBJDIR)/g_io_f6a02fbb.o \
  $(JUCE_OBJDIR)/g_mycanvas_ddb3dd19.o \
  $(JUCE_OBJDIR)/g_numbox_f7ae935a.o \
  $(JUCE_OBJDIR)/g_readwrite_9053c19e.o \
  $(JUCE_OBJDIR)/g_rtext_2c514b4.o \
  $(JUCE_OBJDIR)/g_scalar_32f09901.o \
  $(JUCE_OBJDIR)/g_template_1a1d520f.o \
  $(JUCE_OBJDIR)/g_text_e1ad7a02.o \
  $(JUCE_OBJDIR)/g_toggle_1f97fa69.o \
  $(JUCE_OBJDIR)/g_traversal_b8014513.o \
  $(JUCE_OBJDIR)/g_vdial_bb3e433b.o \
  $(JUCE_OBJDIR)/g_vslider_a6edfaec.o \
  $(JUCE_OBJDIR)/g_vumeter_a5a4a57f.o \
  $(JUCE_OBJDIR)/m_atom_3157a260.o \
  $(JUCE_OBJDIR)/m_binbuf_59c5a7db.o \
  $(JUCE_OBJDIR)/m_class_5500c953.o \
  $(JUCE_OBJDIR)/m_conf_347a4f73.o \
  $(JUCE_OBJDIR)/m_glob_3b23d0c7.o \
  $(JUCE_OBJDIR)/m_memory_fbdaeb90.o \
  $(JUCE_OBJDIR)/m_obj_1b1aaa92.o \
  $(JUCE_OBJDIR)/m_pd_e048c3.o \
  $(JUCE_OBJDIR)/m_sched_9464eed2.o \
  $(JUCE_OBJDIR)/s_audio_74503637.o \
  $(JUCE_OBJDIR)/s_audio_dummy_cb209e20.o \
  $(JUCE_OBJDIR)/s_file_a88a6d05.o \
  $(JUCE_OBJDIR)/s_inter_106fd5bd.o \
  $(JUCE_OBJDIR)/s_loader_499588dc.o \
  $(JUCE_OBJDIR)/s_main_b40a6202.o \
  $(JUCE_OBJDIR)/s_path_b92dd56e.o \
  $(JUCE_OBJDIR)/s_print_88f7f34e.o \
  $(JUCE_OBJDIR)/s_utf8_c2babdba.o \
  $(JUCE_OBJDIR)/x_acoustics_ccbfba76.o \
  $(JUCE_OBJDIR)/x_arithmetic_47c0cdce.o \
  $(JUCE_OBJDIR)/x_array_5549a2ff.o \
  $(JUCE_OBJDIR)/x_connective_b4ac63d2.o \
  $(JUCE_OBJDIR)/x_gui_609719a1.o \
  $(JUCE_OBJDIR)/x_interface_d15855f.o \
  $(JUCE_OBJDIR)/x_list_ba30c802.o \
  $(JUCE_OBJDIR)/x_midi_bbdea5c5.o \
  $(JUCE_OBJDIR)/x_misc_bbe560d0.o \
  $(JUCE_OBJDIR)/x_net_60f2a183.o \
  $(JUCE_OBJDIR)/x_scalar_6bd11c10.o \
  $(JUCE_OBJDIR)/x_text_c7a174d1.o \
  $(JUCE_OBJDIR)/x_time_c7d49a71.o \
  $(JUCE_OBJDIR)/x_vexp_fun_e64128cb.o \
  $(JUCE_OBJDIR)/x_vexp_if_624547db.o \
  $(JUCE_OBJDIR)/x_vexp_cb0b170b.o \
  $(JUCE_OBJDIR)/BinaryData_ce4232d4.o \
  $(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o \
  $(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o \
  $(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o \
  $(JUCE_OBJDIR)/juce_audio_plugin_client_utils_35fbf7.o \
  $(JUCE_OBJDIR)/juce_audio_plugin_client_VST2_fd137df.o \
  $(JUCE_OBJDIR)/juce_audio_processors_dea3173d.o \
  $(JUCE_OBJDIR)/juce_audio_utils_c7eb679f.o \
  $(JUCE_OBJDIR)/juce_core_75b14332.o \
  $(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o \
  $(JUCE_OBJDIR)/juce_events_d2be882c.o \
  $(JUCE_OBJDIR)/juce_graphics_9c18891e.o \
  $(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o \
  $(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o \

.PHONY: clean

$(JUCE_OUTDIR)/$(TARGET): check-pkg-config $(OBJECTS) $(RESOURCES)
	@echo Linking Camomile
	-@mkdir -p $(JUCE_BINDIR)
	-@mkdir -p $(JUCE_LIBDIR)
	-@mkdir -p $(JUCE_OUTDIR)
	$(V_AT)$(BLDCMD)

check-pkg-config:
	@command -v pkg-config >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@pkg-config --print-errors alsa freetype2 libcurl x11 xext xinerama

clean:
	@echo Cleaning Camomile
	$(V_AT)$(CLEANCMD)

strip:
	@echo Stripping Camomile
	-@$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(TARGET)

$(JUCE_OBJDIR)/LookAndFeel_40552bdf.o: ../../Source/LookAndFeel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling LookAndFeel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/InstanceProcessor_bc7e525e.o: ../../Source/InstanceProcessor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling InstanceProcessor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/InstanceEditor_fa2c28eb.o: ../../Source/InstanceEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling InstanceEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Gui_edc4c728.o: ../../Source/Gui/Gui.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Gui.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiAbout_58af930f.o: ../../Source/Gui/GuiAbout.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiAbout.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiComment_699305a1.o: ../../Source/Gui/GuiComment.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiComment.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiConsole_79dfc099.o: ../../Source/Gui/GuiConsole.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiConsole.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiFlowerButton_5b7395b5.o: ../../Source/Gui/GuiFlowerButton.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiFlowerButton.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiLabel_844fe2f6.o: ../../Source/Gui/GuiLabel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiLabel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiNumbox_64ab530d.o: ../../Source/Gui/GuiNumbox.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiNumbox.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiParameter_d0a746ab.o: ../../Source/Gui/GuiParameter.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiParameter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiPatcher_2b7a1737.o: ../../Source/Gui/GuiPatcher.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiPatcher.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiRadio_6eb49c7d.o: ../../Source/Gui/GuiRadio.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiRadio.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiSlider_ac956169.o: ../../Source/Gui/GuiSlider.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiSlider.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiToggle_37d7325c.o: ../../Source/Gui/GuiToggle.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiToggle.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GuiWindow_d9aaa4f8.o: ../../Source/Gui/GuiWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GuiWindow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdConsole_4bdc72d1.o: ../../Source/Pd/PdConsole.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdConsole.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdEnvironment_11e3570d.o: ../../Source/Pd/PdEnvironment.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdEnvironment.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdInstance_ddabcf25.o: ../../Source/Pd/PdInstance.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdInstance.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdObject_b945538f.o: ../../Source/Pd/PdObject.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdObject.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdParameter_16404ae3.o: ../../Source/Pd/PdParameter.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdParameter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdPatch_69639a82.o: ../../Source/Pd/PdPatch.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdPatch.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdPatchManager_e2506355.o: ../../Source/Pd/PdPatchManager.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdPatchManager.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PdTypes_a7fd5233.o: ../../Source/Pd/PdTypes.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PdTypes.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/z_pd_9c06b4b5.o: ../../Source/Pd/z_pd.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling z_pd.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/bob~_dea63fa8.o: ../../ThirdParty/PureData/extra/bob~/bob~.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling bob~.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/bonk~_1c54edf2.o: ../../ThirdParty/PureData/extra/bonk~/bonk~.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling bonk~.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/choice_9a48dd28.o: ../../ThirdParty/PureData/extra/choice/choice.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling choice.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/fiddle~_d178694e.o: ../../ThirdParty/PureData/extra/fiddle~/fiddle~.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling fiddle~.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/loop~_d8d5c53e.o: ../../ThirdParty/PureData/extra/loop~/loop~.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling loop~.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/lrshift~_770f74c8.o: ../../ThirdParty/PureData/extra/lrshift~/lrshift~.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling lrshift~.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/pique_a2bbb35a.o: ../../ThirdParty/PureData/extra/pique/pique.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling pique.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/sigmund~_e0efd768.o: ../../ThirdParty/PureData/extra/sigmund~/sigmund~.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling sigmund~.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/stdout_6bc4f9e8.o: ../../ThirdParty/PureData/extra/stdout/stdout.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling stdout.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_arithmetic_a26d0d62.o: ../../ThirdParty/PureData/src/d_arithmetic.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_arithmetic.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_array_bff0f6eb.o: ../../ThirdParty/PureData/src/d_array.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_array.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_ctl_3e61b16d.o: ../../ThirdParty/PureData/src/d_ctl.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_ctl.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_dac_3e670418.o: ../../ThirdParty/PureData/src/d_dac.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_dac.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_delay_48201b95.o: ../../ThirdParty/PureData/src/d_delay.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_delay.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_fft_3e85b8c6.o: ../../ThirdParty/PureData/src/d_fft.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_fft.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_fft_fftsg_20e099cf.o: ../../ThirdParty/PureData/src/d_fft_fftsg.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_fft_fftsg.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_filter_60423e30.o: ../../ThirdParty/PureData/src/d_filter.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_filter.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_global_6af5179b.o: ../../ThirdParty/PureData/src/d_global.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_global.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_math_9dddaa80.o: ../../ThirdParty/PureData/src/d_math.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_math.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_misc_9e4ddf64.o: ../../ThirdParty/PureData/src/d_misc.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_misc.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_osc_3f0a3551.o: ../../ThirdParty/PureData/src/d_osc.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_osc.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_resample_72c3aa55.o: ../../ThirdParty/PureData/src/d_resample.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_resample.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_soundfile_871e089d.o: ../../ThirdParty/PureData/src/d_soundfile.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_soundfile.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/d_ugen_abd24173.o: ../../ThirdParty/PureData/src/d_ugen.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling d_ugen.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_all_guis_13eaa90b.o: ../../ThirdParty/PureData/src/g_all_guis.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_all_guis.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_array_7cbe43ee.o: ../../ThirdParty/PureData/src/g_array.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_array.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_bang_c2b9244d.o: ../../ThirdParty/PureData/src/g_bang.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_bang.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_canvas_61cd436d.o: ../../ThirdParty/PureData/src/g_canvas.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_canvas.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_editor_c7a43e42.o: ../../ThirdParty/PureData/src/g_editor.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_editor.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_graph_b93aa9a3.o: ../../ThirdParty/PureData/src/g_graph.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_graph.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_guiconnect_76e73ba4.o: ../../ThirdParty/PureData/src/g_guiconnect.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_guiconnect.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_hdial_d6a705ad.o: ../../ThirdParty/PureData/src/g_hdial.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_hdial.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_hslider_8b2fe8de.o: ../../ThirdParty/PureData/src/g_hslider.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_hslider.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_io_f6a02fbb.o: ../../ThirdParty/PureData/src/g_io.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_io.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_mycanvas_ddb3dd19.o: ../../ThirdParty/PureData/src/g_mycanvas.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_mycanvas.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_numbox_f7ae935a.o: ../../ThirdParty/PureData/src/g_numbox.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_numbox.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_readwrite_9053c19e.o: ../../ThirdParty/PureData/src/g_readwrite.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_readwrite.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_rtext_2c514b4.o: ../../ThirdParty/PureData/src/g_rtext.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_rtext.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_scalar_32f09901.o: ../../ThirdParty/PureData/src/g_scalar.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_scalar.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_template_1a1d520f.o: ../../ThirdParty/PureData/src/g_template.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_template.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_text_e1ad7a02.o: ../../ThirdParty/PureData/src/g_text.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_text.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_toggle_1f97fa69.o: ../../ThirdParty/PureData/src/g_toggle.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_toggle.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_traversal_b8014513.o: ../../ThirdParty/PureData/src/g_traversal.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_traversal.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_vdial_bb3e433b.o: ../../ThirdParty/PureData/src/g_vdial.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_vdial.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_vslider_a6edfaec.o: ../../ThirdParty/PureData/src/g_vslider.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_vslider.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/g_vumeter_a5a4a57f.o: ../../ThirdParty/PureData/src/g_vumeter.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling g_vumeter.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_atom_3157a260.o: ../../ThirdParty/PureData/src/m_atom.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_atom.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_binbuf_59c5a7db.o: ../../ThirdParty/PureData/src/m_binbuf.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_binbuf.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_class_5500c953.o: ../../ThirdParty/PureData/src/m_class.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_class.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_conf_347a4f73.o: ../../ThirdParty/PureData/src/m_conf.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_conf.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_glob_3b23d0c7.o: ../../ThirdParty/PureData/src/m_glob.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_glob.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_memory_fbdaeb90.o: ../../ThirdParty/PureData/src/m_memory.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_memory.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_obj_1b1aaa92.o: ../../ThirdParty/PureData/src/m_obj.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_obj.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_pd_e048c3.o: ../../ThirdParty/PureData/src/m_pd.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_pd.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/m_sched_9464eed2.o: ../../ThirdParty/PureData/src/m_sched.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling m_sched.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_audio_74503637.o: ../../ThirdParty/PureData/src/s_audio.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_audio.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_audio_dummy_cb209e20.o: ../../ThirdParty/PureData/src/s_audio_dummy.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_audio_dummy.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_file_a88a6d05.o: ../../ThirdParty/PureData/src/s_file.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_file.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_inter_106fd5bd.o: ../../ThirdParty/PureData/src/s_inter.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_inter.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_loader_499588dc.o: ../../ThirdParty/PureData/src/s_loader.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_loader.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_main_b40a6202.o: ../../ThirdParty/PureData/src/s_main.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_main.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_path_b92dd56e.o: ../../ThirdParty/PureData/src/s_path.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_path.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_print_88f7f34e.o: ../../ThirdParty/PureData/src/s_print.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_print.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/s_utf8_c2babdba.o: ../../ThirdParty/PureData/src/s_utf8.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling s_utf8.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_acoustics_ccbfba76.o: ../../ThirdParty/PureData/src/x_acoustics.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_acoustics.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_arithmetic_47c0cdce.o: ../../ThirdParty/PureData/src/x_arithmetic.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_arithmetic.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_array_5549a2ff.o: ../../ThirdParty/PureData/src/x_array.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_array.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_connective_b4ac63d2.o: ../../ThirdParty/PureData/src/x_connective.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_connective.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_gui_609719a1.o: ../../ThirdParty/PureData/src/x_gui.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_gui.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_interface_d15855f.o: ../../ThirdParty/PureData/src/x_interface.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_interface.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_list_ba30c802.o: ../../ThirdParty/PureData/src/x_list.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_list.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_midi_bbdea5c5.o: ../../ThirdParty/PureData/src/x_midi.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_midi.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_misc_bbe560d0.o: ../../ThirdParty/PureData/src/x_misc.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_misc.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_net_60f2a183.o: ../../ThirdParty/PureData/src/x_net.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_net.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_scalar_6bd11c10.o: ../../ThirdParty/PureData/src/x_scalar.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_scalar.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_text_c7a174d1.o: ../../ThirdParty/PureData/src/x_text.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_text.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_time_c7d49a71.o: ../../ThirdParty/PureData/src/x_time.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_time.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_vexp_fun_e64128cb.o: ../../ThirdParty/PureData/src/x_vexp_fun.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_vexp_fun.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_vexp_if_624547db.o: ../../ThirdParty/PureData/src/x_vexp_if.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_vexp_if.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/x_vexp_cb0b170b.o: ../../ThirdParty/PureData/src/x_vexp.c
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling x_vexp.c"
	$(V_AT)$(CC) $(JUCE_CFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BinaryData.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o: ../../JuceLibraryCode/juce_audio_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o: ../../JuceLibraryCode/juce_audio_devices.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o: ../../JuceLibraryCode/juce_audio_formats.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_plugin_client_utils_35fbf7.o: ../../JuceLibraryCode/juce_audio_plugin_client_utils.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_plugin_client_utils.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_plugin_client_VST2_fd137df.o: ../../JuceLibraryCode/juce_audio_plugin_client_VST2.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_plugin_client_VST2.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_processors_dea3173d.o: ../../JuceLibraryCode/juce_audio_processors.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_utils_c7eb679f.o: ../../JuceLibraryCode/juce_audio_utils.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_core_75b14332.o: ../../JuceLibraryCode/juce_core.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_core.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o: ../../JuceLibraryCode/juce_data_structures.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_events_d2be882c.o: ../../JuceLibraryCode/juce_events.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_events.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_graphics_9c18891e.o: ../../JuceLibraryCode/juce_graphics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o: ../../JuceLibraryCode/juce_gui_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o: ../../JuceLibraryCode/juce_gui_extra.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)

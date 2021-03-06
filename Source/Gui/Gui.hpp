/*
 // Copyright (c) 2015 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#ifndef __CAMOMILE_GUI__
#define __CAMOMILE_GUI__

#include "../InstanceProcessor.hpp"
#include "GuiParameter.hpp"
#include "GuiRadio.hpp"
#include "GuiToggle.hpp"
#include "GuiSlider.hpp"
#include "GuiNumbox.hpp"
#include "GuiLabel.hpp"
#include "GuiComment.hpp"
#include "GuiPatcher.hpp"
#include "GuiConsole.hpp"
#include "GuiAbout.hpp"
#include "GuiWindow.hpp"
#include "GuiFlowerButton.hpp"

// ==================================================================================== //
//                                      GUI TOGGLE                                      //
// ==================================================================================== //

class Gui
{
public:
    static Font getFont();
    static int getBorderSize() noexcept;
    static Colour const& getColorBg() noexcept;
    static Colour const& getColorBd() noexcept;
    static Colour const& getColorTxt() noexcept;
    static Colour const& getColorInv() noexcept;
};

#endif

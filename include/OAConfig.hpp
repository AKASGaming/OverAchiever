#pragma once
#include "config-utils/shared/config-utils.hpp"

// clang-format off
DECLARE_CONFIG(ModConfig,
  // Shows Achievments In-game (W.I.P)
  CONFIG_VALUE(AlertIngame, bool, "In-game Alerts", false)

  // Shows last Achievement on the Main Menu (W.I.P)
  CONFIG_VALUE(LatestInMenu, bool, "Latest Achievement in Main Menu", false)

  // Extra Achievements that Fandom thought should be added ツ
  CONFIG_VALUE(BonusAchievements, bool, "Extra Achievements", false)

  // Include a percentage circle based on how close you are to finishing the achievement
  CONFIG_VALUE(ProgressCircle, bool, "Progress Ring on Achievements", true)

  // Include a percentage circle based on how close you are to finishing the achievement
  CONFIG_VALUE(Sounds, bool, "Completed sounds", true)
               
// Probably not plausible to depend on akia tweaks/anytweaks because its being rewritten like once a month.
//  // false = , true = High Quality  https://github.com/NotAika/AikaTweaks/blob/main/src/ui/GraphicsViewController.cpp#L90
//  CONFIG_VALUE(DisplayStyle, bool, "Display Style (Scroll <--> Grid)", true)

  //CONFIG_VALUE(Alpha, float, "Alpha", 1.0);

  CONFIG_INIT_FUNCTION(
    CONFIG_INIT_VALUE(AlertIngame)
    CONFIG_INIT_VALUE(LatestInMenu)
    CONFIG_INIT_VALUE(BonusAchievements)
    CONFIG_INIT_VALUE(ProgressCircle)
    CONFIG_INIT_VALUE(Sounds)
//    CONFIG_INIT_VALUE(DisplayStyle)
//    CONFIG_INIT_VALUE(Alpha)
  )
)
// clang-format on

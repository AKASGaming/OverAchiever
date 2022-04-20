#include "AchievementManager.hpp"

#include "utils/FileHandling.hpp"

namespace OverAchiever {
void AchievementManager::loadAchievementsFromPack(AchievementPack pack) {}
void AchievementManager::loadAchievementPacks() {

    if(Utils::filesExistInFolder(PENDING_PACK_PATH)) {
        // pending packs exist
        auto pending_packs = Utils::getAllFoldersInFolder(PENDING_PACK_PATH);
        getLogger().info("Pending Packs:");
        for (int i = 0; i < pending_packs.size(); ++i) {
            std::string pack_path = pending_packs[i];
            getLogger().info("Loading %s", pack_path.c_str());
        }
    }

    auto packs = Utils::getAllFoldersInFolder(PACK_PATH);
    for (int i = 0; i < packs.size(); ++i) {
        getLogger().info("%s", packs[i].c_str());
    }
}
AchievementPack AchievementPack::loadFromDir() { return AchievementPack(); }
} // namespace OverAchiever
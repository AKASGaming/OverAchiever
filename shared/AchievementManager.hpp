#pragma once

#include <string>
#include <variant>
#include <vector>

namespace OverAchiever {

    /**
     * OPCODES
     * https://github.com/AKASGaming/OverAchiever/wiki/Predicates
     */

    template<typename T /* this can be nullptr! */>
    class Predicate {
    public:
        int opcode;
        T match;
        bool met;
    };

    typedef std::variant<
            Predicate<int>,
            Predicate<std::string>,
            Predicate<bool>,
            Predicate<float>,
            Predicate<void> // null in json
    > PredicateVariants;

    class Achievement {
    public:
        std::string uid;
        std::string title;
        std::string description;
        std::vector<PredicateVariants> predicates;
    };

    class AchievementPack {
    public:
        std::string uuid;
        std::string name;
        std::string summary;
        std::string description;
        std::string icon;
        std::string author;
        std::vector<Achievement> achievements;

        std::vector<std::pair<std::string, PredicateVariants>> custom_predicates;

        static AchievementPack loadFromDir();
    };

    class AchievementManager {
    public:
        static std::vector<AchievementPack> loadedPacks;
        static std::vector<Achievement> loadedAchievements;
        static std::vector<Achievement> completedAchievements;

        static std::vector<AchievementPack> newlyLoadedPacks;

        static void loadAchievementPacks();

    private:
        static void loadAchievementsFromPack(AchievementPack pack);
    };
}// namespace OverAchiever